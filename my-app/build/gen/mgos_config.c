/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.19.1/apps/my-app/esp8266/build_contexts/build_ctx_934047261/build/gen/ /mongoose-os/src/mgos_debug_udp_config.yaml /data/fwbuild-volumes/2.19.1/apps/my-app/esp8266/build_contexts/build_ctx_934047261/build/gen/mos_conf_schema.yml
 */

#include "mgos_config.h"

#include <stdbool.h>

#include "mgos_config_util.h"


/* struct mgos_config */
static const struct mgos_conf_entry mgos_config_schema_[] = {
    {.type = CONF_TYPE_OBJECT, .key = "", .offset = 0, .num_desc = 174},
    {.type = CONF_TYPE_OBJECT, .key = "debug", .offset = offsetof(struct mgos_config, debug), .num_desc = 12},
    {.type = CONF_TYPE_STRING, .key = "udp_log_addr", .offset = offsetof(struct mgos_config, debug.udp_log_addr)},
    {.type = CONF_TYPE_INT, .key = "udp_log_level", .offset = offsetof(struct mgos_config, debug.udp_log_level)},
    {.type = CONF_TYPE_INT, .key = "mbedtls_level", .offset = offsetof(struct mgos_config, debug.mbedtls_level)},
    {.type = CONF_TYPE_INT, .key = "level", .offset = offsetof(struct mgos_config, debug.level)},
    {.type = CONF_TYPE_STRING, .key = "file_level", .offset = offsetof(struct mgos_config, debug.file_level)},
    {.type = CONF_TYPE_INT, .key = "event_level", .offset = offsetof(struct mgos_config, debug.event_level)},
    {.type = CONF_TYPE_INT, .key = "stdout_uart", .offset = offsetof(struct mgos_config, debug.stdout_uart)},
    {.type = CONF_TYPE_INT, .key = "stderr_uart", .offset = offsetof(struct mgos_config, debug.stderr_uart)},
    {.type = CONF_TYPE_INT, .key = "factory_reset_gpio", .offset = offsetof(struct mgos_config, debug.factory_reset_gpio)},
    {.type = CONF_TYPE_STRING, .key = "mg_mgr_hexdump_file", .offset = offsetof(struct mgos_config, debug.mg_mgr_hexdump_file)},
    {.type = CONF_TYPE_STRING, .key = "stdout_topic", .offset = offsetof(struct mgos_config, debug.stdout_topic)},
    {.type = CONF_TYPE_STRING, .key = "stderr_topic", .offset = offsetof(struct mgos_config, debug.stderr_topic)},
    {.type = CONF_TYPE_OBJECT, .key = "i2c", .offset = offsetof(struct mgos_config, i2c), .num_desc = 5},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c.enable)},
    {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c.freq)},
    {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c.debug)},
    {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c.sda_gpio)},
    {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c.scl_gpio)},
    {.type = CONF_TYPE_OBJECT, .key = "i2c1", .offset = offsetof(struct mgos_config, i2c1), .num_desc = 5},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, i2c1.enable)},
    {.type = CONF_TYPE_INT, .key = "freq", .offset = offsetof(struct mgos_config, i2c1.freq)},
    {.type = CONF_TYPE_BOOL, .key = "debug", .offset = offsetof(struct mgos_config, i2c1.debug)},
    {.type = CONF_TYPE_INT, .key = "sda_gpio", .offset = offsetof(struct mgos_config, i2c1.sda_gpio)},
    {.type = CONF_TYPE_INT, .key = "scl_gpio", .offset = offsetof(struct mgos_config, i2c1.scl_gpio)},
    {.type = CONF_TYPE_OBJECT, .key = "sys", .offset = offsetof(struct mgos_config, sys), .num_desc = 8},
    {.type = CONF_TYPE_OBJECT, .key = "atca", .offset = offsetof(struct mgos_config, sys.atca), .num_desc = 4},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, sys.atca.enable)},
    {.type = CONF_TYPE_INT, .key = "i2c_bus", .offset = offsetof(struct mgos_config, sys.atca.i2c_bus)},
    {.type = CONF_TYPE_INT, .key = "i2c_addr", .offset = offsetof(struct mgos_config, sys.atca.i2c_addr)},
    {.type = CONF_TYPE_INT, .key = "ecdh_slots_mask", .offset = offsetof(struct mgos_config, sys.atca.ecdh_slots_mask)},
    {.type = CONF_TYPE_STRING, .key = "tz_spec", .offset = offsetof(struct mgos_config, sys.tz_spec)},
    {.type = CONF_TYPE_INT, .key = "wdt_timeout", .offset = offsetof(struct mgos_config, sys.wdt_timeout)},
    {.type = CONF_TYPE_STRING, .key = "pref_ota_lib", .offset = offsetof(struct mgos_config, sys.pref_ota_lib)},
    {.type = CONF_TYPE_OBJECT, .key = "device", .offset = offsetof(struct mgos_config, device), .num_desc = 5},
    {.type = CONF_TYPE_STRING, .key = "id", .offset = offsetof(struct mgos_config, device.id)},
    {.type = CONF_TYPE_STRING, .key = "license", .offset = offsetof(struct mgos_config, device.license)},
    {.type = CONF_TYPE_STRING, .key = "mac", .offset = offsetof(struct mgos_config, device.mac)},
    {.type = CONF_TYPE_STRING, .key = "public_key", .offset = offsetof(struct mgos_config, device.public_key)},
    {.type = CONF_TYPE_STRING, .key = "sn", .offset = offsetof(struct mgos_config, device.sn)},
    {.type = CONF_TYPE_STRING, .key = "conf_acl", .offset = offsetof(struct mgos_config, conf_acl)},
    {.type = CONF_TYPE_OBJECT, .key = "mqtt", .offset = offsetof(struct mgos_config, mqtt), .num_desc = 24},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt.enable)},
    {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt.server)},
    {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt.client_id)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt.user)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt.pass)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_min)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt.reconnect_timeout_max)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt.ssl_ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt.ssl_cipher_suites)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_identity)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt.ssl_psk_key)},
    {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt.clean_session)},
    {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt.keep_alive)},
    {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt.will_topic)},
    {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt.will_message)},
    {.type = CONF_TYPE_BOOL, .key = "will_retain", .offset = offsetof(struct mgos_config, mqtt.will_retain)},
    {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt.max_qos)},
    {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt.recv_mbuf_limit)},
    {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt.require_time)},
    {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt.cloud_events)},
    {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, mqtt.max_queue_length)},
    {.type = CONF_TYPE_STRING, .key = "pub", .offset = offsetof(struct mgos_config, mqtt.pub)},
    {.type = CONF_TYPE_OBJECT, .key = "mqtt1", .offset = offsetof(struct mgos_config, mqtt1), .num_desc = 24},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, mqtt1.enable)},
    {.type = CONF_TYPE_STRING, .key = "server", .offset = offsetof(struct mgos_config, mqtt1.server)},
    {.type = CONF_TYPE_STRING, .key = "client_id", .offset = offsetof(struct mgos_config, mqtt1.client_id)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, mqtt1.user)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, mqtt1.pass)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_min", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_min)},
    {.type = CONF_TYPE_DOUBLE, .key = "reconnect_timeout_max", .offset = offsetof(struct mgos_config, mqtt1.reconnect_timeout_max)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_key)},
    {.type = CONF_TYPE_STRING, .key = "ssl_ca_cert", .offset = offsetof(struct mgos_config, mqtt1.ssl_ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ssl_cipher_suites", .offset = offsetof(struct mgos_config, mqtt1.ssl_cipher_suites)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_identity", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_identity)},
    {.type = CONF_TYPE_STRING, .key = "ssl_psk_key", .offset = offsetof(struct mgos_config, mqtt1.ssl_psk_key)},
    {.type = CONF_TYPE_BOOL, .key = "clean_session", .offset = offsetof(struct mgos_config, mqtt1.clean_session)},
    {.type = CONF_TYPE_INT, .key = "keep_alive", .offset = offsetof(struct mgos_config, mqtt1.keep_alive)},
    {.type = CONF_TYPE_STRING, .key = "will_topic", .offset = offsetof(struct mgos_config, mqtt1.will_topic)},
    {.type = CONF_TYPE_STRING, .key = "will_message", .offset = offsetof(struct mgos_config, mqtt1.will_message)},
    {.type = CONF_TYPE_BOOL, .key = "will_retain", .offset = offsetof(struct mgos_config, mqtt1.will_retain)},
    {.type = CONF_TYPE_INT, .key = "max_qos", .offset = offsetof(struct mgos_config, mqtt1.max_qos)},
    {.type = CONF_TYPE_INT, .key = "recv_mbuf_limit", .offset = offsetof(struct mgos_config, mqtt1.recv_mbuf_limit)},
    {.type = CONF_TYPE_BOOL, .key = "require_time", .offset = offsetof(struct mgos_config, mqtt1.require_time)},
    {.type = CONF_TYPE_BOOL, .key = "cloud_events", .offset = offsetof(struct mgos_config, mqtt1.cloud_events)},
    {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, mqtt1.max_queue_length)},
    {.type = CONF_TYPE_STRING, .key = "pub", .offset = offsetof(struct mgos_config, mqtt1.pub)},
    {.type = CONF_TYPE_OBJECT, .key = "rpc", .offset = offsetof(struct mgos_config, rpc), .num_desc = 20},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.enable)},
    {.type = CONF_TYPE_BOOL, .key = "http_enable", .offset = offsetof(struct mgos_config, rpc.http_enable)},
    {.type = CONF_TYPE_BOOL, .key = "service_sys_enable", .offset = offsetof(struct mgos_config, rpc.service_sys_enable)},
    {.type = CONF_TYPE_INT, .key = "max_frame_size", .offset = offsetof(struct mgos_config, rpc.max_frame_size)},
    {.type = CONF_TYPE_INT, .key = "max_queue_length", .offset = offsetof(struct mgos_config, rpc.max_queue_length)},
    {.type = CONF_TYPE_INT, .key = "default_out_channel_idle_close_timeout", .offset = offsetof(struct mgos_config, rpc.default_out_channel_idle_close_timeout)},
    {.type = CONF_TYPE_STRING, .key = "acl_file", .offset = offsetof(struct mgos_config, rpc.acl_file)},
    {.type = CONF_TYPE_STRING, .key = "auth_domain", .offset = offsetof(struct mgos_config, rpc.auth_domain)},
    {.type = CONF_TYPE_STRING, .key = "auth_file", .offset = offsetof(struct mgos_config, rpc.auth_file)},
    {.type = CONF_TYPE_OBJECT, .key = "mqtt", .offset = offsetof(struct mgos_config, rpc.mqtt), .num_desc = 5},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, rpc.mqtt.enable)},
    {.type = CONF_TYPE_STRING, .key = "pub_topic", .offset = offsetof(struct mgos_config, rpc.mqtt.pub_topic)},
    {.type = CONF_TYPE_STRING, .key = "sub_topic", .offset = offsetof(struct mgos_config, rpc.mqtt.sub_topic)},
    {.type = CONF_TYPE_BOOL, .key = "sub_wc", .offset = offsetof(struct mgos_config, rpc.mqtt.sub_wc)},
    {.type = CONF_TYPE_INT, .key = "qos", .offset = offsetof(struct mgos_config, rpc.mqtt.qos)},
    {.type = CONF_TYPE_OBJECT, .key = "uart", .offset = offsetof(struct mgos_config, rpc.uart), .num_desc = 4},
    {.type = CONF_TYPE_INT, .key = "uart_no", .offset = offsetof(struct mgos_config, rpc.uart.uart_no)},
    {.type = CONF_TYPE_INT, .key = "baud_rate", .offset = offsetof(struct mgos_config, rpc.uart.baud_rate)},
    {.type = CONF_TYPE_INT, .key = "fc_type", .offset = offsetof(struct mgos_config, rpc.uart.fc_type)},
    {.type = CONF_TYPE_STRING, .key = "dst", .offset = offsetof(struct mgos_config, rpc.uart.dst)},
    {.type = CONF_TYPE_OBJECT, .key = "wifi", .offset = offsetof(struct mgos_config, wifi), .num_desc = 61},
    {.type = CONF_TYPE_OBJECT, .key = "ap", .offset = offsetof(struct mgos_config, wifi.ap), .num_desc = 15},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.ap.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.ap.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.ap.pass)},
    {.type = CONF_TYPE_BOOL, .key = "hidden", .offset = offsetof(struct mgos_config, wifi.ap.hidden)},
    {.type = CONF_TYPE_INT, .key = "channel", .offset = offsetof(struct mgos_config, wifi.ap.channel)},
    {.type = CONF_TYPE_INT, .key = "max_connections", .offset = offsetof(struct mgos_config, wifi.ap.max_connections)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.ap.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.ap.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.ap.gw)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_start", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_start)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_end", .offset = offsetof(struct mgos_config, wifi.ap.dhcp_end)},
    {.type = CONF_TYPE_INT, .key = "trigger_on_gpio", .offset = offsetof(struct mgos_config, wifi.ap.trigger_on_gpio)},
    {.type = CONF_TYPE_INT, .key = "disable_after", .offset = offsetof(struct mgos_config, wifi.ap.disable_after)},
    {.type = CONF_TYPE_STRING, .key = "hostname", .offset = offsetof(struct mgos_config, wifi.ap.hostname)},
    {.type = CONF_TYPE_BOOL, .key = "keep_enabled", .offset = offsetof(struct mgos_config, wifi.ap.keep_enabled)},
    {.type = CONF_TYPE_OBJECT, .key = "sta", .offset = offsetof(struct mgos_config, wifi.sta), .num_desc = 13},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta.pass)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta.dhcp_hostname)},
    {.type = CONF_TYPE_OBJECT, .key = "sta1", .offset = offsetof(struct mgos_config, wifi.sta1), .num_desc = 13},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta1.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta1.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta1.pass)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta1.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta1.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta1.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta1.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta1.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta1.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta1.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta1.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta1.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta1.dhcp_hostname)},
    {.type = CONF_TYPE_OBJECT, .key = "sta2", .offset = offsetof(struct mgos_config, wifi.sta2), .num_desc = 13},
    {.type = CONF_TYPE_BOOL, .key = "enable", .offset = offsetof(struct mgos_config, wifi.sta2.enable)},
    {.type = CONF_TYPE_STRING, .key = "ssid", .offset = offsetof(struct mgos_config, wifi.sta2.ssid)},
    {.type = CONF_TYPE_STRING, .key = "pass", .offset = offsetof(struct mgos_config, wifi.sta2.pass)},
    {.type = CONF_TYPE_STRING, .key = "user", .offset = offsetof(struct mgos_config, wifi.sta2.user)},
    {.type = CONF_TYPE_STRING, .key = "anon_identity", .offset = offsetof(struct mgos_config, wifi.sta2.anon_identity)},
    {.type = CONF_TYPE_STRING, .key = "cert", .offset = offsetof(struct mgos_config, wifi.sta2.cert)},
    {.type = CONF_TYPE_STRING, .key = "key", .offset = offsetof(struct mgos_config, wifi.sta2.key)},
    {.type = CONF_TYPE_STRING, .key = "ca_cert", .offset = offsetof(struct mgos_config, wifi.sta2.ca_cert)},
    {.type = CONF_TYPE_STRING, .key = "ip", .offset = offsetof(struct mgos_config, wifi.sta2.ip)},
    {.type = CONF_TYPE_STRING, .key = "netmask", .offset = offsetof(struct mgos_config, wifi.sta2.netmask)},
    {.type = CONF_TYPE_STRING, .key = "gw", .offset = offsetof(struct mgos_config, wifi.sta2.gw)},
    {.type = CONF_TYPE_STRING, .key = "nameserver", .offset = offsetof(struct mgos_config, wifi.sta2.nameserver)},
    {.type = CONF_TYPE_STRING, .key = "dhcp_hostname", .offset = offsetof(struct mgos_config, wifi.sta2.dhcp_hostname)},
    {.type = CONF_TYPE_INT, .key = "sta_cfg_idx", .offset = offsetof(struct mgos_config, wifi.sta_cfg_idx)},
    {.type = CONF_TYPE_INT, .key = "sta_connect_timeout", .offset = offsetof(struct mgos_config, wifi.sta_connect_timeout)},
    {.type = CONF_TYPE_BOOL, .key = "sta_all_chan_scan", .offset = offsetof(struct mgos_config, wifi.sta_all_chan_scan)},
};

