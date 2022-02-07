# TMC project (COOKBOOK)

## 1. Setup env for Raspberry Pi on PC

#### Download raspberry lite and setup NFS file location

```
kn@laptop$ mkdir RASPI
kn@laptop$ cd RASPI
kn@laptop$ wget https://downloads.raspberrypi.org/raspbian_lite_latest
kn@laptop$ unzip raspbian_lite_latest
```

Read data from image
Note: *loop25* is loop device number (check available with `losetup`)

```
kn@laptop$ sudo losetup -P /dev/loop25 2019-09-26-raspbian-buster-lite.img
kn@laptop$ sudo mount /dev/loop25p2 /mnt
kn@laptop$ mkdir client
kn@laptop$ sudo rsync -xa --progress /mnt/ client/
kn@laptop$ sudo umount /mnt
```

Read boot partition from image

```
kn@laptop$ mkdir boot
kn@laptop$ sudo mount /dev/loop25p1 /mnt
kn@laptop$ cp -r /mnt/* boot/
kn@laptop$ sudo umount /mnt
```

Install `nfs-kernel-server` and `rpcbind`
```
kn@laptop$ sudo apt update
kn@laptop$ sudo apt install nfs-kernel-server rpcbind
```

Setup file `/etc/exports` for `nfs-kernel-server` : 
```
kn@laptop$ cat /etc/exports
# /etc/exports: the access control list for filesystems which may be exported
# to NFS clients. See exports(5).
#
# Example for NFSv2 and NFSv3:
# /srv/homes hostname1(rw,sync,no_subtree_check)
#hostname2(ro,sync,no_subtree_check) # might cause nfs to fail to start
#
# Example for NFSv4:
# /srv/nfs4 gss/krb5i(rw,sync,fsid=0,crossmnt,no_subtree_check)
# /srv/nfs4/homes gss/krb5i(rw,sync,no_subtree_check)

/home/kn/RASPI/client *(rw,sync,no_subtree_check,no_root_squash)
/home/kn/RASPI/boot *(rw,sync,no_subtree_check,no_root_squash)
```

Start `nfs-kernel-server` and `rpcbind` services

```
kn@laptop$ sudo systemctl enable nfs-kernel-server
kn@laptop$ sudo systemctl enable rpcbind
```
Check with `systemctl status`, if not active then 
```
kn@laptop$ sudo systemctl start nfs-kernel-server
kn@laptop$ sudo systemctl start rpcbind
```
Restart `nfs-kernel-server` service if you make changes to `/etc/exports`

Check again:
```
kn@laptop$ showmount -e 127.0.0.1
Export list for 127.0.0.1:
/home/kn/RASPI/boot *
/home/kn/RASPI/client *
```

#### Edit mount point
Edit mount point for filesystem Raspberry Pi in `RASPI/boot/cmdline.txt`
```
kn@laptop$ cat RASPI/boot/cmdline.txt
dwc_otg.lpm_enable=0 console=serial0,115200 console=tty1 root=/dev/nfs nfsroot=10.20.30.1:/home/kn/RASPI/client,vers=3 rw ip=dhcp rootwait elevator=deadline
```

Edit mount point for boot in `RASPI/client/etc/fstab`
```
kn@laptop$ cat RASPI/client/etc/fstab 
proc            /proc          proc        defaults          0         0
10.20.30.1:/home/kn/RASPI/boot /boot nfs rsize=8192,wsize=8192,timeo=14,intr,noauto,x-systemd.automount 0 0
```

#### Activate SSH for Raspberry Pi
```
kn@laptop$ cat RASPI/client/lib/systemd/system/sshswitch.service 
[Unit]
Description=Turn on SSH if /boot/ssh is present
#ConditionPathExistsGlob=/boot/ssh{,.txt}
After=regenerate_ssh_host_keys.service
[Service]
Type=oneshot
ExecStart=/bin/sh -c "update-rc.d ssh enable && invoke-rc.d ssh start && rm -f /boot/ssh; rm -f /boot/ssh.txt"
[Install]
WantedBy=multi-user.target
```

#### Setup Dnsmasq, DHCP using PC Ethernet connection:
> IF=enp7s0
> PREFIX=10.20.30