/* struct mgos_config_debug */
const struct mgos_conf_entry *mgos_config_debug_get_schema(void) {
  return &mgos_config_schema_[1];
}

void mgos_config_debug_set_defaults(struct mgos_config_debug *cfg) {
  cfg->udp_log_addr = NULL;
  cfg->udp_log_level = 3;
  cfg->mbedtls_level = 1;
  cfg->level = 3;
  cfg->file_level = NULL;
  cfg->event_level = 2;
  cfg->stdout_uart = 0;
  cfg->stderr_uart = 0;
  cfg->factory_reset_gpio = -1;
  cfg->mg_mgr_hexdump_file = NULL;
  cfg->stdout_topic = NULL;
  cfg->stderr_topic = NULL;
}

/* struct mgos_config_i2c */
const struct mgos_conf_entry *mgos_config_i2c_get_schema(void) {
  return &mgos_config_schema_[20];
}

void mgos_config_i2c_set_defaults(struct mgos_config_i2c *cfg) {
  cfg->enable = true;
  cfg->freq = 100000;
  cfg->debug = false;
  cfg->sda_gpio = 12;
  cfg->scl_gpio = 14;
}

/* struct mgos_config_i2c */
const struct mgos_conf_entry *mgos_config_i2c1_get_schema(void) {
  return &mgos_config_schema_[20];
}

void mgos_config_i2c1_set_defaults(struct mgos_config_i2c *cfg) {
  cfg->enable = false;
  cfg->freq = 100000;
  cfg->debug = false;
  cfg->sda_gpio = 4;
  cfg->scl_gpio = 5;
}

/* struct mgos_config_sys_atca */
const struct mgos_conf_entry *mgos_config_sys_atca_get_schema(void) {
  return &mgos_config_schema_[27];
}

void mgos_config_sys_atca_set_defaults(struct mgos_config_sys_atca *cfg) {
  cfg->enable = true;
  cfg->i2c_bus = 0;
  cfg->i2c_addr = 96;
  cfg->ecdh_slots_mask = 12;
}

/* struct mgos_config_sys */
const struct mgos_conf_entry *mgos_config_sys_get_schema(void) {
  return &mgos_config_schema_[26];
}

void mgos_config_sys_set_defaults(struct mgos_config_sys *cfg) {
  mgos_config_sys_atca_set_defaults(&cfg->atca);
  cfg->tz_spec = NULL;
  cfg->wdt_timeout = 30;
  cfg->pref_ota_lib = NULL;
}

/* struct mgos_config_device */
const struct mgos_conf_entry *mgos_config_device_get_schema(void) {
  return &mgos_config_schema_[35];
}

void mgos_config_device_set_defaults(struct mgos_config_device *cfg) {
  cfg->id = "esp8266_??????";
  cfg->license = NULL;
  cfg->mac = NULL;
  cfg->public_key = NULL;
  cfg->sn = NULL;
}

/* struct mgos_config_mqtt */
const struct mgos_conf_entry *mgos_config_mqtt_get_schema(void) {
  return &mgos_config_schema_[67];
}

void mgos_config_mqtt_set_defaults(struct mgos_config_mqtt *cfg) {
  cfg->enable = true;
  cfg->server = "mqtt.com:8883";
  cfg->client_id = NULL;
  cfg->user = "mqtt.tmc.com";
  cfg->pass = "123456789";
  cfg->reconnect_timeout_min = 2.0;
  cfg->reconnect_timeout_max = 60.0;
  cfg->ssl_cert = "ecc.esp8266.cert.pem";
  cfg->ssl_key = "ATCA:0";
  cfg->ssl_ca_cert = "ecc.ca.cert.pem";
  cfg->ssl_cipher_suites = NULL;
  cfg->ssl_psk_identity = NULL;
  cfg->ssl_psk_key = NULL;
  cfg->clean_session = true;
  cfg->keep_alive = 60;
  cfg->will_topic = NULL;
  cfg->will_message = NULL;
  cfg->will_retain = false;
  cfg->max_qos = 2;
  cfg->recv_mbuf_limit = 3072;
  cfg->require_time = false;
  cfg->cloud_events = true;
  cfg->max_queue_length = 5;
  cfg->pub = "/esp8266";
}

/* struct mgos_config_mqtt */
const struct mgos_conf_entry *mgos_config_mqtt1_get_schema(void) {
  return &mgos_config_schema_[67];
}

void mgos_config_mqtt1_set_defaults(struct mgos_config_mqtt *cfg) {
  cfg->enable = false;
  cfg->server = NULL;
  cfg->client_id = NULL;
  cfg->user = "mqtt.tmc.com";
  cfg->pass = "123456789";
  cfg->reconnect_timeout_min = 2.0;
  cfg->reconnect_timeout_max = 60.0;
  cfg->ssl_cert = "ecc.esp8266.cert.pem";
  cfg->ssl_key = "ATCA:0";
  cfg->ssl_ca_cert = "ecc.ca.cert.pem";
  cfg->ssl_cipher_suites = NULL;
  cfg->ssl_psk_identity = NULL;
  cfg->ssl_psk_key = NULL;
  cfg->clean_session = true;
  cfg->keep_alive = 60;
  cfg->will_topic = NULL;
  cfg->will_message = NULL;
  cfg->will_retain = false;
  cfg->max_qos = 2;
  cfg->recv_mbuf_limit = 3072;
  cfg->require_time = false;
  cfg->cloud_events = true;
  cfg->max_queue_length = 5;
  cfg->pub = "/esp8266";
}

/* struct mgos_config_rpc_mqtt */
const struct mgos_conf_entry *mgos_config_rpc_mqtt_get_schema(void) {
  return &mgos_config_schema_[102];
}

void mgos_config_rpc_mqtt_set_defaults(struct mgos_config_rpc_mqtt *cfg) {
  cfg->enable = true;
  cfg->pub_topic = "%.*s/rpc";
  cfg->sub_topic = "%.*s/rpc";
  cfg->sub_wc = true;
  cfg->qos = 1;
}

/* struct mgos_config_rpc_uart */
const struct mgos_conf_entry *mgos_config_rpc_uart_get_schema(void) {
  return &mgos_config_schema_[108];
}

void mgos_config_rpc_uart_set_defaults(struct mgos_config_rpc_uart *cfg) {
  cfg->uart_no = 0;
  cfg->baud_rate = 115200;
  cfg->fc_type = 2;
  cfg->dst = NULL;
}

/* struct mgos_config_rpc */
const struct mgos_conf_entry *mgos_config_rpc_get_schema(void) {
  return &mgos_config_schema_[92];
}

void mgos_config_rpc_set_defaults(struct mgos_config_rpc *cfg) {
  cfg->enable = true;
  cfg->http_enable = true;
  cfg->service_sys_enable = true;
  cfg->max_frame_size = 4096;
  cfg->max_queue_length = 25;
  cfg->default_out_channel_idle_close_timeout = 10;
  cfg->acl_file = NULL;
  cfg->auth_domain = "RPC";
  cfg->auth_file = NULL;
  mgos_config_rpc_mqtt_set_defaults(&cfg->mqtt);
  mgos_config_rpc_uart_set_defaults(&cfg->uart);
}

/* struct mgos_config_wifi_ap */
const struct mgos_conf_entry *mgos_config_wifi_ap_get_schema(void) {
  return &mgos_config_schema_[114];
}

void mgos_config_wifi_ap_set_defaults(struct mgos_config_wifi_ap *cfg) {
  cfg->enable = false;
  cfg->ssid = "Mongoose_??????";
  cfg->pass = "Mongoose";
  cfg->hidden = false;
  cfg->channel = 6;
  cfg->max_connections = 10;
  cfg->ip = "192.168.4.1";
  cfg->netmask = "255.255.255.0";
  cfg->gw = "192.168.4.1";
  cfg->dhcp_start = "192.168.4.2";
  cfg->dhcp_end = "192.168.4.100";
  cfg->trigger_on_gpio = -1;
  cfg->disable_after = 0;
  cfg->hostname = NULL;
  cfg->keep_enabled = true;
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta_get_schema(void) {
  return &mgos_config_schema_[158];
}

void mgos_config_wifi_sta_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = true;
  cfg->ssid = "raspberryWifi01";
  cfg->pass = "raspberry01";
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta1_get_schema(void) {
  return &mgos_config_schema_[158];
}

void mgos_config_wifi_sta1_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = false;
  cfg->ssid = "raspberryWifi01";
  cfg->pass = "raspberry01";
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
}

/* struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta2_get_schema(void) {
  return &mgos_config_schema_[158];
}

void mgos_config_wifi_sta2_set_defaults(struct mgos_config_wifi_sta *cfg) {
  cfg->enable = false;
  cfg->ssid = "raspberryWifi01";
  cfg->pass = "raspberry01";
  cfg->user = NULL;
  cfg->anon_identity = NULL;
  cfg->cert = NULL;
  cfg->key = NULL;
  cfg->ca_cert = NULL;
  cfg->ip = NULL;
  cfg->netmask = NULL;
  cfg->gw = NULL;
  cfg->nameserver = NULL;
  cfg->dhcp_hostname = NULL;
}

/* struct mgos_config_wifi */
const struct mgos_conf_entry *mgos_config_wifi_get_schema(void) {
  return &mgos_config_schema_[113];
}

void mgos_config_wifi_set_defaults(struct mgos_config_wifi *cfg) {
  mgos_config_wifi_ap_set_defaults(&cfg->ap);
  mgos_config_wifi_sta_set_defaults(&cfg->sta);
  mgos_config_wifi_sta1_set_defaults(&cfg->sta1);
  mgos_config_wifi_sta2_set_defaults(&cfg->sta2);
  cfg->sta_cfg_idx = 0;
  cfg->sta_connect_timeout = 30;
  cfg->sta_all_chan_scan = true;
}

/* struct mgos_config */
const struct mgos_conf_entry *mgos_config_get_schema(void) {
  return &mgos_config_schema_[0];
}

void mgos_config_set_defaults(struct mgos_config *cfg) {
  mgos_config_debug_set_defaults(&cfg->debug);
  mgos_config_i2c_set_defaults(&cfg->i2c);
  mgos_config_i2c1_set_defaults(&cfg->i2c1);
  mgos_config_sys_set_defaults(&cfg->sys);
  mgos_config_device_set_defaults(&cfg->device);
  cfg->conf_acl = "*";
  mgos_config_mqtt_set_defaults(&cfg->mqtt);
  mgos_config_mqtt1_set_defaults(&cfg->mqtt1);
  mgos_config_rpc_set_defaults(&cfg->rpc);
  mgos_config_wifi_set_defaults(&cfg->wifi);
}

/* Global instance */
struct mgos_config mgos_sys_config;

/* Accessors */

/* debug */
const struct mgos_config_debug *mgos_config_get_debug(const struct mgos_config *cfg) { return &cfg->debug; }

/* debug.udp_log_addr */
const char * mgos_config_get_debug_udp_log_addr(const struct mgos_config *cfg) { return cfg->debug.udp_log_addr; }
const char * mgos_config_get_default_debug_udp_log_addr(void) { return NULL; }
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.udp_log_addr, v); }

/* debug.udp_log_level */
int mgos_config_get_debug_udp_log_level(const struct mgos_config *cfg) { return cfg->debug.udp_log_level; }
int mgos_config_get_default_debug_udp_log_level(void) { return 3; }
void mgos_config_set_debug_udp_log_level(struct mgos_config *cfg, int v) { cfg->debug.udp_log_level = v; }

/* debug.mbedtls_level */
int mgos_config_get_debug_mbedtls_level(const struct mgos_config *cfg) { return cfg->debug.mbedtls_level; }
int mgos_config_get_default_debug_mbedtls_level(void) { return 1; }
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v) { cfg->debug.mbedtls_level = v; }

/* debug.level */
int mgos_config_get_debug_level(const struct mgos_config *cfg) { return cfg->debug.level; }
int mgos_config_get_default_debug_level(void) { return 3; }
void mgos_config_set_debug_level(struct mgos_config *cfg, int v) { cfg->debug.level = v; }

/* debug.file_level */
const char * mgos_config_get_debug_file_level(const struct mgos_config *cfg) { return cfg->debug.file_level; }
const char * mgos_config_get_default_debug_file_level(void) { return NULL; }
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.file_level, v); }

/* debug.event_level */
int mgos_config_get_debug_event_level(const struct mgos_config *cfg) { return cfg->debug.event_level; }
int mgos_config_get_default_debug_event_level(void) { return 2; }
void mgos_config_set_debug_event_level(struct mgos_config *cfg, int v) { cfg->debug.event_level = v; }