```
>kn@laptop$

sudo sysctl -w net.ipv4.ip_forward=1
sudo ip link set dev $IF down
sudo ip link set dev $IF address aa:aa:aa:aa:aa:aa
sudo ip link set dev $IF up
sudo ip address add dev $IF $PREFIX.1/24
sudo iptables -t nat -A POSTROUTING -s $PREFIX.0/24 -j MASQUERADE
```

#### Static IP 
In case IP address does not hold and keep changing. Configure static IP in file: `/etc/network/interfaces`

```
kn@laptop$ cat /etc/network/interfaces
...
# interfaces(5) file used by ifup(8) and ifdown(8)
auto lo
iface lo inet loopback

auto enp7s0
iface enp7s0 inet static
        address 10.20.30.1
        netmask 255.255.255.0
        dns-nameservers 8.8.8.8
        dns-nameservers 8.8.4.4 
```

and config nameserver in `/etc/resolv.conf` for dnsmasq to use.
```
kn@laptop$ cat /etc/resolv.conf
...
# See man:systemd-resolved.service(8) for details about the supported modes of
# operation for /etc/resolv.conf.

#options edns0
nameserver 127.0.0.53
```
#### Double checks and start dnsmasq
Check interface, ip address, iptables:
```
sudo ifconfig
sudo ip a
sudo iptables -t nat -L
```

Start Dnsmasq:
```
kn@laptop$ 
sudo dnsmasq -d -z -i enp7s0 -F 10.20.30.100,10.20.30.150,255.255.255.0,12h -O 3,10.20.30.1 -O 6,8.8.8.8,8.8.4.4 --pxe-service=0,"Raspberry Pi Boot" --enable-tftp --tftp-root=/home/kn/RASPI/boot
```

Connect Rapsberry Pi to PC, and wait for DHCP handshake from dnsmasq:
``` 
kn@laptop$
...
dnsmasq-dhcp: DHCPDISCOVER(enp7s0) b8:27:eb:73:ff:53 
dnsmasq-dhcp: DHCPOFFER(enp7s0) 10.20.30.127 b8:27:eb:73:ff:53 
dnsmasq-tftp: file /home/kn/RASPI/boot/bootsig.bin not found
dnsmasq-tftp: sent /home/kn/RASPI/boot/bootcode.bin to 10.20.30.127
dnsmasq-dhcp: DHCPDISCOVER(enp7s0) b8:27:eb:73:ff:53 
dnsmasq-dhcp: DHCPOFFER(enp7s0) 10.20.30.127 b8:27:eb:73:ff:53 
dnsmasq-tftp: file /home/kn/RASPI/boot/2073ff53/start.elf not found
dnsmasq-tftp: file /home/kn/RASPI/boot/autoboot.txt not found
dnsmasq-tftp: sent /home/kn/RASPI/boot/config.txt to 10.20.30.127
dnsmasq-tftp: file /home/kn/RASPI/boot/recovery.elf not found
dnsmasq-tftp: sent /home/kn/RASPI/boot/start.elf to 10.20.30.127
dnsmasq-tftp: sent /home/kn/RASPI/boot/fixup.dat to 10.20.30.127
dnsmasq-tftp: file /home/kn/RASPI/boot/recovery.elf not found
dnsmasq-tftp: sent /home/kn/RASPI/boot/config.txt to 10.20.30.127
dnsmasq-tftp: file /home/kn/RASPI/boot/dt-blob.bin not found
dnsmasq-tftp: file /home/kn/RASPI/boot/recovery.elf not found
dnsmasq-tftp: sent /home/kn/RASPI/boot/config.txt to 10.20.30.127
dnsmasq-tftp: file /home/kn/RASPI/boot/bootcfg.txt not found
dnsmasq-tftp: sent /home/kn/RASPI/boot/bcm2710-rpi-3-b.dtb to 10.20.30.127
dnsmasq-tftp: sent /home/kn/RASPI/boot/config.txt to 10.20.30.127
dnsmasq-tftp: sent /home/kn/RASPI/boot/cmdline.txt to 10.20.30.127
dnsmasq-tftp: file /home/kn/RASPI/boot/recovery8.img not found
dnsmasq-tftp: file /home/kn/RASPI/boot/recovery8-32.img not found
dnsmasq-tftp: file /home/kn/RASPI/boot/recovery7.img not found
dnsmasq-tftp: file /home/kn/RASPI/boot/recovery.img not found
dnsmasq-tftp: file /home/kn/RASPI/boot/kernel8-32.img not found
dnsmasq-tftp: error 0 Early terminate received from 10.20.30.127
dnsmasq-tftp: failed sending /home/kn/RASPI/boot/kernel8.img to 10.20.30.127
dnsmasq-tftp: file /home/kn/RASPI/boot/armstub8-32.bin not found
dnsmasq-tftp: error 0 Early terminate received from 10.20.30.127
dnsmasq-tftp: failed sending /home/kn/RASPI/boot/kernel7.img to 10.20.30.127
dnsmasq-tftp: sent /home/kn/RASPI/boot/kernel7.img to 10.20.30.127
dnsmasq-dhcp: DHCPDISCOVER(enp7s0) b8:27:eb:73:ff:53 
dnsmasq-dhcp: DHCPOFFER(enp7s0) 10.20.30.127 b8:27:eb:73:ff:53 
dnsmasq-dhcp: DHCPREQUEST(enp7s0) 10.20.30.127 b8:27:eb:73:ff:53 
dnsmasq-dhcp: DHCPACK(enp7s0) 10.20.30.127 b8:27:eb:73:ff:53 

```