/* debug.stdout_uart */
int mgos_config_get_debug_stdout_uart(const struct mgos_config *cfg) { return cfg->debug.stdout_uart; }
int mgos_config_get_default_debug_stdout_uart(void) { return 0; }
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v) { cfg->debug.stdout_uart = v; }

/* debug.stderr_uart */
int mgos_config_get_debug_stderr_uart(const struct mgos_config *cfg) { return cfg->debug.stderr_uart; }
int mgos_config_get_default_debug_stderr_uart(void) { return 0; }
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v) { cfg->debug.stderr_uart = v; }

/* debug.factory_reset_gpio */
int mgos_config_get_debug_factory_reset_gpio(const struct mgos_config *cfg) { return cfg->debug.factory_reset_gpio; }
int mgos_config_get_default_debug_factory_reset_gpio(void) { return -1; }
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v) { cfg->debug.factory_reset_gpio = v; }

/* debug.mg_mgr_hexdump_file */
const char * mgos_config_get_debug_mg_mgr_hexdump_file(const struct mgos_config *cfg) { return cfg->debug.mg_mgr_hexdump_file; }
const char * mgos_config_get_default_debug_mg_mgr_hexdump_file(void) { return NULL; }
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.mg_mgr_hexdump_file, v); }

/* debug.stdout_topic */
const char * mgos_config_get_debug_stdout_topic(const struct mgos_config *cfg) { return cfg->debug.stdout_topic; }
const char * mgos_config_get_default_debug_stdout_topic(void) { return NULL; }
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.stdout_topic, v); }

/* debug.stderr_topic */
const char * mgos_config_get_debug_stderr_topic(const struct mgos_config *cfg) { return cfg->debug.stderr_topic; }
const char * mgos_config_get_default_debug_stderr_topic(void) { return NULL; }
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->debug.stderr_topic, v); }

/* i2c */
const struct mgos_config_i2c *mgos_config_get_i2c(const struct mgos_config *cfg) { return &cfg->i2c; }

/* i2c.enable */
int mgos_config_get_i2c_enable(const struct mgos_config *cfg) { return cfg->i2c.enable; }
int mgos_config_get_default_i2c_enable(void) { return true; }
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int v) { cfg->i2c.enable = v; }

/* i2c.freq */
int mgos_config_get_i2c_freq(const struct mgos_config *cfg) { return cfg->i2c.freq; }
int mgos_config_get_default_i2c_freq(void) { return 100000; }
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int v) { cfg->i2c.freq = v; }

/* i2c.debug */
int mgos_config_get_i2c_debug(const struct mgos_config *cfg) { return cfg->i2c.debug; }
int mgos_config_get_default_i2c_debug(void) { return false; }
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int v) { cfg->i2c.debug = v; }

/* i2c.sda_gpio */
int mgos_config_get_i2c_sda_gpio(const struct mgos_config *cfg) { return cfg->i2c.sda_gpio; }
int mgos_config_get_default_i2c_sda_gpio(void) { return 12; }
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int v) { cfg->i2c.sda_gpio = v; }

/* i2c.scl_gpio */
int mgos_config_get_i2c_scl_gpio(const struct mgos_config *cfg) { return cfg->i2c.scl_gpio; }
int mgos_config_get_default_i2c_scl_gpio(void) { return 14; }
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int v) { cfg->i2c.scl_gpio = v; }

/* i2c1 */
const struct mgos_config_i2c *mgos_config_get_i2c1(const struct mgos_config *cfg) { return &cfg->i2c1; }

/* i2c1.enable */
int mgos_config_get_i2c1_enable(const struct mgos_config *cfg) { return cfg->i2c1.enable; }
int mgos_config_get_default_i2c1_enable(void) { return false; }
void mgos_config_set_i2c1_enable(struct mgos_config *cfg, int v) { cfg->i2c1.enable = v; }

/* i2c1.freq */
int mgos_config_get_i2c1_freq(const struct mgos_config *cfg) { return cfg->i2c1.freq; }
int mgos_config_get_default_i2c1_freq(void) { return 100000; }
void mgos_config_set_i2c1_freq(struct mgos_config *cfg, int v) { cfg->i2c1.freq = v; }

/* i2c1.debug */
int mgos_config_get_i2c1_debug(const struct mgos_config *cfg) { return cfg->i2c1.debug; }
int mgos_config_get_default_i2c1_debug(void) { return false; }
void mgos_config_set_i2c1_debug(struct mgos_config *cfg, int v) { cfg->i2c1.debug = v; }

/* i2c1.sda_gpio */
int mgos_config_get_i2c1_sda_gpio(const struct mgos_config *cfg) { return cfg->i2c1.sda_gpio; }
int mgos_config_get_default_i2c1_sda_gpio(void) { return 4; }
void mgos_config_set_i2c1_sda_gpio(struct mgos_config *cfg, int v) { cfg->i2c1.sda_gpio = v; }

/* i2c1.scl_gpio */
int mgos_config_get_i2c1_scl_gpio(const struct mgos_config *cfg) { return cfg->i2c1.scl_gpio; }
int mgos_config_get_default_i2c1_scl_gpio(void) { return 5; }
void mgos_config_set_i2c1_scl_gpio(struct mgos_config *cfg, int v) { cfg->i2c1.scl_gpio = v; }

/* sys */
const struct mgos_config_sys *mgos_config_get_sys(const struct mgos_config *cfg) { return &cfg->sys; }

/* sys.atca */
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(const struct mgos_config *cfg) { return &cfg->sys.atca; }

/* sys.atca.enable */
int mgos_config_get_sys_atca_enable(const struct mgos_config *cfg) { return cfg->sys.atca.enable; }
int mgos_config_get_default_sys_atca_enable(void) { return true; }
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int v) { cfg->sys.atca.enable = v; }

/* sys.atca.i2c_bus */
int mgos_config_get_sys_atca_i2c_bus(const struct mgos_config *cfg) { return cfg->sys.atca.i2c_bus; }
int mgos_config_get_default_sys_atca_i2c_bus(void) { return 0; }
void mgos_config_set_sys_atca_i2c_bus(struct mgos_config *cfg, int v) { cfg->sys.atca.i2c_bus = v; }

/* sys.atca.i2c_addr */
int mgos_config_get_sys_atca_i2c_addr(const struct mgos_config *cfg) { return cfg->sys.atca.i2c_addr; }
int mgos_config_get_default_sys_atca_i2c_addr(void) { return 96; }
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int v) { cfg->sys.atca.i2c_addr = v; }

/* sys.atca.ecdh_slots_mask */
int mgos_config_get_sys_atca_ecdh_slots_mask(const struct mgos_config *cfg) { return cfg->sys.atca.ecdh_slots_mask; }
int mgos_config_get_default_sys_atca_ecdh_slots_mask(void) { return 12; }
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int v) { cfg->sys.atca.ecdh_slots_mask = v; }

/* sys.tz_spec */
const char * mgos_config_get_sys_tz_spec(const struct mgos_config *cfg) { return cfg->sys.tz_spec; }
const char * mgos_config_get_default_sys_tz_spec(void) { return NULL; }
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.tz_spec, v); }

/* sys.wdt_timeout */
int mgos_config_get_sys_wdt_timeout(const struct mgos_config *cfg) { return cfg->sys.wdt_timeout; }
int mgos_config_get_default_sys_wdt_timeout(void) { return 30; }
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v) { cfg->sys.wdt_timeout = v; }

/* sys.pref_ota_lib */
const char * mgos_config_get_sys_pref_ota_lib(const struct mgos_config *cfg) { return cfg->sys.pref_ota_lib; }
const char * mgos_config_get_default_sys_pref_ota_lib(void) { return NULL; }
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->sys.pref_ota_lib, v); }

/* device */
const struct mgos_config_device *mgos_config_get_device(const struct mgos_config *cfg) { return &cfg->device; }

/* device.id */
const char * mgos_config_get_device_id(const struct mgos_config *cfg) { return cfg->device.id; }
const char * mgos_config_get_default_device_id(void) { return "esp8266_??????"; }
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.id, v); }

/* device.license */
const char * mgos_config_get_device_license(const struct mgos_config *cfg) { return cfg->device.license; }
const char * mgos_config_get_default_device_license(void) { return NULL; }
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.license, v); }

/* device.mac */
const char * mgos_config_get_device_mac(const struct mgos_config *cfg) { return cfg->device.mac; }
const char * mgos_config_get_default_device_mac(void) { return NULL; }
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.mac, v); }

/* device.public_key */
const char * mgos_config_get_device_public_key(const struct mgos_config *cfg) { return cfg->device.public_key; }
const char * mgos_config_get_default_device_public_key(void) { return NULL; }
void mgos_config_set_device_public_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.public_key, v); }

/* device.sn */
const char * mgos_config_get_device_sn(const struct mgos_config *cfg) { return cfg->device.sn; }
const char * mgos_config_get_default_device_sn(void) { return NULL; }
void mgos_config_set_device_sn(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->device.sn, v); }

/* conf_acl */
const char * mgos_config_get_conf_acl(const struct mgos_config *cfg) { return cfg->conf_acl; }
const char * mgos_config_get_default_conf_acl(void) { return "*"; }
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->conf_acl, v); }

/* mqtt */
const struct mgos_config_mqtt *mgos_config_get_mqtt(const struct mgos_config *cfg) { return &cfg->mqtt; }

/* mqtt.enable */
int mgos_config_get_mqtt_enable(const struct mgos_config *cfg) { return cfg->mqtt.enable; }
int mgos_config_get_default_mqtt_enable(void) { return true; }
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int v) { cfg->mqtt.enable = v; }

/* mqtt.server */
const char * mgos_config_get_mqtt_server(const struct mgos_config *cfg) { return cfg->mqtt.server; }
const char * mgos_config_get_default_mqtt_server(void) { return "mqtt.com:8883"; }
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.server, v); }

/* mqtt.client_id */
const char * mgos_config_get_mqtt_client_id(const struct mgos_config *cfg) { return cfg->mqtt.client_id; }
const char * mgos_config_get_default_mqtt_client_id(void) { return NULL; }
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.client_id, v); }

/* mqtt.user */
const char * mgos_config_get_mqtt_user(const struct mgos_config *cfg) { return cfg->mqtt.user; }
const char * mgos_config_get_default_mqtt_user(void) { return "mqtt.tmc.com"; }
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.user, v); }

/* mqtt.pass */
const char * mgos_config_get_mqtt_pass(const struct mgos_config *cfg) { return cfg->mqtt.pass; }
const char * mgos_config_get_default_mqtt_pass(void) { return "123456789"; }
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.pass, v); }

/* mqtt.reconnect_timeout_min */
double mgos_config_get_mqtt_reconnect_timeout_min(const struct mgos_config *cfg) { return cfg->mqtt.reconnect_timeout_min; }
double mgos_config_get_default_mqtt_reconnect_timeout_min(void) { return 2.0; }
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double v) { cfg->mqtt.reconnect_timeout_min = v; }

/* mqtt.reconnect_timeout_max */
double mgos_config_get_mqtt_reconnect_timeout_max(const struct mgos_config *cfg) { return cfg->mqtt.reconnect_timeout_max; }
double mgos_config_get_default_mqtt_reconnect_timeout_max(void) { return 60.0; }
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double v) { cfg->mqtt.reconnect_timeout_max = v; }

/* mqtt.ssl_cert */
const char * mgos_config_get_mqtt_ssl_cert(const struct mgos_config *cfg) { return cfg->mqtt.ssl_cert; }
const char * mgos_config_get_default_mqtt_ssl_cert(void) { return "ecc.esp8266.cert.pem"; }
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_cert, v); }

/* mqtt.ssl_key */
const char * mgos_config_get_mqtt_ssl_key(const struct mgos_config *cfg) { return cfg->mqtt.ssl_key; }
const char * mgos_config_get_default_mqtt_ssl_key(void) { return "ATCA:0"; }
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_key, v); }

/* mqtt.ssl_ca_cert */
const char * mgos_config_get_mqtt_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->mqtt.ssl_ca_cert; }
const char * mgos_config_get_default_mqtt_ssl_ca_cert(void) { return "ecc.ca.cert.pem"; }
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_ca_cert, v); }

/* mqtt.ssl_cipher_suites */
const char * mgos_config_get_mqtt_ssl_cipher_suites(const struct mgos_config *cfg) { return cfg->mqtt.ssl_cipher_suites; }
const char * mgos_config_get_default_mqtt_ssl_cipher_suites(void) { return NULL; }
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_cipher_suites, v); }

/* mqtt.ssl_psk_identity */
const char * mgos_config_get_mqtt_ssl_psk_identity(const struct mgos_config *cfg) { return cfg->mqtt.ssl_psk_identity; }
const char * mgos_config_get_default_mqtt_ssl_psk_identity(void) { return NULL; }
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_psk_identity, v); }

/* mqtt.ssl_psk_key */
const char * mgos_config_get_mqtt_ssl_psk_key(const struct mgos_config *cfg) { return cfg->mqtt.ssl_psk_key; }
const char * mgos_config_get_default_mqtt_ssl_psk_key(void) { return NULL; }
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.ssl_psk_key, v); }

/* mqtt.clean_session */
int mgos_config_get_mqtt_clean_session(const struct mgos_config *cfg) { return cfg->mqtt.clean_session; }
int mgos_config_get_default_mqtt_clean_session(void) { return true; }
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int v) { cfg->mqtt.clean_session = v; }

/* mqtt.keep_alive */
int mgos_config_get_mqtt_keep_alive(const struct mgos_config *cfg) { return cfg->mqtt.keep_alive; }
int mgos_config_get_default_mqtt_keep_alive(void) { return 60; }
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int v) { cfg->mqtt.keep_alive = v; }

/* mqtt.will_topic */
const char * mgos_config_get_mqtt_will_topic(const struct mgos_config *cfg) { return cfg->mqtt.will_topic; }
const char * mgos_config_get_default_mqtt_will_topic(void) { return NULL; }
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.will_topic, v); }

/* mqtt.will_message */
const char * mgos_config_get_mqtt_will_message(const struct mgos_config *cfg) { return cfg->mqtt.will_message; }
const char * mgos_config_get_default_mqtt_will_message(void) { return NULL; }
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.will_message, v); }

/* mqtt.will_retain */
int mgos_config_get_mqtt_will_retain(const struct mgos_config *cfg) { return cfg->mqtt.will_retain; }
int mgos_config_get_default_mqtt_will_retain(void) { return false; }
void mgos_config_set_mqtt_will_retain(struct mgos_config *cfg, int v) { cfg->mqtt.will_retain = v; }

/* mqtt.max_qos */
int mgos_config_get_mqtt_max_qos(const struct mgos_config *cfg) { return cfg->mqtt.max_qos; }
int mgos_config_get_default_mqtt_max_qos(void) { return 2; }
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int v) { cfg->mqtt.max_qos = v; }

/* mqtt.recv_mbuf_limit */
int mgos_config_get_mqtt_recv_mbuf_limit(const struct mgos_config *cfg) { return cfg->mqtt.recv_mbuf_limit; }
int mgos_config_get_default_mqtt_recv_mbuf_limit(void) { return 3072; }
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int v) { cfg->mqtt.recv_mbuf_limit = v; }

/* mqtt.require_time */
int mgos_config_get_mqtt_require_time(const struct mgos_config *cfg) { return cfg->mqtt.require_time; }
int mgos_config_get_default_mqtt_require_time(void) { return false; }
void mgos_config_set_mqtt_require_time(struct mgos_config *cfg, int v) { cfg->mqtt.require_time = v; }

/* mqtt.cloud_events */
int mgos_config_get_mqtt_cloud_events(const struct mgos_config *cfg) { return cfg->mqtt.cloud_events; }
int mgos_config_get_default_mqtt_cloud_events(void) { return true; }
void mgos_config_set_mqtt_cloud_events(struct mgos_config *cfg, int v) { cfg->mqtt.cloud_events = v; }

/* mqtt.max_queue_length */
int mgos_config_get_mqtt_max_queue_length(const struct mgos_config *cfg) { return cfg->mqtt.max_queue_length; }
int mgos_config_get_default_mqtt_max_queue_length(void) { return 5; }
void mgos_config_set_mqtt_max_queue_length(struct mgos_config *cfg, int v) { cfg->mqtt.max_queue_length = v; }

/* mqtt.pub */
const char * mgos_config_get_mqtt_pub(const struct mgos_config *cfg) { return cfg->mqtt.pub; }
const char * mgos_config_get_default_mqtt_pub(void) { return "/esp8266"; }
void mgos_config_set_mqtt_pub(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt.pub, v); }

/* mqtt1 */
const struct mgos_config_mqtt *mgos_config_get_mqtt1(const struct mgos_config *cfg) { return &cfg->mqtt1; }

/* mqtt1.enable */
int mgos_config_get_mqtt1_enable(const struct mgos_config *cfg) { return cfg->mqtt1.enable; }
int mgos_config_get_default_mqtt1_enable(void) { return false; }
void mgos_config_set_mqtt1_enable(struct mgos_config *cfg, int v) { cfg->mqtt1.enable = v; }

/* mqtt1.server */
const char * mgos_config_get_mqtt1_server(const struct mgos_config *cfg) { return cfg->mqtt1.server; }
const char * mgos_config_get_default_mqtt1_server(void) { return NULL; }
void mgos_config_set_mqtt1_server(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.server, v); }

/* mqtt1.client_id */
const char * mgos_config_get_mqtt1_client_id(const struct mgos_config *cfg) { return cfg->mqtt1.client_id; }
const char * mgos_config_get_default_mqtt1_client_id(void) { return NULL; }
void mgos_config_set_mqtt1_client_id(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.client_id, v); }

/* mqtt1.user */
const char * mgos_config_get_mqtt1_user(const struct mgos_config *cfg) { return cfg->mqtt1.user; }
const char * mgos_config_get_default_mqtt1_user(void) { return "mqtt.tmc.com"; }
void mgos_config_set_mqtt1_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.user, v); }

/* mqtt1.pass */
const char * mgos_config_get_mqtt1_pass(const struct mgos_config *cfg) { return cfg->mqtt1.pass; }
const char * mgos_config_get_default_mqtt1_pass(void) { return "123456789"; }
void mgos_config_set_mqtt1_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.pass, v); }

/* mqtt1.reconnect_timeout_min */
double mgos_config_get_mqtt1_reconnect_timeout_min(const struct mgos_config *cfg) { return cfg->mqtt1.reconnect_timeout_min; }
double mgos_config_get_default_mqtt1_reconnect_timeout_min(void) { return 2.0; }
void mgos_config_set_mqtt1_reconnect_timeout_min(struct mgos_config *cfg, double v) { cfg->mqtt1.reconnect_timeout_min = v; }

/* mqtt1.reconnect_timeout_max */
double mgos_config_get_mqtt1_reconnect_timeout_max(const struct mgos_config *cfg) { return cfg->mqtt1.reconnect_timeout_max; }
double mgos_config_get_default_mqtt1_reconnect_timeout_max(void) { return 60.0; }
void mgos_config_set_mqtt1_reconnect_timeout_max(struct mgos_config *cfg, double v) { cfg->mqtt1.reconnect_timeout_max = v; }

/* mqtt1.ssl_cert */
const char * mgos_config_get_mqtt1_ssl_cert(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_cert; }
const char * mgos_config_get_default_mqtt1_ssl_cert(void) { return "ecc.esp8266.cert.pem"; }
void mgos_config_set_mqtt1_ssl_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_cert, v); }