## 2. Setup Raspberry Pi for wifi
#### Init rasp-config, Dnsmasq, hostapd
In our example, RaspPi connected in with ip 10.20.30.127.
Raspberry Pi default password: **raspberry**
```
kn@laptop$ ssh pi@10.20.30.127
```
Run `rasp-config` and config the wifi country to avoid rfkill block wifi.
Check if the file is correct.
```
pi@raspberrypi:~ $ cat /etc/wpa_supplicant/wpa_supplicant.conf 
ctrl_interface=DIR=/var/run/wpa_supplicant GROUP=netdev
update_config=1
country=FR
pi@raspberrypi:~ $ sudo rfkill unblock all
```

Install dnsmasq and hostapd for wifi hotspot in RaspPi
```
pi@rasp$ sudo apt update
pi@rasp$ sudo apt-get install hostapd
pi@rasp$ sudo apt-get install dnsmasq
```

Config Dnsmasq`/etc/dnsmasq.conf` :
```
$ sudo mv /etc/dnsmasq.conf /etc/dnsmasq.conf.bak       #backup original file
$ sudo nano /etc/dnsmasq.conf                           #create new file
interface=wlan0        #choose the interfac
dhcp-range=192.168.4.100,192.168.4.120,255.255.255.0,12h
domain=wlan
address=/mqtt.com/192.168.4.1        #allow the dns to resolve a domain in mqtt.com
```

Config hostapd `/etc/hostapd/hostapd.conf`
```
pi@raspberrypi:~ $ cat /etc/hostapd/hostapd.conf 
country_code=FR
interface=wlan0
ssid=raspberryWifi01
hw_mode=g
channel=7
wmm_enabled=0
macaddr_acl=0
auth_algs=1
ignore_broadcast_ssid=0
wpa=2
wpa_passphrase=raspberry01
wpa_key_mgmt=WPA-PSK
wpa_pairwise=TKIP
rsn_pairwise=CCMP
```

Config ipv4 forwarding
```
$ sudo nano /etc/sysctl.conf

net.ipv4.ip_forward=1     #uncomment this line
```

#### Static and manual config
https://www.raspberrypi.org/documentation/configuration/wireless/access-point-routed.md

Add nameserver in resolvconf.conf for dnsmasq
```
pi@raspberrypi:~ $ cat /etc/resolvconf.conf 
# Configuration for resolvconf(8)
# See resolvconf.conf(5) for details

resolv_conf=/etc/resolv.conf
# If you run a local name server, you should uncomment the below line and
# configure your subscribers configuration files below.
name_servers=127.0.0.56

# Mirror the Debian package defaults for the below resolvers
# so that resolvconf integrates seemlessly.
dnsmasq_resolv=/var/run/dnsmasq/resolv.conf
pdnsd_conf=/etc/pdnsd.conf
unbound_conf=/var/cache/unbound/resolvconf_resolvers.conf
```
Set Static IP and allow-hotplug for wlan0 to UP.
```
pi@raspberrypi:~ $ cat /etc/network/interfaces
# interfaces(5) file used by ifup(8) and ifdown(8)

# Please note that this file is written to be used with dhcpcd
# For static IP, consult /etc/dhcpcd.conf and 'man dhcpcd.conf'

# Include files from /etc/network/interfaces.d:
source-directory /etc/network/interfaces.d

allow-hotplug wlan0
iface wlan0 inet static
	address 192.168.4.1
	netmask 255.255.255.0
	gateway 192.168.4.1
```