/* mqtt1.ssl_key */
const char * mgos_config_get_mqtt1_ssl_key(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_key; }
const char * mgos_config_get_default_mqtt1_ssl_key(void) { return "ATCA:0"; }
void mgos_config_set_mqtt1_ssl_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_key, v); }

/* mqtt1.ssl_ca_cert */
const char * mgos_config_get_mqtt1_ssl_ca_cert(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_ca_cert; }
const char * mgos_config_get_default_mqtt1_ssl_ca_cert(void) { return "ecc.ca.cert.pem"; }
void mgos_config_set_mqtt1_ssl_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_ca_cert, v); }

/* mqtt1.ssl_cipher_suites */
const char * mgos_config_get_mqtt1_ssl_cipher_suites(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_cipher_suites; }
const char * mgos_config_get_default_mqtt1_ssl_cipher_suites(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_cipher_suites(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_cipher_suites, v); }

/* mqtt1.ssl_psk_identity */
const char * mgos_config_get_mqtt1_ssl_psk_identity(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_psk_identity; }
const char * mgos_config_get_default_mqtt1_ssl_psk_identity(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_psk_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_psk_identity, v); }

/* mqtt1.ssl_psk_key */
const char * mgos_config_get_mqtt1_ssl_psk_key(const struct mgos_config *cfg) { return cfg->mqtt1.ssl_psk_key; }
const char * mgos_config_get_default_mqtt1_ssl_psk_key(void) { return NULL; }
void mgos_config_set_mqtt1_ssl_psk_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.ssl_psk_key, v); }

/* mqtt1.clean_session */
int mgos_config_get_mqtt1_clean_session(const struct mgos_config *cfg) { return cfg->mqtt1.clean_session; }
int mgos_config_get_default_mqtt1_clean_session(void) { return true; }
void mgos_config_set_mqtt1_clean_session(struct mgos_config *cfg, int v) { cfg->mqtt1.clean_session = v; }

/* mqtt1.keep_alive */
int mgos_config_get_mqtt1_keep_alive(const struct mgos_config *cfg) { return cfg->mqtt1.keep_alive; }
int mgos_config_get_default_mqtt1_keep_alive(void) { return 60; }
void mgos_config_set_mqtt1_keep_alive(struct mgos_config *cfg, int v) { cfg->mqtt1.keep_alive = v; }

/* mqtt1.will_topic */
const char * mgos_config_get_mqtt1_will_topic(const struct mgos_config *cfg) { return cfg->mqtt1.will_topic; }
const char * mgos_config_get_default_mqtt1_will_topic(void) { return NULL; }
void mgos_config_set_mqtt1_will_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.will_topic, v); }

/* mqtt1.will_message */
const char * mgos_config_get_mqtt1_will_message(const struct mgos_config *cfg) { return cfg->mqtt1.will_message; }
const char * mgos_config_get_default_mqtt1_will_message(void) { return NULL; }
void mgos_config_set_mqtt1_will_message(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.will_message, v); }

/* mqtt1.will_retain */
int mgos_config_get_mqtt1_will_retain(const struct mgos_config *cfg) { return cfg->mqtt1.will_retain; }
int mgos_config_get_default_mqtt1_will_retain(void) { return false; }
void mgos_config_set_mqtt1_will_retain(struct mgos_config *cfg, int v) { cfg->mqtt1.will_retain = v; }

/* mqtt1.max_qos */
int mgos_config_get_mqtt1_max_qos(const struct mgos_config *cfg) { return cfg->mqtt1.max_qos; }
int mgos_config_get_default_mqtt1_max_qos(void) { return 2; }
void mgos_config_set_mqtt1_max_qos(struct mgos_config *cfg, int v) { cfg->mqtt1.max_qos = v; }

/* mqtt1.recv_mbuf_limit */
int mgos_config_get_mqtt1_recv_mbuf_limit(const struct mgos_config *cfg) { return cfg->mqtt1.recv_mbuf_limit; }
int mgos_config_get_default_mqtt1_recv_mbuf_limit(void) { return 3072; }
void mgos_config_set_mqtt1_recv_mbuf_limit(struct mgos_config *cfg, int v) { cfg->mqtt1.recv_mbuf_limit = v; }

/* mqtt1.require_time */
int mgos_config_get_mqtt1_require_time(const struct mgos_config *cfg) { return cfg->mqtt1.require_time; }
int mgos_config_get_default_mqtt1_require_time(void) { return false; }
void mgos_config_set_mqtt1_require_time(struct mgos_config *cfg, int v) { cfg->mqtt1.require_time = v; }

/* mqtt1.cloud_events */
int mgos_config_get_mqtt1_cloud_events(const struct mgos_config *cfg) { return cfg->mqtt1.cloud_events; }
int mgos_config_get_default_mqtt1_cloud_events(void) { return true; }
void mgos_config_set_mqtt1_cloud_events(struct mgos_config *cfg, int v) { cfg->mqtt1.cloud_events = v; }

/* mqtt1.max_queue_length */
int mgos_config_get_mqtt1_max_queue_length(const struct mgos_config *cfg) { return cfg->mqtt1.max_queue_length; }
int mgos_config_get_default_mqtt1_max_queue_length(void) { return 5; }
void mgos_config_set_mqtt1_max_queue_length(struct mgos_config *cfg, int v) { cfg->mqtt1.max_queue_length = v; }

/* mqtt1.pub */
const char * mgos_config_get_mqtt1_pub(const struct mgos_config *cfg) { return cfg->mqtt1.pub; }
const char * mgos_config_get_default_mqtt1_pub(void) { return "/esp8266"; }
void mgos_config_set_mqtt1_pub(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->mqtt1.pub, v); }

/* rpc */
const struct mgos_config_rpc *mgos_config_get_rpc(const struct mgos_config *cfg) { return &cfg->rpc; }

/* rpc.enable */
int mgos_config_get_rpc_enable(const struct mgos_config *cfg) { return cfg->rpc.enable; }
int mgos_config_get_default_rpc_enable(void) { return true; }
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v) { cfg->rpc.enable = v; }

/* rpc.http_enable */
int mgos_config_get_rpc_http_enable(const struct mgos_config *cfg) { return cfg->rpc.http_enable; }
int mgos_config_get_default_rpc_http_enable(void) { return true; }
void mgos_config_set_rpc_http_enable(struct mgos_config *cfg, int v) { cfg->rpc.http_enable = v; }

/* rpc.service_sys_enable */
int mgos_config_get_rpc_service_sys_enable(const struct mgos_config *cfg) { return cfg->rpc.service_sys_enable; }
int mgos_config_get_default_rpc_service_sys_enable(void) { return true; }
void mgos_config_set_rpc_service_sys_enable(struct mgos_config *cfg, int v) { cfg->rpc.service_sys_enable = v; }

/* rpc.max_frame_size */
int mgos_config_get_rpc_max_frame_size(const struct mgos_config *cfg) { return cfg->rpc.max_frame_size; }
int mgos_config_get_default_rpc_max_frame_size(void) { return 4096; }
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v) { cfg->rpc.max_frame_size = v; }

/* rpc.max_queue_length */
int mgos_config_get_rpc_max_queue_length(const struct mgos_config *cfg) { return cfg->rpc.max_queue_length; }
int mgos_config_get_default_rpc_max_queue_length(void) { return 25; }
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v) { cfg->rpc.max_queue_length = v; }

/* rpc.default_out_channel_idle_close_timeout */
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(const struct mgos_config *cfg) { return cfg->rpc.default_out_channel_idle_close_timeout; }
int mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(void) { return 10; }
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v) { cfg->rpc.default_out_channel_idle_close_timeout = v; }

/* rpc.acl_file */
const char * mgos_config_get_rpc_acl_file(const struct mgos_config *cfg) { return cfg->rpc.acl_file; }
const char * mgos_config_get_default_rpc_acl_file(void) { return NULL; }
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.acl_file, v); }

/* rpc.auth_domain */
const char * mgos_config_get_rpc_auth_domain(const struct mgos_config *cfg) { return cfg->rpc.auth_domain; }
const char * mgos_config_get_default_rpc_auth_domain(void) { return "RPC"; }
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.auth_domain, v); }

/* rpc.auth_file */
const char * mgos_config_get_rpc_auth_file(const struct mgos_config *cfg) { return cfg->rpc.auth_file; }
const char * mgos_config_get_default_rpc_auth_file(void) { return NULL; }
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.auth_file, v); }

/* rpc.mqtt */
const struct mgos_config_rpc_mqtt *mgos_config_get_rpc_mqtt(const struct mgos_config *cfg) { return &cfg->rpc.mqtt; }

/* rpc.mqtt.enable */
int mgos_config_get_rpc_mqtt_enable(const struct mgos_config *cfg) { return cfg->rpc.mqtt.enable; }
int mgos_config_get_default_rpc_mqtt_enable(void) { return true; }
void mgos_config_set_rpc_mqtt_enable(struct mgos_config *cfg, int v) { cfg->rpc.mqtt.enable = v; }

/* rpc.mqtt.pub_topic */
const char * mgos_config_get_rpc_mqtt_pub_topic(const struct mgos_config *cfg) { return cfg->rpc.mqtt.pub_topic; }
const char * mgos_config_get_default_rpc_mqtt_pub_topic(void) { return "%.*s/rpc"; }
void mgos_config_set_rpc_mqtt_pub_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.mqtt.pub_topic, v); }

/* rpc.mqtt.sub_topic */
const char * mgos_config_get_rpc_mqtt_sub_topic(const struct mgos_config *cfg) { return cfg->rpc.mqtt.sub_topic; }
const char * mgos_config_get_default_rpc_mqtt_sub_topic(void) { return "%.*s/rpc"; }
void mgos_config_set_rpc_mqtt_sub_topic(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.mqtt.sub_topic, v); }