Enable hostapd
```
pi@rasp$ sudo systemctl unmask hostapd
pi@rasp$ sudo systemctl enable hostapd
pi@rasp$ sudo systemctl enable dnsmasq
```

Reboot Raspberry Pi
```
pi@rasp$ sudo reboot
```

If there is no wifi hotspot, check status of `hostapd.service`. If not running then restart `hostapd.service`

## 3. Create ECC key and cert

Generation of private keys for the CA, the server and the client.
    
```
pi@rasp$
$ openssl ecparam -out ecc.ca.key.pem -name prime256v1 -genkey 
$ openssl ecparam -out ecc.raspberry.key.pem -name prime256v1 -genkey 
$ openssl ecparam -out ecc.esp8266.key.pem -name prime256v1 -genkey
```
Generation self-signed certificate of the CA which will be used to sign those of the server and client
```
pi@rasp$
$ openssl req -config <(printf "[req]\ndistinguished_name=dn\n[dn]\n[ext]\nbasicConstraints=CA:TRUE") -new -nodes -subj "/C=FR/L=Limoges/O=TMC/OU=IOT/CN=ACTMC" -x509 -extensions ext -sha256 -key ecc.ca.key.pem -text -out ecc.ca.cert.pem

```
Generation and signing of the certificate for the server (Raspberry Pi)
```
pi@rasp$
$ openssl req -config <(printf "[req]\ndistinguished_name=dn\n[dn]\n[ext]\nbasicConstraints=CA:FALSE") -new -subj   "/C=FR/L=Limoges/O=TMC/OU=IOT/CN=mqtt.com" -reqexts ext -sha256 -key ecc.raspberry.key.pem -text -out ecc.raspberry.csr.pem

$ openssl x509 -req -days 3650 -CA ecc.ca.cert.pem -CAkey ecc.ca.key.pem -CAcreateserial -extfile <(printf   "basicConstraints=critical,CA:FALSE") -in ecc.raspberry.csr.pem -text -out ecc.raspberry.cert.pem -addtrust clientAuth
```
Generating and signing the certificate for the client (Esp8266)
```
pi@rasp$
$ openssl req -config <(printf "[req]\ndistinguished_name=dn\n[dn]\n[ext]\nbasicConstraints=CA:FALSE") -new -subj   "/C=FR/L=Limoges/O=TMC/OU=IOT/CN=esp8266" -reqexts ext -sha256 -key ecc.esp8266.key.pem -text -out ecc.esp8266.csr.pem

$ openssl x509 -req -days 3650 -CA ecc.ca.cert.pem -CAkey ecc.ca.key.pem -CAcreateserial -extfile <(printf   "basicConstraints=critical,CA:FALSE") -in ecc.esp8266.csr.pem -text -out ecc.esp8266.cert.pem -addtrust clientAuth
```

## 4. Raspberry Pi : Mosquitto for MQTT

Installation of the MQTT server packages
```
pi@rasp$
$ sudo apt-get install mosquitto 
$ sudo apt-get install mosquitto-clients
```

Activate the protection of access to the server by a password
To activate the protection of access to the MQTT server by password, we add in the file `/etc/mosquitto/mosquitto.conf`

```
allow_anonymous false
password_file /etc/mosquitto/mosquitto_passwd

listener 8883
cafile /home/pi/NEWCERT/ecc.ca.cert.pem
certfile /home/pi/NEWCERT/ecc.raspi.cert.pem
keyfile /home/pi/NEWCERT/ecc.raspi.key.pem
require_certificate true
```

It will enable the user authentication by password and certificate for mosquitto.

Then we use `mosquitto_passwd` to generate the user `mqtt.tmc.com` in file `mosquitto_passwd`:

```
pi@rasp$
$ sudo mosquitto_passwd -c /etc/mosquitto/mosquitto_passwd mqtt.tmc.com    
```