/* rpc.mqtt.sub_wc */
int mgos_config_get_rpc_mqtt_sub_wc(const struct mgos_config *cfg) { return cfg->rpc.mqtt.sub_wc; }
int mgos_config_get_default_rpc_mqtt_sub_wc(void) { return true; }
void mgos_config_set_rpc_mqtt_sub_wc(struct mgos_config *cfg, int v) { cfg->rpc.mqtt.sub_wc = v; }

/* rpc.mqtt.qos */
int mgos_config_get_rpc_mqtt_qos(const struct mgos_config *cfg) { return cfg->rpc.mqtt.qos; }
int mgos_config_get_default_rpc_mqtt_qos(void) { return 1; }
void mgos_config_set_rpc_mqtt_qos(struct mgos_config *cfg, int v) { cfg->rpc.mqtt.qos = v; }

/* rpc.uart */
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(const struct mgos_config *cfg) { return &cfg->rpc.uart; }

/* rpc.uart.uart_no */
int mgos_config_get_rpc_uart_uart_no(const struct mgos_config *cfg) { return cfg->rpc.uart.uart_no; }
int mgos_config_get_default_rpc_uart_uart_no(void) { return 0; }
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v) { cfg->rpc.uart.uart_no = v; }

/* rpc.uart.baud_rate */
int mgos_config_get_rpc_uart_baud_rate(const struct mgos_config *cfg) { return cfg->rpc.uart.baud_rate; }
int mgos_config_get_default_rpc_uart_baud_rate(void) { return 115200; }
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v) { cfg->rpc.uart.baud_rate = v; }

/* rpc.uart.fc_type */
int mgos_config_get_rpc_uart_fc_type(const struct mgos_config *cfg) { return cfg->rpc.uart.fc_type; }
int mgos_config_get_default_rpc_uart_fc_type(void) { return 2; }
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v) { cfg->rpc.uart.fc_type = v; }

/* rpc.uart.dst */
const char * mgos_config_get_rpc_uart_dst(const struct mgos_config *cfg) { return cfg->rpc.uart.dst; }
const char * mgos_config_get_default_rpc_uart_dst(void) { return NULL; }
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->rpc.uart.dst, v); }

/* wifi */
const struct mgos_config_wifi *mgos_config_get_wifi(const struct mgos_config *cfg) { return &cfg->wifi; }

/* wifi.ap */
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(const struct mgos_config *cfg) { return &cfg->wifi.ap; }

/* wifi.ap.enable */
int mgos_config_get_wifi_ap_enable(const struct mgos_config *cfg) { return cfg->wifi.ap.enable; }
int mgos_config_get_default_wifi_ap_enable(void) { return false; }
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int v) { cfg->wifi.ap.enable = v; }

/* wifi.ap.ssid */
const char * mgos_config_get_wifi_ap_ssid(const struct mgos_config *cfg) { return cfg->wifi.ap.ssid; }
const char * mgos_config_get_default_wifi_ap_ssid(void) { return "Mongoose_??????"; }
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.ssid, v); }

/* wifi.ap.pass */
const char * mgos_config_get_wifi_ap_pass(const struct mgos_config *cfg) { return cfg->wifi.ap.pass; }
const char * mgos_config_get_default_wifi_ap_pass(void) { return "Mongoose"; }
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.pass, v); }

/* wifi.ap.hidden */
int mgos_config_get_wifi_ap_hidden(const struct mgos_config *cfg) { return cfg->wifi.ap.hidden; }
int mgos_config_get_default_wifi_ap_hidden(void) { return false; }
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int v) { cfg->wifi.ap.hidden = v; }

/* wifi.ap.channel */
int mgos_config_get_wifi_ap_channel(const struct mgos_config *cfg) { return cfg->wifi.ap.channel; }
int mgos_config_get_default_wifi_ap_channel(void) { return 6; }
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int v) { cfg->wifi.ap.channel = v; }

/* wifi.ap.max_connections */
int mgos_config_get_wifi_ap_max_connections(const struct mgos_config *cfg) { return cfg->wifi.ap.max_connections; }
int mgos_config_get_default_wifi_ap_max_connections(void) { return 10; }
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int v) { cfg->wifi.ap.max_connections = v; }

/* wifi.ap.ip */
const char * mgos_config_get_wifi_ap_ip(const struct mgos_config *cfg) { return cfg->wifi.ap.ip; }
const char * mgos_config_get_default_wifi_ap_ip(void) { return "192.168.4.1"; }
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.ip, v); }

/* wifi.ap.netmask */
const char * mgos_config_get_wifi_ap_netmask(const struct mgos_config *cfg) { return cfg->wifi.ap.netmask; }
const char * mgos_config_get_default_wifi_ap_netmask(void) { return "255.255.255.0"; }
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.netmask, v); }

/* wifi.ap.gw */
const char * mgos_config_get_wifi_ap_gw(const struct mgos_config *cfg) { return cfg->wifi.ap.gw; }
const char * mgos_config_get_default_wifi_ap_gw(void) { return "192.168.4.1"; }
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.gw, v); }

/* wifi.ap.dhcp_start */
const char * mgos_config_get_wifi_ap_dhcp_start(const struct mgos_config *cfg) { return cfg->wifi.ap.dhcp_start; }
const char * mgos_config_get_default_wifi_ap_dhcp_start(void) { return "192.168.4.2"; }
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.dhcp_start, v); }

/* wifi.ap.dhcp_end */
const char * mgos_config_get_wifi_ap_dhcp_end(const struct mgos_config *cfg) { return cfg->wifi.ap.dhcp_end; }
const char * mgos_config_get_default_wifi_ap_dhcp_end(void) { return "192.168.4.100"; }
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.dhcp_end, v); }

/* wifi.ap.trigger_on_gpio */
int mgos_config_get_wifi_ap_trigger_on_gpio(const struct mgos_config *cfg) { return cfg->wifi.ap.trigger_on_gpio; }
int mgos_config_get_default_wifi_ap_trigger_on_gpio(void) { return -1; }
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int v) { cfg->wifi.ap.trigger_on_gpio = v; }

/* wifi.ap.disable_after */
int mgos_config_get_wifi_ap_disable_after(const struct mgos_config *cfg) { return cfg->wifi.ap.disable_after; }
int mgos_config_get_default_wifi_ap_disable_after(void) { return 0; }
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int v) { cfg->wifi.ap.disable_after = v; }

/* wifi.ap.hostname */
const char * mgos_config_get_wifi_ap_hostname(const struct mgos_config *cfg) { return cfg->wifi.ap.hostname; }
const char * mgos_config_get_default_wifi_ap_hostname(void) { return NULL; }
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.ap.hostname, v); }

/* wifi.ap.keep_enabled */
int mgos_config_get_wifi_ap_keep_enabled(const struct mgos_config *cfg) { return cfg->wifi.ap.keep_enabled; }
int mgos_config_get_default_wifi_ap_keep_enabled(void) { return true; }
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int v) { cfg->wifi.ap.keep_enabled = v; }

/* wifi.sta */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(const struct mgos_config *cfg) { return &cfg->wifi.sta; }

/* wifi.sta.enable */
int mgos_config_get_wifi_sta_enable(const struct mgos_config *cfg) { return cfg->wifi.sta.enable; }
int mgos_config_get_default_wifi_sta_enable(void) { return true; }
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta.enable = v; }

/* wifi.sta.ssid */
const char * mgos_config_get_wifi_sta_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta.ssid; }
const char * mgos_config_get_default_wifi_sta_ssid(void) { return "raspberryWifi01"; }
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ssid, v); }

/* wifi.sta.pass */
const char * mgos_config_get_wifi_sta_pass(const struct mgos_config *cfg) { return cfg->wifi.sta.pass; }
const char * mgos_config_get_default_wifi_sta_pass(void) { return "raspberry01"; }
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.pass, v); }

/* wifi.sta.user */
const char * mgos_config_get_wifi_sta_user(const struct mgos_config *cfg) { return cfg->wifi.sta.user; }
const char * mgos_config_get_default_wifi_sta_user(void) { return NULL; }
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.user, v); }

/* wifi.sta.anon_identity */
const char * mgos_config_get_wifi_sta_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta.anon_identity; }
const char * mgos_config_get_default_wifi_sta_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.anon_identity, v); }

/* wifi.sta.cert */
const char * mgos_config_get_wifi_sta_cert(const struct mgos_config *cfg) { return cfg->wifi.sta.cert; }
const char * mgos_config_get_default_wifi_sta_cert(void) { return NULL; }
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.cert, v); }

/* wifi.sta.key */
const char * mgos_config_get_wifi_sta_key(const struct mgos_config *cfg) { return cfg->wifi.sta.key; }
const char * mgos_config_get_default_wifi_sta_key(void) { return NULL; }
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.key, v); }

/* wifi.sta.ca_cert */
const char * mgos_config_get_wifi_sta_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta.ca_cert; }
const char * mgos_config_get_default_wifi_sta_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ca_cert, v); }

/* wifi.sta.ip */
const char * mgos_config_get_wifi_sta_ip(const struct mgos_config *cfg) { return cfg->wifi.sta.ip; }
const char * mgos_config_get_default_wifi_sta_ip(void) { return NULL; }
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.ip, v); }

/* wifi.sta.netmask */
const char * mgos_config_get_wifi_sta_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta.netmask; }
const char * mgos_config_get_default_wifi_sta_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.netmask, v); }

/* wifi.sta.gw */
const char * mgos_config_get_wifi_sta_gw(const struct mgos_config *cfg) { return cfg->wifi.sta.gw; }
const char * mgos_config_get_default_wifi_sta_gw(void) { return NULL; }
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.gw, v); }

/* wifi.sta.nameserver */
const char * mgos_config_get_wifi_sta_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta.nameserver; }
const char * mgos_config_get_default_wifi_sta_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.nameserver, v); }

/* wifi.sta.dhcp_hostname */
const char * mgos_config_get_wifi_sta_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta.dhcp_hostname, v); }

/* wifi.sta1 */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta1(const struct mgos_config *cfg) { return &cfg->wifi.sta1; }

/* wifi.sta1.enable */
int mgos_config_get_wifi_sta1_enable(const struct mgos_config *cfg) { return cfg->wifi.sta1.enable; }
int mgos_config_get_default_wifi_sta1_enable(void) { return false; }
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta1.enable = v; }

/* wifi.sta1.ssid */
const char * mgos_config_get_wifi_sta1_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta1.ssid; }
const char * mgos_config_get_default_wifi_sta1_ssid(void) { return "raspberryWifi01"; }
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ssid, v); }

/* wifi.sta1.pass */
const char * mgos_config_get_wifi_sta1_pass(const struct mgos_config *cfg) { return cfg->wifi.sta1.pass; }
const char * mgos_config_get_default_wifi_sta1_pass(void) { return "raspberry01"; }
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.pass, v); }

/* wifi.sta1.user */
const char * mgos_config_get_wifi_sta1_user(const struct mgos_config *cfg) { return cfg->wifi.sta1.user; }
const char * mgos_config_get_default_wifi_sta1_user(void) { return NULL; }
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.user, v); }

/* wifi.sta1.anon_identity */
const char * mgos_config_get_wifi_sta1_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta1.anon_identity; }
const char * mgos_config_get_default_wifi_sta1_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.anon_identity, v); }

/* wifi.sta1.cert */
const char * mgos_config_get_wifi_sta1_cert(const struct mgos_config *cfg) { return cfg->wifi.sta1.cert; }
const char * mgos_config_get_default_wifi_sta1_cert(void) { return NULL; }
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.cert, v); }

/* wifi.sta1.key */
const char * mgos_config_get_wifi_sta1_key(const struct mgos_config *cfg) { return cfg->wifi.sta1.key; }
const char * mgos_config_get_default_wifi_sta1_key(void) { return NULL; }
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.key, v); }

/* wifi.sta1.ca_cert */
const char * mgos_config_get_wifi_sta1_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta1.ca_cert; }
const char * mgos_config_get_default_wifi_sta1_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ca_cert, v); }

/* wifi.sta1.ip */
const char * mgos_config_get_wifi_sta1_ip(const struct mgos_config *cfg) { return cfg->wifi.sta1.ip; }
const char * mgos_config_get_default_wifi_sta1_ip(void) { return NULL; }
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.ip, v); }

/* wifi.sta1.netmask */
const char * mgos_config_get_wifi_sta1_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta1.netmask; }
const char * mgos_config_get_default_wifi_sta1_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.netmask, v); }

/* wifi.sta1.gw */
const char * mgos_config_get_wifi_sta1_gw(const struct mgos_config *cfg) { return cfg->wifi.sta1.gw; }
const char * mgos_config_get_default_wifi_sta1_gw(void) { return NULL; }
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.gw, v); }

/* wifi.sta1.nameserver */
const char * mgos_config_get_wifi_sta1_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta1.nameserver; }
const char * mgos_config_get_default_wifi_sta1_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.nameserver, v); }

/* wifi.sta1.dhcp_hostname */
const char * mgos_config_get_wifi_sta1_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta1.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta1_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta1.dhcp_hostname, v); }

/* wifi.sta2 */
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta2(const struct mgos_config *cfg) { return &cfg->wifi.sta2; }

/* wifi.sta2.enable */
int mgos_config_get_wifi_sta2_enable(const struct mgos_config *cfg) { return cfg->wifi.sta2.enable; }
int mgos_config_get_default_wifi_sta2_enable(void) { return false; }
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int v) { cfg->wifi.sta2.enable = v; }

/* wifi.sta2.ssid */
const char * mgos_config_get_wifi_sta2_ssid(const struct mgos_config *cfg) { return cfg->wifi.sta2.ssid; }
const char * mgos_config_get_default_wifi_sta2_ssid(void) { return "raspberryWifi01"; }
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ssid, v); }

/* wifi.sta2.pass */
const char * mgos_config_get_wifi_sta2_pass(const struct mgos_config *cfg) { return cfg->wifi.sta2.pass; }
const char * mgos_config_get_default_wifi_sta2_pass(void) { return "raspberry01"; }
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.pass, v); }

/* wifi.sta2.user */
const char * mgos_config_get_wifi_sta2_user(const struct mgos_config *cfg) { return cfg->wifi.sta2.user; }
const char * mgos_config_get_default_wifi_sta2_user(void) { return NULL; }
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.user, v); }

/* wifi.sta2.anon_identity */
const char * mgos_config_get_wifi_sta2_anon_identity(const struct mgos_config *cfg) { return cfg->wifi.sta2.anon_identity; }
const char * mgos_config_get_default_wifi_sta2_anon_identity(void) { return NULL; }
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.anon_identity, v); }

/* wifi.sta2.cert */
const char * mgos_config_get_wifi_sta2_cert(const struct mgos_config *cfg) { return cfg->wifi.sta2.cert; }
const char * mgos_config_get_default_wifi_sta2_cert(void) { return NULL; }
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.cert, v); }

/* wifi.sta2.key */
const char * mgos_config_get_wifi_sta2_key(const struct mgos_config *cfg) { return cfg->wifi.sta2.key; }
const char * mgos_config_get_default_wifi_sta2_key(void) { return NULL; }
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.key, v); }

/* wifi.sta2.ca_cert */
const char * mgos_config_get_wifi_sta2_ca_cert(const struct mgos_config *cfg) { return cfg->wifi.sta2.ca_cert; }
const char * mgos_config_get_default_wifi_sta2_ca_cert(void) { return NULL; }
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ca_cert, v); }

/* wifi.sta2.ip */
const char * mgos_config_get_wifi_sta2_ip(const struct mgos_config *cfg) { return cfg->wifi.sta2.ip; }
const char * mgos_config_get_default_wifi_sta2_ip(void) { return NULL; }
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.ip, v); }

/* wifi.sta2.netmask */
const char * mgos_config_get_wifi_sta2_netmask(const struct mgos_config *cfg) { return cfg->wifi.sta2.netmask; }
const char * mgos_config_get_default_wifi_sta2_netmask(void) { return NULL; }
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.netmask, v); }

/* wifi.sta2.gw */
const char * mgos_config_get_wifi_sta2_gw(const struct mgos_config *cfg) { return cfg->wifi.sta2.gw; }
const char * mgos_config_get_default_wifi_sta2_gw(void) { return NULL; }
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.gw, v); }

/* wifi.sta2.nameserver */
const char * mgos_config_get_wifi_sta2_nameserver(const struct mgos_config *cfg) { return cfg->wifi.sta2.nameserver; }
const char * mgos_config_get_default_wifi_sta2_nameserver(void) { return NULL; }
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.nameserver, v); }

/* wifi.sta2.dhcp_hostname */
const char * mgos_config_get_wifi_sta2_dhcp_hostname(const struct mgos_config *cfg) { return cfg->wifi.sta2.dhcp_hostname; }
const char * mgos_config_get_default_wifi_sta2_dhcp_hostname(void) { return NULL; }
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char * v) { mgos_conf_set_str(&cfg->wifi.sta2.dhcp_hostname, v); }

/* wifi.sta_cfg_idx */
int mgos_config_get_wifi_sta_cfg_idx(const struct mgos_config *cfg) { return cfg->wifi.sta_cfg_idx; }
int mgos_config_get_default_wifi_sta_cfg_idx(void) { return 0; }
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int v) { cfg->wifi.sta_cfg_idx = v; }

/* wifi.sta_connect_timeout */
int mgos_config_get_wifi_sta_connect_timeout(const struct mgos_config *cfg) { return cfg->wifi.sta_connect_timeout; }
int mgos_config_get_default_wifi_sta_connect_timeout(void) { return 30; }
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int v) { cfg->wifi.sta_connect_timeout = v; }

/* wifi.sta_all_chan_scan */
int mgos_config_get_wifi_sta_all_chan_scan(const struct mgos_config *cfg) { return cfg->wifi.sta_all_chan_scan; }
int mgos_config_get_default_wifi_sta_all_chan_scan(void) { return true; }
void mgos_config_set_wifi_sta_all_chan_scan(struct mgos_config *cfg, int v) { cfg->wifi.sta_all_chan_scan = v; }
bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value) {
  return mgos_config_get(key, value, &mgos_sys_config, mgos_config_schema());
}
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings) {
  return mgos_config_set(key, value, &mgos_sys_config, mgos_config_schema(), free_strings);
}

const struct mgos_conf_entry *mgos_config_schema(void) {
  return mgos_config_get_schema();
}

/* Strings */
static const char *mgos_config_str_table[] = {
  "%.*s/rpc",
  "*",
  "/esp8266",
  "123456789",
  "192.168.4.1",
  "192.168.4.100",
  "192.168.4.2",
  "255.255.255.0",
  "ATCA:0",
  "Mongoose",
  "Mongoose_??????",
  "RPC",
  "ecc.ca.cert.pem",
  "ecc.esp8266.cert.pem",
  "esp8266_??????",
  "mqtt.com:8883",
  "mqtt.tmc.com",
  "raspberry01",
  "raspberryWifi01",
};

bool mgos_config_is_default_str(const char *s) {
  int num_str = (sizeof(mgos_config_str_table) / sizeof(mgos_config_str_table[0]));
  for (int i = 0; i < num_str; i++) {
    if (mgos_config_str_table[i] == s) return true;
  }
  return false;
}