We restart Mosquitto service
```
pi@rasp$
$ sudo systemctl restart mosquitto.service
$ systemct status mosquitto.service
● mosquitto.service - Mosquitto MQTT v3.1/v3.1.1 Broker
   Loaded: loaded (/lib/systemd/system/mosquitto.service; enabled; vendor preset: enabled)
   Active: active (running) since Sun 2021-02-21 21:46:12 GMT; 21h ago
     Docs: man:mosquitto.conf(5)
           man:mosquitto(8)
 Main PID: 385 (mosquitto)
    Tasks: 1 (limit: 2200)
   Memory: 2.5M
   CGroup: /system.slice/mosquitto.service
           └─385 /usr/sbin/mosquitto -c /etc/mosquitto/mosquitto.conf

Feb 21 21:46:11 raspberrypi systemd[1]: Starting Mosquitto MQTT v3.1/v3.1.1 Broker...
Feb 21 21:46:12 raspberrypi systemd[1]: Started Mosquitto MQTT v3.1/v3.1.1 Broker.
```
#### Publish and Subcribe a topic

To publish a topic using the username *mqtt.tcm.com* and pass *123456789* and a client certificate (cert for esp8266)
```
pi@rasp$ 
$ mosquitto_pub -h mqtt.com -p 8883 -u mqtt.tmc.com -P 123456789 -t '/esp8266' --cafile ecc.ca.cert.pem --cert ecc.esp8266.cert.pem --key ecc.es8266.key.pem -m 'Hello !'
```
To subcribe a topic using the username *mqtt.tcm.com* and pass *123456789* and a server certificate (cert for raspberry)
```
pi@rasp$ 
$ mosquitto_sub -h mqtt.com -p 8883 -u mqtt.tmc.com -P 123456789 -t '/esp8266' --cafile ecc.ca.cert.pem --cert ecc.rasp.cert.pem --key ecc.rasp.key.pem
Hello !
```

## 5. ESP8266: Mongoose OS + ATECC508


Wiring the ESP8266 and ATECC508 as follow:

| Function | ATECC508 Pin | ESP8266 Pin | Wemos Pin |
| -------- | ------------ | ----------- | --------- |
| SDA      | 5            | GPIO12      | D6        |
| SCL      | 6            | GPIO14      | D5        |
| GND      | 4            | Any suitable GND| Any suitable GND|
| VCC      | 8            | Any suitable 3.3v | Any suitable 3.3v|

Ref:https://mongoose-os.com/blog/mongoose-esp8266-atecc508-aws/

Connect ESP8266 to PC using USB cable
```
kn@laptop$
$ lsusb
...
Bus 001 Device 014: ID 10c4:ea60 Cygnal Integrated Products, Inc. CP210x UART Bridge / myAVR mySmartUSB light
...
```

#### Install Mongoose OS
Configure ESP8266 using Mongoose OS to generate a flash for ESP8266
Site of OS : https://mongoose-os.com


```
kn@latop$
$ sudo add-apt-repository ppa:mongoose-os/mos
$ sudo apt-get update
$ sudo apt-get install mos
$ mos --help
$ mos             #this command run WebUI version for mos 
```

To generate a flash, install docker and set the execution right

```
kn@latop$
$ sudo apt install docker.io
$ sudo groupadd docker
$ sudo usermod -aG docker $USER
```

Then restart laptop for the right to work.

#### New MQTT app 

Install new app and config file `mos.yml` like following:

```
kn@laptop$
$ git clone https://github.com/mongoose-os-apps/empty my-app
$ cd my-app
$ cat mos.yml
author: mongoose-os
description: A Mongoose OS app skeleton
version: 1.0
libs_version: ${mos.version}
modules_version: ${mos.version}
mongoose_os_version: ${mos.version}
# Optional. List of tags for online search.
tags:
    - c
# List of files / directories with C sources. No slashes at the end of dir names.
sources:
    - src
# List of dirs. Files from these dirs will be copied to the device filesystem
filesystem:
    - fs
config_schema:
  - ["debug.level", 3]
  - ["sys.atca.enable", "b", true, {title: "enable atca for ATEC508"}]
  - ["i2c.enable", "b", true, {title: "Enable I2C"}]
  - ["sys.atca.i2c_addr", "i", 0x60, {title: "I2C address of the chip"}]
  - ["mqtt.enable", "b", true, {title: "Activate service MQTT"}]
  - ["mqtt.server", "s", "mqtt.com:8883", {title: "Adresse of server MQTT "}]
  - ["mqtt.pub", "s", "/esp8266", {title: "the topic "}]
  - ["mqtt.user", "s", "mqtt.tmc.com", {title: "usename for access server MQTT"}]
  - ["mqtt.pass", "s", "123456789", {title: "password for access  server MQTT"}]
  - ["mqtt.ssl_ca_cert", "s", "ecc.ca.cert.pem", {title: "Le certificat AC pour verifier le certificat du serveur"}]
  - ["mqtt.ssl_cert", "s", "ecc.esp8266.cert.pem", {title: "Le certificat du client"}]
  - ["mqtt.ssl_key", "ATCA:0"]
cdefs:
  MG_ENABLE_MQTT: 1
  MG_ENABLE_SSL: 1

build_vars:
  # Override to 0 to disable ATECCx08 support.    
  # Set to 1 to enable ATECCx08 support.
  MGOS_MBEDTLS_ENABLE_ATCA: 1

libs:
  - origin: https://github.com/mongoose-os-libs/ca-bundle
  - origin: https://github.com/mongoose-os-libs/rpc-service-config
  - origin: https://github.com/mongoose-os-libs/rpc-service-atca
  - origin: https://github.com/mongoose-os-libs/rpc-service-fs
  - origin: https://github.com/mongoose-os-libs/rpc-mqtt
  - origin: https://github.com/mongoose-os-libs/rpc-uart
  - origin: https://github.com/mongoose-os-libs/wifi
  - origin: https://github.com/mongoose-os-libs/rpc-service-i2c
  - origin: https://github.com/mongoose-os-libs/mbedtls
  
# Used by the mos tool to catch mos binaries incompatible with this file format
manifest_version: 2017-05-18
```

Copy certificate file `ecc.ca.cert.pem` and `ecc.esp8266.cert.pem` to folder `fs` inside `my-app`.

Modify the file `my-app/src/main.c` like follow:

```
kn@laptop:my-app/$
$ cd src
$ cat main.c
#include <stdio.h>
#include "mgos.h"
#include "mgos_mqtt.h"
static void my_timer_cb(void *arg) {
  char *message = "This message published from ESP8266";
  mgos_mqtt_pub("/esp8266", message, strlen(message), 1, 0);
  (void) arg;
}
enum mgos_app_init_result mgos_app_init(void) {
  mgos_set_timer(3000, MGOS_TIMER_REPEAT, my_timer_cb, NULL);
  return MGOS_APP_INIT_SUCCESS;
}
}
```
#### Flash esp8266
Generate a flash for ESP8266 and flash with `mos flash`:

```
kn@laptop:my-app/$
$ mos build --local --arch esp8266
Warning: --arch is deprecated, use --platform
Firmware saved to /home/kn/my-app/build/fw.zip

$ mos flash
Loaded my-app/esp8266 version 1.0 (20210221-203859)
Using port /dev/ttyUSB0
Opening /dev/ttyUSB0 @ 115200...
Connecting to ESP8266 ROM, attempt 1 of 10...
  Connected, chip: ESP8266EX
Running flasher @ 921600...
  Flasher is running
Flash size: 16777216, params: 0x029f (dio,128m,80m)
Deduping...
     2320 @ 0x0 -> 0
   262144 @ 0x8000 -> 0
   592592 @ 0x100000 -> 0
      128 @ 0x3fc000 -> 0
Writing...
     4096 @ 0x7000
     4096 @ 0x3fb000
Wrote 8192 bytes in 0.08 seconds (830.14 KBit/sec)
Verifying...
     2320 @ 0x0
     4096 @ 0x7000
   262144 @ 0x8000
   592592 @ 0x100000
     4096 @ 0x3fb000
      128 @ 0x3fc000
Booting firmware...
All done!
```

#### Wifi Config

Connect to wifi hotspot broadcast by raspberry pi

```
$ mos wifi raspberryWifi01  raspberry01

Using port /dev/ttyUSB0
Getting configuration...
Setting new configuration...
```

Or config the wifi manually in file `mos.yml` by add the lines to `config-schema:` tag

```
...
config-schema:
  ...
  - ["wifi.ap.enable","b",false,{title: "disable wifi ap"}]
  - ["wifi.sta.enable","b",true,{title: "enable wifi sta"}]
  - ["wifi.sta.ssid","s","raspberryWifi01",{title: "ssid wifi sta"}]
  - ["wifi.sta.pass","s","raspberry01",{title: "pass wifi sta"}]
...
```

**Incase the chip ATECCC508 is fresh** new from factory. It might haven't configurated (or locked) yet. 

Download the configuration file for ATECC508:
https://raw.githubusercontent.com/cesanta/mongoose-os/b47838daef013b0963925283c96648a024dc4ae2/fw/tools/atca-test-config.yaml

And use the it for config the chip:
```
kn@laptop:my-app/$
$ mos -X atca-set-config atca-test-config.yaml --dry-run=false
$ mos -X atca-lock-zone config --dry-run=false
$ mos -X atca-lock-zone data --dry-run=false
```

**Note**: These changes are irreversible: Once zones are locked, they cannot be unlocked. Also, this sample configuration is very permissive and is only suitable for testing; do not use it for production deployments. Please refer to the Microchip manual and other documentation when creating a production configuration.

Install private key into ATECC508:
```
kn@laptop:my-app/$
$ openssl rand -hex 32 > slot4.key
$ mos -X atca-set-key 4 slot4.key --dry-run=false

AECC508A rev 0x5000 S/N 0x012352aad1bbf378ee, config is locked, data is locked
Slot 4 is a non-ECC private key slot
SetKey successful.
```

Then add certificate key to ATECC508
```
kn@laptop:my-app/$
$ mos -X atca-set-key 0 ecc.esp8266.key.pem --write-key=slot4.key --dry-run=false

Using port /dev/ttyUSB0
ATECC508A rev 0x5000 S/N 0x0123fb976eb9b4f3ee, config is locked, data is locked
Slot 0 is a ECC private key slot
Parsed EC PRIVATE KEY
Data zone is locked, will perform encrypted write using slot 4 using slot4.key
SetKey successful.
```

Start `mos console` to see the LOG from esp8266

## 5. Communications and security

Output for init ATCA (ATECC) :

```
[Feb 22 22:48:24.367] mgos_deps_init.c:100    Init i2c 1.0...
[Feb 22 22:48:24.377] mgos_i2c_gpio_maste:248 I2C GPIO init ok (SDA: 12, SCL: 14, freq: 100000)
[Feb 22 22:48:24.377] mgos_deps_init.c:100    Init atca 1.0...
[Feb 22 22:48:24.422] mgos_atca.c:117         ATECC508A @ 0/0x60: rev 0x5000 S/N 0x1233bd44dfc6509ee, zone lock status: yes, yes; ECDH slots: 0x0c
```

Output for wifi connected:
```
[Feb 22 22:48:28.326] esp_main.c:145          SDK: connected with raspberryWifi01, channel 7
[Feb 22 22:48:28.331] esp_main.c:145          SDK: dhcp client start...
[Feb 22 22:48:28.339] mgos_wifi.c:133         WiFi STA: Connected, BSSID b8:27:eb:26:aa:06 ch 7 RSSI -57
[Feb 22 22:48:28.345] mgos_event.c:134        ev WFI2 triggered 0 handlers
[Feb 22 22:48:28.349] mgos_net.c:90           WiFi STA: connected
[Feb 22 22:48:28.353] mgos_event.c:134        ev NET2 triggered 1 handlers
[Feb 22 22:48:28.805] esp_main.c:145          SDK: ip:192.168.4.100,mask:255.255.255.0,gw:192.168.4.1
[Feb 22 22:48:28.810] mgos_event.c:134        ev WFI3 triggered 0 handlers
[Feb 22 22:48:28.819] mgos_net.c:101          WiFi STA: ready, IP 192.168.4.100, GW 192.168.4.1, DNS 192.168.4.1
```

Output for certificate verify ok:
```
[Feb 22 22:48:28.829] mgos_mqtt_conn.c:471    MQTT0 connecting to mqtt.com:8883
[Feb 22 22:48:28.829] mgos_event.c:134        ev MOS6 triggered 0 handlers
[Feb 22 22:48:28.837] mongoose.c:3142         0x3ffef1ac mqtt.com:8883 ecc.esp8266.cert.pem,ATCA:0,ecc.ca.cert.pem
[Feb 22 22:48:28.847] mgos_vfs.c:280          ecc.esp8266.cert.pem -> /ecc.esp8266.cert.pem pl 1 -> 1 0x3ffefe3c (refs 1)
[Feb 22 22:48:28.857] mgos_vfs.c:375          open ecc.esp8266.cert.pem 0x0 0x1b6 => 0x3ffefe3c ecc.esp8266.cert.pem 1 => 257 (refs 1)
...
[Feb 22 22:48:28.898] mgos_vfs.c:280          ecc.ca.cert.pem -> /ecc.ca.cert.pem pl 1 -> 1 0x3ffefe3c (refs 1)
[Feb 22 22:48:28.907] mgos_vfs.c:375          open ecc.ca.cert.pem 0x0 0x1b6 => 0x3ffefe3c ecc.ca.cert.pem 1 => 257 (refs 1)
[Feb 22 22:48:28.913] mgos_vfs.c:409          close 257 => 0x3ffefe3c:1 => 0 (refs 0)
[Feb 22 22:48:28.919] mongoose.c:3142         0x3fff1f5c udp://192.168.4.1:53 -,-,-
[Feb 22 22:48:28.924] mongoose.c:3012         0x3fff1f5c udp://192.168.4.1:53
[Feb 22 22:48:28.929] mgos_event.c:134        ev NET3 triggered 2 handlers
[Feb 22 22:48:28.936] mongoose.c:3026         0x3fff1f5c udp://192.168.4.1:53 -> 0
[Feb 22 22:48:28.942] mgos_mongoose.c:66      New heap free LWM: 39816
[Feb 22 22:48:28.958] mongoose.c:3012         0x3ffef1ac tcp://192.168.4.1:8883
[Feb 22 22:48:28.964] mgos_mongoose.c:66      New heap free LWM: 39512
[Feb 22 22:48:28.980] mongoose.c:3026         0x3ffef1ac tcp://192.168.4.1:8883 -> 0
[Feb 22 22:48:29.000] mongoose.c:4912         0x3ffef1ac ciphersuite: TLS-ECDHE-ECDSA-WITH-AES-128-GCM-SHA256
[Feb 22 22:48:29.006] mgos_mongoose.c:66      New heap free LWM: 39040
[Feb 22 22:48:29.019] mgos_vfs.c:280          ecc.ca.cert.pem -> /ecc.ca.cert.pem pl 1 -> 1 0x3ffefe3c (refs 1)
[Feb 22 22:48:29.029] mgos_vfs.c:375          open ecc.ca.cert.pem 0x0 0x1b6 => 0x3ffefe3c ecc.ca.cert.pem 1 => 257 (refs 1)
[Feb 22 22:48:29.035] mgos_vfs.c:535          fstat 257 => 0x3ffefe3c:1 => 0 (size 1974)
[Feb 22 22:48:29.097] ATCA ECDSA verify ok, verified
[Feb 22 22:48:29.104] mgos_vfs.c:409          close 257 => 0x3ffefe3c:1 => 0 (refs 0)
[Feb 22 22:48:29.164] ATCA ECDSA verify ok, verified
[Feb 22 22:48:29.205] ATCA:3 ECDH get pubkey ok
[Feb 22 22:48:29.251] ATCA:3 ECDH ok
[Feb 22 22:48:29.321] ATCA:0 ECDSA sign ok

```

Output for MQTT publish:
```
[Feb 22 22:48:30.545] mgos_mqtt_conn.c:196    MQTT0 pub -> 4 /esp8266 @ 1 (35): [This message published from ESP8266]
[Feb 22 22:48:30.561] mgos_mqtt_conn.c:222    MQTT0 event: 204
[Feb 22 22:48:30.561] mgos_mqtt_conn.c:161    MQTT0 ack 4
[Feb 22 22:48:33.544] mgos_mqtt_conn.c:196    MQTT0 pub -> 5 /esp8266 @ 1 (35): [This message published from ESP8266]
[Feb 22 22:48:33.561] mgos_mqtt_conn.c:222    MQTT0 event: 204
[Feb 22 22:48:33.561] mgos_mqtt_conn.c:161    MQTT0 ack 5
[Feb 22 22:48:36.545] mgos_mqtt_conn.c:196    MQTT0 pub -> 6 /esp8266 @ 1 (35): [This message published from ESP8266]
[Feb 22 22:48:36.561] mgos_mqtt_conn.c:222    MQTT0 event: 204
[Feb 22 22:48:36.561] mgos_mqtt_conn.c:161    MQTT0 ack 6
```
