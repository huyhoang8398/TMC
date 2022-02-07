/* clang-format off */
/*
 * Generated file - do not edit.
 * Command: /mongoose-os/tools/mgos_gen_config.py --c_name=mgos_config --c_global_name=mgos_sys_config --dest_dir=/data/fwbuild-volumes/2.19.1/apps/my-app/esp8266/build_contexts/build_ctx_934047261/build/gen/ /mongoose-os/src/mgos_debug_udp_config.yaml /data/fwbuild-volumes/2.19.1/apps/my-app/esp8266/build_contexts/build_ctx_934047261/build/gen/mos_conf_schema.yml
 */

#pragma once

#include <stdbool.h>

#include "common/mg_str.h"

#include "mgos_config_util.h"

#ifdef __cplusplus
extern "C" {
#endif


/* debug type struct mgos_config_debug */
struct mgos_config_debug {
  const char * udp_log_addr;
  int udp_log_level;
  int mbedtls_level;
  int level;
  const char * file_level;
  int event_level;
  int stdout_uart;
  int stderr_uart;
  int factory_reset_gpio;
  const char * mg_mgr_hexdump_file;
  const char * stdout_topic;
  const char * stderr_topic;
};
const struct mgos_conf_entry *mgos_config_debug_get_schema(void);
void mgos_config_debug_set_defaults(struct mgos_config_debug *cfg);
static inline bool mgos_config_debug_parse(struct mg_str json, struct mgos_config_debug *cfg) {
  mgos_config_debug_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_debug_get_schema(), cfg);
}
static inline bool mgos_config_debug_emit(const struct mgos_config_debug *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_debug_get_schema(), pretty, out);
}
static inline bool mgos_config_debug_emit_f(const struct mgos_config_debug *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_debug_get_schema(), pretty, fname);
}
static inline bool mgos_config_debug_copy(const struct mgos_config_debug *src, struct mgos_config_debug *dst) {
  return mgos_conf_copy(mgos_config_debug_get_schema(), src, dst);
}
static inline void mgos_config_debug_free(struct mgos_config_debug *cfg) {
  return mgos_conf_free(mgos_config_debug_get_schema(), cfg);
}

/* i2c type struct mgos_config_i2c */
struct mgos_config_i2c {
  int enable;
  int freq;
  int debug;
  int sda_gpio;
  int scl_gpio;
};
const struct mgos_conf_entry *mgos_config_i2c_get_schema(void);
void mgos_config_i2c_set_defaults(struct mgos_config_i2c *cfg);
static inline bool mgos_config_i2c_parse(struct mg_str json, struct mgos_config_i2c *cfg) {
  mgos_config_i2c_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_i2c_get_schema(), cfg);
}
static inline bool mgos_config_i2c_emit(const struct mgos_config_i2c *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_i2c_get_schema(), pretty, out);
}
static inline bool mgos_config_i2c_emit_f(const struct mgos_config_i2c *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_i2c_get_schema(), pretty, fname);
}
static inline bool mgos_config_i2c_copy(const struct mgos_config_i2c *src, struct mgos_config_i2c *dst) {
  return mgos_conf_copy(mgos_config_i2c_get_schema(), src, dst);
}
static inline void mgos_config_i2c_free(struct mgos_config_i2c *cfg) {
  return mgos_conf_free(mgos_config_i2c_get_schema(), cfg);
}

/* i2c1 type struct mgos_config_i2c */
const struct mgos_conf_entry *mgos_config_i2c1_get_schema(void);
void mgos_config_i2c1_set_defaults(struct mgos_config_i2c *cfg);
static inline bool mgos_config_i2c1_parse(struct mg_str json, struct mgos_config_i2c *cfg) {
  mgos_config_i2c1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_i2c1_get_schema(), cfg);
}
static inline bool mgos_config_i2c1_emit(const struct mgos_config_i2c *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_i2c1_get_schema(), pretty, out);
}
static inline bool mgos_config_i2c1_emit_f(const struct mgos_config_i2c *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_i2c1_get_schema(), pretty, fname);
}
static inline bool mgos_config_i2c1_copy(const struct mgos_config_i2c *src, struct mgos_config_i2c *dst) {
  return mgos_conf_copy(mgos_config_i2c1_get_schema(), src, dst);
}
static inline void mgos_config_i2c1_free(struct mgos_config_i2c *cfg) {
  return mgos_conf_free(mgos_config_i2c1_get_schema(), cfg);
}

/* sys.atca type struct mgos_config_sys_atca */
struct mgos_config_sys_atca {
  int enable;
  int i2c_bus;
  int i2c_addr;
  int ecdh_slots_mask;
};
const struct mgos_conf_entry *mgos_config_sys_atca_get_schema(void);
void mgos_config_sys_atca_set_defaults(struct mgos_config_sys_atca *cfg);
static inline bool mgos_config_sys_atca_parse(struct mg_str json, struct mgos_config_sys_atca *cfg) {
  mgos_config_sys_atca_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_sys_atca_get_schema(), cfg);
}
static inline bool mgos_config_sys_atca_emit(const struct mgos_config_sys_atca *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_sys_atca_get_schema(), pretty, out);
}
static inline bool mgos_config_sys_atca_emit_f(const struct mgos_config_sys_atca *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_sys_atca_get_schema(), pretty, fname);
}
static inline bool mgos_config_sys_atca_copy(const struct mgos_config_sys_atca *src, struct mgos_config_sys_atca *dst) {
  return mgos_conf_copy(mgos_config_sys_atca_get_schema(), src, dst);
}
static inline void mgos_config_sys_atca_free(struct mgos_config_sys_atca *cfg) {
  return mgos_conf_free(mgos_config_sys_atca_get_schema(), cfg);
}

/* sys type struct mgos_config_sys */
struct mgos_config_sys {
  struct mgos_config_sys_atca atca;
  const char * tz_spec;
  int wdt_timeout;
  const char * pref_ota_lib;
};
const struct mgos_conf_entry *mgos_config_sys_get_schema(void);
void mgos_config_sys_set_defaults(struct mgos_config_sys *cfg);
static inline bool mgos_config_sys_parse(struct mg_str json, struct mgos_config_sys *cfg) {
  mgos_config_sys_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_sys_get_schema(), cfg);
}
static inline bool mgos_config_sys_emit(const struct mgos_config_sys *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_sys_get_schema(), pretty, out);
}
static inline bool mgos_config_sys_emit_f(const struct mgos_config_sys *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_sys_get_schema(), pretty, fname);
}
static inline bool mgos_config_sys_copy(const struct mgos_config_sys *src, struct mgos_config_sys *dst) {
  return mgos_conf_copy(mgos_config_sys_get_schema(), src, dst);
}
static inline void mgos_config_sys_free(struct mgos_config_sys *cfg) {
  return mgos_conf_free(mgos_config_sys_get_schema(), cfg);
}

/* device type struct mgos_config_device */
struct mgos_config_device {
  const char * id;
  const char * license;
  const char * mac;
  const char * public_key;
  const char * sn;
};
const struct mgos_conf_entry *mgos_config_device_get_schema(void);
void mgos_config_device_set_defaults(struct mgos_config_device *cfg);
static inline bool mgos_config_device_parse(struct mg_str json, struct mgos_config_device *cfg) {
  mgos_config_device_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_device_get_schema(), cfg);
}
static inline bool mgos_config_device_emit(const struct mgos_config_device *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_device_get_schema(), pretty, out);
}
static inline bool mgos_config_device_emit_f(const struct mgos_config_device *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_device_get_schema(), pretty, fname);
}
static inline bool mgos_config_device_copy(const struct mgos_config_device *src, struct mgos_config_device *dst) {
  return mgos_conf_copy(mgos_config_device_get_schema(), src, dst);
}
static inline void mgos_config_device_free(struct mgos_config_device *cfg) {
  return mgos_conf_free(mgos_config_device_get_schema(), cfg);
}

/* mqtt type struct mgos_config_mqtt */
struct mgos_config_mqtt {
  int enable;
  const char * server;
  const char * client_id;
  const char * user;
  const char * pass;
  double reconnect_timeout_min;
  double reconnect_timeout_max;
  const char * ssl_cert;
  const char * ssl_key;
  const char * ssl_ca_cert;
  const char * ssl_cipher_suites;
  const char * ssl_psk_identity;
  const char * ssl_psk_key;
  int clean_session;
  int keep_alive;
  const char * will_topic;
  const char * will_message;
  int will_retain;
  int max_qos;
  int recv_mbuf_limit;
  int require_time;
  int cloud_events;
  int max_queue_length;
  const char * pub;
};
const struct mgos_conf_entry *mgos_config_mqtt_get_schema(void);
void mgos_config_mqtt_set_defaults(struct mgos_config_mqtt *cfg);
static inline bool mgos_config_mqtt_parse(struct mg_str json, struct mgos_config_mqtt *cfg) {
  mgos_config_mqtt_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mqtt_get_schema(), cfg);
}
static inline bool mgos_config_mqtt_emit(const struct mgos_config_mqtt *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mqtt_get_schema(), pretty, out);
}
static inline bool mgos_config_mqtt_emit_f(const struct mgos_config_mqtt *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mqtt_get_schema(), pretty, fname);
}
static inline bool mgos_config_mqtt_copy(const struct mgos_config_mqtt *src, struct mgos_config_mqtt *dst) {
  return mgos_conf_copy(mgos_config_mqtt_get_schema(), src, dst);
}
static inline void mgos_config_mqtt_free(struct mgos_config_mqtt *cfg) {
  return mgos_conf_free(mgos_config_mqtt_get_schema(), cfg);
}

/* mqtt1 type struct mgos_config_mqtt */
const struct mgos_conf_entry *mgos_config_mqtt1_get_schema(void);
void mgos_config_mqtt1_set_defaults(struct mgos_config_mqtt *cfg);
static inline bool mgos_config_mqtt1_parse(struct mg_str json, struct mgos_config_mqtt *cfg) {
  mgos_config_mqtt1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_mqtt1_get_schema(), cfg);
}
static inline bool mgos_config_mqtt1_emit(const struct mgos_config_mqtt *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_mqtt1_get_schema(), pretty, out);
}
static inline bool mgos_config_mqtt1_emit_f(const struct mgos_config_mqtt *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_mqtt1_get_schema(), pretty, fname);
}
static inline bool mgos_config_mqtt1_copy(const struct mgos_config_mqtt *src, struct mgos_config_mqtt *dst) {
  return mgos_conf_copy(mgos_config_mqtt1_get_schema(), src, dst);
}
static inline void mgos_config_mqtt1_free(struct mgos_config_mqtt *cfg) {
  return mgos_conf_free(mgos_config_mqtt1_get_schema(), cfg);
}

/* rpc.mqtt type struct mgos_config_rpc_mqtt */
struct mgos_config_rpc_mqtt {
  int enable;
  const char * pub_topic;
  const char * sub_topic;
  int sub_wc;
  int qos;
};
const struct mgos_conf_entry *mgos_config_rpc_mqtt_get_schema(void);
void mgos_config_rpc_mqtt_set_defaults(struct mgos_config_rpc_mqtt *cfg);
static inline bool mgos_config_rpc_mqtt_parse(struct mg_str json, struct mgos_config_rpc_mqtt *cfg) {
  mgos_config_rpc_mqtt_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_rpc_mqtt_get_schema(), cfg);
}
static inline bool mgos_config_rpc_mqtt_emit(const struct mgos_config_rpc_mqtt *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_rpc_mqtt_get_schema(), pretty, out);
}
static inline bool mgos_config_rpc_mqtt_emit_f(const struct mgos_config_rpc_mqtt *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_rpc_mqtt_get_schema(), pretty, fname);
}
static inline bool mgos_config_rpc_mqtt_copy(const struct mgos_config_rpc_mqtt *src, struct mgos_config_rpc_mqtt *dst) {
  return mgos_conf_copy(mgos_config_rpc_mqtt_get_schema(), src, dst);
}
static inline void mgos_config_rpc_mqtt_free(struct mgos_config_rpc_mqtt *cfg) {
  return mgos_conf_free(mgos_config_rpc_mqtt_get_schema(), cfg);
}

/* rpc.uart type struct mgos_config_rpc_uart */
struct mgos_config_rpc_uart {
  int uart_no;
  int baud_rate;
  int fc_type;
  const char * dst;
};
const struct mgos_conf_entry *mgos_config_rpc_uart_get_schema(void);
void mgos_config_rpc_uart_set_defaults(struct mgos_config_rpc_uart *cfg);
static inline bool mgos_config_rpc_uart_parse(struct mg_str json, struct mgos_config_rpc_uart *cfg) {
  mgos_config_rpc_uart_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_rpc_uart_get_schema(), cfg);
}
static inline bool mgos_config_rpc_uart_emit(const struct mgos_config_rpc_uart *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_rpc_uart_get_schema(), pretty, out);
}
static inline bool mgos_config_rpc_uart_emit_f(const struct mgos_config_rpc_uart *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_rpc_uart_get_schema(), pretty, fname);
}
static inline bool mgos_config_rpc_uart_copy(const struct mgos_config_rpc_uart *src, struct mgos_config_rpc_uart *dst) {
  return mgos_conf_copy(mgos_config_rpc_uart_get_schema(), src, dst);
}
static inline void mgos_config_rpc_uart_free(struct mgos_config_rpc_uart *cfg) {
  return mgos_conf_free(mgos_config_rpc_uart_get_schema(), cfg);
}

/* rpc type struct mgos_config_rpc */
struct mgos_config_rpc {
  int enable;
  int http_enable;
  int service_sys_enable;
  int max_frame_size;
  int max_queue_length;
  int default_out_channel_idle_close_timeout;
  const char * acl_file;
  const char * auth_domain;
  const char * auth_file;
  struct mgos_config_rpc_mqtt mqtt;
  struct mgos_config_rpc_uart uart;
};
const struct mgos_conf_entry *mgos_config_rpc_get_schema(void);
void mgos_config_rpc_set_defaults(struct mgos_config_rpc *cfg);
static inline bool mgos_config_rpc_parse(struct mg_str json, struct mgos_config_rpc *cfg) {
  mgos_config_rpc_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_rpc_get_schema(), cfg);
}
static inline bool mgos_config_rpc_emit(const struct mgos_config_rpc *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_rpc_get_schema(), pretty, out);
}
static inline bool mgos_config_rpc_emit_f(const struct mgos_config_rpc *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_rpc_get_schema(), pretty, fname);
}
static inline bool mgos_config_rpc_copy(const struct mgos_config_rpc *src, struct mgos_config_rpc *dst) {
  return mgos_conf_copy(mgos_config_rpc_get_schema(), src, dst);
}
static inline void mgos_config_rpc_free(struct mgos_config_rpc *cfg) {
  return mgos_conf_free(mgos_config_rpc_get_schema(), cfg);
}

/* wifi.ap type struct mgos_config_wifi_ap */
struct mgos_config_wifi_ap {
  int enable;
  const char * ssid;
  const char * pass;
  int hidden;
  int channel;
  int max_connections;
  const char * ip;
  const char * netmask;
  const char * gw;
  const char * dhcp_start;
  const char * dhcp_end;
  int trigger_on_gpio;
  int disable_after;
  const char * hostname;
  int keep_enabled;
};
const struct mgos_conf_entry *mgos_config_wifi_ap_get_schema(void);
void mgos_config_wifi_ap_set_defaults(struct mgos_config_wifi_ap *cfg);
static inline bool mgos_config_wifi_ap_parse(struct mg_str json, struct mgos_config_wifi_ap *cfg) {
  mgos_config_wifi_ap_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_ap_get_schema(), cfg);
}
static inline bool mgos_config_wifi_ap_emit(const struct mgos_config_wifi_ap *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_ap_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_ap_emit_f(const struct mgos_config_wifi_ap *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_ap_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_ap_copy(const struct mgos_config_wifi_ap *src, struct mgos_config_wifi_ap *dst) {
  return mgos_conf_copy(mgos_config_wifi_ap_get_schema(), src, dst);
}
static inline void mgos_config_wifi_ap_free(struct mgos_config_wifi_ap *cfg) {
  return mgos_conf_free(mgos_config_wifi_ap_get_schema(), cfg);
}

/* wifi.sta type struct mgos_config_wifi_sta */
struct mgos_config_wifi_sta {
  int enable;
  const char * ssid;
  const char * pass;
  const char * user;
  const char * anon_identity;
  const char * cert;
  const char * key;
  const char * ca_cert;
  const char * ip;
  const char * netmask;
  const char * gw;
  const char * nameserver;
  const char * dhcp_hostname;
};
const struct mgos_conf_entry *mgos_config_wifi_sta_get_schema(void);
void mgos_config_wifi_sta_set_defaults(struct mgos_config_wifi_sta *cfg);
static inline bool mgos_config_wifi_sta_parse(struct mg_str json, struct mgos_config_wifi_sta *cfg) {
  mgos_config_wifi_sta_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_sta_get_schema(), cfg);
}
static inline bool mgos_config_wifi_sta_emit(const struct mgos_config_wifi_sta *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_sta_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_sta_emit_f(const struct mgos_config_wifi_sta *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_sta_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_sta_copy(const struct mgos_config_wifi_sta *src, struct mgos_config_wifi_sta *dst) {
  return mgos_conf_copy(mgos_config_wifi_sta_get_schema(), src, dst);
}
static inline void mgos_config_wifi_sta_free(struct mgos_config_wifi_sta *cfg) {
  return mgos_conf_free(mgos_config_wifi_sta_get_schema(), cfg);
}

/* wifi.sta1 type struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta1_get_schema(void);
void mgos_config_wifi_sta1_set_defaults(struct mgos_config_wifi_sta *cfg);
static inline bool mgos_config_wifi_sta1_parse(struct mg_str json, struct mgos_config_wifi_sta *cfg) {
  mgos_config_wifi_sta1_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_sta1_get_schema(), cfg);
}
static inline bool mgos_config_wifi_sta1_emit(const struct mgos_config_wifi_sta *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_sta1_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_sta1_emit_f(const struct mgos_config_wifi_sta *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_sta1_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_sta1_copy(const struct mgos_config_wifi_sta *src, struct mgos_config_wifi_sta *dst) {
  return mgos_conf_copy(mgos_config_wifi_sta1_get_schema(), src, dst);
}
static inline void mgos_config_wifi_sta1_free(struct mgos_config_wifi_sta *cfg) {
  return mgos_conf_free(mgos_config_wifi_sta1_get_schema(), cfg);
}

/* wifi.sta2 type struct mgos_config_wifi_sta */
const struct mgos_conf_entry *mgos_config_wifi_sta2_get_schema(void);
void mgos_config_wifi_sta2_set_defaults(struct mgos_config_wifi_sta *cfg);
static inline bool mgos_config_wifi_sta2_parse(struct mg_str json, struct mgos_config_wifi_sta *cfg) {
  mgos_config_wifi_sta2_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_sta2_get_schema(), cfg);
}
static inline bool mgos_config_wifi_sta2_emit(const struct mgos_config_wifi_sta *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_sta2_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_sta2_emit_f(const struct mgos_config_wifi_sta *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_sta2_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_sta2_copy(const struct mgos_config_wifi_sta *src, struct mgos_config_wifi_sta *dst) {
  return mgos_conf_copy(mgos_config_wifi_sta2_get_schema(), src, dst);
}
static inline void mgos_config_wifi_sta2_free(struct mgos_config_wifi_sta *cfg) {
  return mgos_conf_free(mgos_config_wifi_sta2_get_schema(), cfg);
}

/* wifi type struct mgos_config_wifi */
struct mgos_config_wifi {
  struct mgos_config_wifi_ap ap;
  struct mgos_config_wifi_sta sta;
  struct mgos_config_wifi_sta sta1;
  struct mgos_config_wifi_sta sta2;
  int sta_cfg_idx;
  int sta_connect_timeout;
  int sta_all_chan_scan;
};
const struct mgos_conf_entry *mgos_config_wifi_get_schema(void);
void mgos_config_wifi_set_defaults(struct mgos_config_wifi *cfg);
static inline bool mgos_config_wifi_parse(struct mg_str json, struct mgos_config_wifi *cfg) {
  mgos_config_wifi_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_wifi_get_schema(), cfg);
}
static inline bool mgos_config_wifi_emit(const struct mgos_config_wifi *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_wifi_get_schema(), pretty, out);
}
static inline bool mgos_config_wifi_emit_f(const struct mgos_config_wifi *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_wifi_get_schema(), pretty, fname);
}
static inline bool mgos_config_wifi_copy(const struct mgos_config_wifi *src, struct mgos_config_wifi *dst) {
  return mgos_conf_copy(mgos_config_wifi_get_schema(), src, dst);
}
static inline void mgos_config_wifi_free(struct mgos_config_wifi *cfg) {
  return mgos_conf_free(mgos_config_wifi_get_schema(), cfg);
}

/* <root> type struct mgos_config */
struct mgos_config {
  struct mgos_config_debug debug;
  struct mgos_config_i2c i2c;
  struct mgos_config_i2c i2c1;
  struct mgos_config_sys sys;
  struct mgos_config_device device;
  const char * conf_acl;
  struct mgos_config_mqtt mqtt;
  struct mgos_config_mqtt mqtt1;
  struct mgos_config_rpc rpc;
  struct mgos_config_wifi wifi;
};
const struct mgos_conf_entry *mgos_config_get_schema(void);
void mgos_config_set_defaults(struct mgos_config *cfg);
static inline bool mgos_config_parse(struct mg_str json, struct mgos_config *cfg) {
  mgos_config_set_defaults(cfg);
  return mgos_conf_parse_sub(json, mgos_config_get_schema(), cfg);
}
static inline bool mgos_config_emit(const struct mgos_config *cfg, bool pretty, struct json_out *out) {
  return mgos_conf_emit_json_out(cfg, NULL, mgos_config_get_schema(), pretty, out);
}
static inline bool mgos_config_emit_f(const struct mgos_config *cfg, bool pretty, const char *fname) {
  return mgos_conf_emit_f(cfg, NULL, mgos_config_get_schema(), pretty, fname);
}
static inline bool mgos_config_copy(const struct mgos_config *src, struct mgos_config *dst) {
  return mgos_conf_copy(mgos_config_get_schema(), src, dst);
}
static inline void mgos_config_free(struct mgos_config *cfg) {
  return mgos_conf_free(mgos_config_get_schema(), cfg);
}

extern struct mgos_config mgos_sys_config;

/* debug */
#define MGOS_CONFIG_HAVE_DEBUG
#define MGOS_SYS_CONFIG_HAVE_DEBUG
const struct mgos_config_debug *mgos_config_get_debug(const struct mgos_config *cfg);
static inline const struct mgos_config_debug *mgos_sys_config_get_debug(void) { return mgos_config_get_debug(&mgos_sys_config); }

/* debug.udp_log_addr */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_ADDR
const char * mgos_config_get_debug_udp_log_addr(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_udp_log_addr(void);
static inline const char * mgos_sys_config_get_debug_udp_log_addr(void) { return mgos_config_get_debug_udp_log_addr(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_udp_log_addr(void) { return mgos_config_get_default_debug_udp_log_addr(); }
void mgos_config_set_debug_udp_log_addr(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_udp_log_addr(const char * v) { mgos_config_set_debug_udp_log_addr(&mgos_sys_config, v); }

/* debug.udp_log_level */
#define MGOS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_UDP_LOG_LEVEL
int mgos_config_get_debug_udp_log_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_udp_log_level(void);
static inline int mgos_sys_config_get_debug_udp_log_level(void) { return mgos_config_get_debug_udp_log_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_udp_log_level(void) { return mgos_config_get_default_debug_udp_log_level(); }
void mgos_config_set_debug_udp_log_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_udp_log_level(int v) { mgos_config_set_debug_udp_log_level(&mgos_sys_config, v); }

/* debug.mbedtls_level */
#define MGOS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MBEDTLS_LEVEL
int mgos_config_get_debug_mbedtls_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_mbedtls_level(void);
static inline int mgos_sys_config_get_debug_mbedtls_level(void) { return mgos_config_get_debug_mbedtls_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_mbedtls_level(void) { return mgos_config_get_default_debug_mbedtls_level(); }
void mgos_config_set_debug_mbedtls_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_mbedtls_level(int v) { mgos_config_set_debug_mbedtls_level(&mgos_sys_config, v); }

/* debug.level */
#define MGOS_CONFIG_HAVE_DEBUG_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_LEVEL
int mgos_config_get_debug_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_level(void);
static inline int mgos_sys_config_get_debug_level(void) { return mgos_config_get_debug_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_level(void) { return mgos_config_get_default_debug_level(); }
void mgos_config_set_debug_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_level(int v) { mgos_config_set_debug_level(&mgos_sys_config, v); }

/* debug.file_level */
#define MGOS_CONFIG_HAVE_DEBUG_FILE_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FILE_LEVEL
const char * mgos_config_get_debug_file_level(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_file_level(void);
static inline const char * mgos_sys_config_get_debug_file_level(void) { return mgos_config_get_debug_file_level(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_file_level(void) { return mgos_config_get_default_debug_file_level(); }
void mgos_config_set_debug_file_level(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_file_level(const char * v) { mgos_config_set_debug_file_level(&mgos_sys_config, v); }

/* debug.event_level */
#define MGOS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
#define MGOS_SYS_CONFIG_HAVE_DEBUG_EVENT_LEVEL
int mgos_config_get_debug_event_level(const struct mgos_config *cfg);
int mgos_config_get_default_debug_event_level(void);
static inline int mgos_sys_config_get_debug_event_level(void) { return mgos_config_get_debug_event_level(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_event_level(void) { return mgos_config_get_default_debug_event_level(); }
void mgos_config_set_debug_event_level(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_event_level(int v) { mgos_config_set_debug_event_level(&mgos_sys_config, v); }

/* debug.stdout_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_UART
int mgos_config_get_debug_stdout_uart(const struct mgos_config *cfg);
int mgos_config_get_default_debug_stdout_uart(void);
static inline int mgos_sys_config_get_debug_stdout_uart(void) { return mgos_config_get_debug_stdout_uart(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_stdout_uart(void) { return mgos_config_get_default_debug_stdout_uart(); }
void mgos_config_set_debug_stdout_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stdout_uart(int v) { mgos_config_set_debug_stdout_uart(&mgos_sys_config, v); }

/* debug.stderr_uart */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_UART
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_UART
int mgos_config_get_debug_stderr_uart(const struct mgos_config *cfg);
int mgos_config_get_default_debug_stderr_uart(void);
static inline int mgos_sys_config_get_debug_stderr_uart(void) { return mgos_config_get_debug_stderr_uart(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_stderr_uart(void) { return mgos_config_get_default_debug_stderr_uart(); }
void mgos_config_set_debug_stderr_uart(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_stderr_uart(int v) { mgos_config_set_debug_stderr_uart(&mgos_sys_config, v); }

/* debug.factory_reset_gpio */
#define MGOS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
#define MGOS_SYS_CONFIG_HAVE_DEBUG_FACTORY_RESET_GPIO
int mgos_config_get_debug_factory_reset_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_debug_factory_reset_gpio(void);
static inline int mgos_sys_config_get_debug_factory_reset_gpio(void) { return mgos_config_get_debug_factory_reset_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_debug_factory_reset_gpio(void) { return mgos_config_get_default_debug_factory_reset_gpio(); }
void mgos_config_set_debug_factory_reset_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_debug_factory_reset_gpio(int v) { mgos_config_set_debug_factory_reset_gpio(&mgos_sys_config, v); }

/* debug.mg_mgr_hexdump_file */
#define MGOS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
#define MGOS_SYS_CONFIG_HAVE_DEBUG_MG_MGR_HEXDUMP_FILE
const char * mgos_config_get_debug_mg_mgr_hexdump_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_mg_mgr_hexdump_file(void);
static inline const char * mgos_sys_config_get_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_debug_mg_mgr_hexdump_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_mg_mgr_hexdump_file(void) { return mgos_config_get_default_debug_mg_mgr_hexdump_file(); }
void mgos_config_set_debug_mg_mgr_hexdump_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_mg_mgr_hexdump_file(const char * v) { mgos_config_set_debug_mg_mgr_hexdump_file(&mgos_sys_config, v); }

/* debug.stdout_topic */
#define MGOS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDOUT_TOPIC
const char * mgos_config_get_debug_stdout_topic(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_stdout_topic(void);
static inline const char * mgos_sys_config_get_debug_stdout_topic(void) { return mgos_config_get_debug_stdout_topic(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_stdout_topic(void) { return mgos_config_get_default_debug_stdout_topic(); }
void mgos_config_set_debug_stdout_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_stdout_topic(const char * v) { mgos_config_set_debug_stdout_topic(&mgos_sys_config, v); }

/* debug.stderr_topic */
#define MGOS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
#define MGOS_SYS_CONFIG_HAVE_DEBUG_STDERR_TOPIC
const char * mgos_config_get_debug_stderr_topic(const struct mgos_config *cfg);
const char * mgos_config_get_default_debug_stderr_topic(void);
static inline const char * mgos_sys_config_get_debug_stderr_topic(void) { return mgos_config_get_debug_stderr_topic(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_debug_stderr_topic(void) { return mgos_config_get_default_debug_stderr_topic(); }
void mgos_config_set_debug_stderr_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_debug_stderr_topic(const char * v) { mgos_config_set_debug_stderr_topic(&mgos_sys_config, v); }

/* i2c */
#define MGOS_CONFIG_HAVE_I2C
#define MGOS_SYS_CONFIG_HAVE_I2C
const struct mgos_config_i2c *mgos_config_get_i2c(const struct mgos_config *cfg);
static inline const struct mgos_config_i2c *mgos_sys_config_get_i2c(void) { return mgos_config_get_i2c(&mgos_sys_config); }

/* i2c.enable */
#define MGOS_CONFIG_HAVE_I2C_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C_ENABLE
int mgos_config_get_i2c_enable(const struct mgos_config *cfg);
int mgos_config_get_default_i2c_enable(void);
static inline int mgos_sys_config_get_i2c_enable(void) { return mgos_config_get_i2c_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_i2c_enable(void) { return mgos_config_get_default_i2c_enable(); }
void mgos_config_set_i2c_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_enable(int v) { mgos_config_set_i2c_enable(&mgos_sys_config, v); }

/* i2c.freq */
#define MGOS_CONFIG_HAVE_I2C_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C_FREQ
int mgos_config_get_i2c_freq(const struct mgos_config *cfg);
int mgos_config_get_default_i2c_freq(void);
static inline int mgos_sys_config_get_i2c_freq(void) { return mgos_config_get_i2c_freq(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_i2c_freq(void) { return mgos_config_get_default_i2c_freq(); }
void mgos_config_set_i2c_freq(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_freq(int v) { mgos_config_set_i2c_freq(&mgos_sys_config, v); }

/* i2c.debug */
#define MGOS_CONFIG_HAVE_I2C_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C_DEBUG
int mgos_config_get_i2c_debug(const struct mgos_config *cfg);
int mgos_config_get_default_i2c_debug(void);
static inline int mgos_sys_config_get_i2c_debug(void) { return mgos_config_get_i2c_debug(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_i2c_debug(void) { return mgos_config_get_default_i2c_debug(); }
void mgos_config_set_i2c_debug(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_debug(int v) { mgos_config_set_i2c_debug(&mgos_sys_config, v); }

/* i2c.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SDA_GPIO
int mgos_config_get_i2c_sda_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_i2c_sda_gpio(void);
static inline int mgos_sys_config_get_i2c_sda_gpio(void) { return mgos_config_get_i2c_sda_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_i2c_sda_gpio(void) { return mgos_config_get_default_i2c_sda_gpio(); }
void mgos_config_set_i2c_sda_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_sda_gpio(int v) { mgos_config_set_i2c_sda_gpio(&mgos_sys_config, v); }

/* i2c.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C_SCL_GPIO
int mgos_config_get_i2c_scl_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_i2c_scl_gpio(void);
static inline int mgos_sys_config_get_i2c_scl_gpio(void) { return mgos_config_get_i2c_scl_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_i2c_scl_gpio(void) { return mgos_config_get_default_i2c_scl_gpio(); }
void mgos_config_set_i2c_scl_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c_scl_gpio(int v) { mgos_config_set_i2c_scl_gpio(&mgos_sys_config, v); }

/* i2c1 */
#define MGOS_CONFIG_HAVE_I2C1
#define MGOS_SYS_CONFIG_HAVE_I2C1
const struct mgos_config_i2c *mgos_config_get_i2c1(const struct mgos_config *cfg);
static inline const struct mgos_config_i2c *mgos_sys_config_get_i2c1(void) { return mgos_config_get_i2c1(&mgos_sys_config); }

/* i2c1.enable */
#define MGOS_CONFIG_HAVE_I2C1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_I2C1_ENABLE
int mgos_config_get_i2c1_enable(const struct mgos_config *cfg);
int mgos_config_get_default_i2c1_enable(void);
static inline int mgos_sys_config_get_i2c1_enable(void) { return mgos_config_get_i2c1_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_i2c1_enable(void) { return mgos_config_get_default_i2c1_enable(); }
void mgos_config_set_i2c1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_enable(int v) { mgos_config_set_i2c1_enable(&mgos_sys_config, v); }

/* i2c1.freq */
#define MGOS_CONFIG_HAVE_I2C1_FREQ
#define MGOS_SYS_CONFIG_HAVE_I2C1_FREQ
int mgos_config_get_i2c1_freq(const struct mgos_config *cfg);
int mgos_config_get_default_i2c1_freq(void);
static inline int mgos_sys_config_get_i2c1_freq(void) { return mgos_config_get_i2c1_freq(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_i2c1_freq(void) { return mgos_config_get_default_i2c1_freq(); }
void mgos_config_set_i2c1_freq(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_freq(int v) { mgos_config_set_i2c1_freq(&mgos_sys_config, v); }

/* i2c1.debug */
#define MGOS_CONFIG_HAVE_I2C1_DEBUG
#define MGOS_SYS_CONFIG_HAVE_I2C1_DEBUG
int mgos_config_get_i2c1_debug(const struct mgos_config *cfg);
int mgos_config_get_default_i2c1_debug(void);
static inline int mgos_sys_config_get_i2c1_debug(void) { return mgos_config_get_i2c1_debug(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_i2c1_debug(void) { return mgos_config_get_default_i2c1_debug(); }
void mgos_config_set_i2c1_debug(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_debug(int v) { mgos_config_set_i2c1_debug(&mgos_sys_config, v); }

/* i2c1.sda_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SDA_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SDA_GPIO
int mgos_config_get_i2c1_sda_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_i2c1_sda_gpio(void);
static inline int mgos_sys_config_get_i2c1_sda_gpio(void) { return mgos_config_get_i2c1_sda_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_i2c1_sda_gpio(void) { return mgos_config_get_default_i2c1_sda_gpio(); }
void mgos_config_set_i2c1_sda_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_sda_gpio(int v) { mgos_config_set_i2c1_sda_gpio(&mgos_sys_config, v); }

/* i2c1.scl_gpio */
#define MGOS_CONFIG_HAVE_I2C1_SCL_GPIO
#define MGOS_SYS_CONFIG_HAVE_I2C1_SCL_GPIO
int mgos_config_get_i2c1_scl_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_i2c1_scl_gpio(void);
static inline int mgos_sys_config_get_i2c1_scl_gpio(void) { return mgos_config_get_i2c1_scl_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_i2c1_scl_gpio(void) { return mgos_config_get_default_i2c1_scl_gpio(); }
void mgos_config_set_i2c1_scl_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_i2c1_scl_gpio(int v) { mgos_config_set_i2c1_scl_gpio(&mgos_sys_config, v); }

/* sys */
#define MGOS_CONFIG_HAVE_SYS
#define MGOS_SYS_CONFIG_HAVE_SYS
const struct mgos_config_sys *mgos_config_get_sys(const struct mgos_config *cfg);
static inline const struct mgos_config_sys *mgos_sys_config_get_sys(void) { return mgos_config_get_sys(&mgos_sys_config); }

/* sys.atca */
#define MGOS_CONFIG_HAVE_SYS_ATCA
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA
const struct mgos_config_sys_atca *mgos_config_get_sys_atca(const struct mgos_config *cfg);
static inline const struct mgos_config_sys_atca *mgos_sys_config_get_sys_atca(void) { return mgos_config_get_sys_atca(&mgos_sys_config); }

/* sys.atca.enable */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ENABLE
int mgos_config_get_sys_atca_enable(const struct mgos_config *cfg);
int mgos_config_get_default_sys_atca_enable(void);
static inline int mgos_sys_config_get_sys_atca_enable(void) { return mgos_config_get_sys_atca_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sys_atca_enable(void) { return mgos_config_get_default_sys_atca_enable(); }
void mgos_config_set_sys_atca_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_enable(int v) { mgos_config_set_sys_atca_enable(&mgos_sys_config, v); }

/* sys.atca.i2c_bus */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_BUS
int mgos_config_get_sys_atca_i2c_bus(const struct mgos_config *cfg);
int mgos_config_get_default_sys_atca_i2c_bus(void);
static inline int mgos_sys_config_get_sys_atca_i2c_bus(void) { return mgos_config_get_sys_atca_i2c_bus(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sys_atca_i2c_bus(void) { return mgos_config_get_default_sys_atca_i2c_bus(); }
void mgos_config_set_sys_atca_i2c_bus(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_i2c_bus(int v) { mgos_config_set_sys_atca_i2c_bus(&mgos_sys_config, v); }

/* sys.atca.i2c_addr */
#define MGOS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_I2C_ADDR
int mgos_config_get_sys_atca_i2c_addr(const struct mgos_config *cfg);
int mgos_config_get_default_sys_atca_i2c_addr(void);
static inline int mgos_sys_config_get_sys_atca_i2c_addr(void) { return mgos_config_get_sys_atca_i2c_addr(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sys_atca_i2c_addr(void) { return mgos_config_get_default_sys_atca_i2c_addr(); }
void mgos_config_set_sys_atca_i2c_addr(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_i2c_addr(int v) { mgos_config_set_sys_atca_i2c_addr(&mgos_sys_config, v); }

/* sys.atca.ecdh_slots_mask */
#define MGOS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
#define MGOS_SYS_CONFIG_HAVE_SYS_ATCA_ECDH_SLOTS_MASK
int mgos_config_get_sys_atca_ecdh_slots_mask(const struct mgos_config *cfg);
int mgos_config_get_default_sys_atca_ecdh_slots_mask(void);
static inline int mgos_sys_config_get_sys_atca_ecdh_slots_mask(void) { return mgos_config_get_sys_atca_ecdh_slots_mask(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sys_atca_ecdh_slots_mask(void) { return mgos_config_get_default_sys_atca_ecdh_slots_mask(); }
void mgos_config_set_sys_atca_ecdh_slots_mask(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_atca_ecdh_slots_mask(int v) { mgos_config_set_sys_atca_ecdh_slots_mask(&mgos_sys_config, v); }

/* sys.tz_spec */
#define MGOS_CONFIG_HAVE_SYS_TZ_SPEC
#define MGOS_SYS_CONFIG_HAVE_SYS_TZ_SPEC
const char * mgos_config_get_sys_tz_spec(const struct mgos_config *cfg);
const char * mgos_config_get_default_sys_tz_spec(void);
static inline const char * mgos_sys_config_get_sys_tz_spec(void) { return mgos_config_get_sys_tz_spec(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_sys_tz_spec(void) { return mgos_config_get_default_sys_tz_spec(); }
void mgos_config_set_sys_tz_spec(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_tz_spec(const char * v) { mgos_config_set_sys_tz_spec(&mgos_sys_config, v); }

/* sys.wdt_timeout */
#define MGOS_CONFIG_HAVE_SYS_WDT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_SYS_WDT_TIMEOUT
int mgos_config_get_sys_wdt_timeout(const struct mgos_config *cfg);
int mgos_config_get_default_sys_wdt_timeout(void);
static inline int mgos_sys_config_get_sys_wdt_timeout(void) { return mgos_config_get_sys_wdt_timeout(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_sys_wdt_timeout(void) { return mgos_config_get_default_sys_wdt_timeout(); }
void mgos_config_set_sys_wdt_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_sys_wdt_timeout(int v) { mgos_config_set_sys_wdt_timeout(&mgos_sys_config, v); }

/* sys.pref_ota_lib */
#define MGOS_CONFIG_HAVE_SYS_PREF_OTA_LIB
#define MGOS_SYS_CONFIG_HAVE_SYS_PREF_OTA_LIB
const char * mgos_config_get_sys_pref_ota_lib(const struct mgos_config *cfg);
const char * mgos_config_get_default_sys_pref_ota_lib(void);
static inline const char * mgos_sys_config_get_sys_pref_ota_lib(void) { return mgos_config_get_sys_pref_ota_lib(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_sys_pref_ota_lib(void) { return mgos_config_get_default_sys_pref_ota_lib(); }
void mgos_config_set_sys_pref_ota_lib(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_sys_pref_ota_lib(const char * v) { mgos_config_set_sys_pref_ota_lib(&mgos_sys_config, v); }

/* device */
#define MGOS_CONFIG_HAVE_DEVICE
#define MGOS_SYS_CONFIG_HAVE_DEVICE
const struct mgos_config_device *mgos_config_get_device(const struct mgos_config *cfg);
static inline const struct mgos_config_device *mgos_sys_config_get_device(void) { return mgos_config_get_device(&mgos_sys_config); }

/* device.id */
#define MGOS_CONFIG_HAVE_DEVICE_ID
#define MGOS_SYS_CONFIG_HAVE_DEVICE_ID
const char * mgos_config_get_device_id(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_id(void);
static inline const char * mgos_sys_config_get_device_id(void) { return mgos_config_get_device_id(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_id(void) { return mgos_config_get_default_device_id(); }
void mgos_config_set_device_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_id(const char * v) { mgos_config_set_device_id(&mgos_sys_config, v); }

/* device.license */
#define MGOS_CONFIG_HAVE_DEVICE_LICENSE
#define MGOS_SYS_CONFIG_HAVE_DEVICE_LICENSE
const char * mgos_config_get_device_license(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_license(void);
static inline const char * mgos_sys_config_get_device_license(void) { return mgos_config_get_device_license(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_license(void) { return mgos_config_get_default_device_license(); }
void mgos_config_set_device_license(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_license(const char * v) { mgos_config_set_device_license(&mgos_sys_config, v); }

/* device.mac */
#define MGOS_CONFIG_HAVE_DEVICE_MAC
#define MGOS_SYS_CONFIG_HAVE_DEVICE_MAC
const char * mgos_config_get_device_mac(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_mac(void);
static inline const char * mgos_sys_config_get_device_mac(void) { return mgos_config_get_device_mac(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_mac(void) { return mgos_config_get_default_device_mac(); }
void mgos_config_set_device_mac(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_mac(const char * v) { mgos_config_set_device_mac(&mgos_sys_config, v); }

/* device.public_key */
#define MGOS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
#define MGOS_SYS_CONFIG_HAVE_DEVICE_PUBLIC_KEY
const char * mgos_config_get_device_public_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_public_key(void);
static inline const char * mgos_sys_config_get_device_public_key(void) { return mgos_config_get_device_public_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_public_key(void) { return mgos_config_get_default_device_public_key(); }
void mgos_config_set_device_public_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_public_key(const char * v) { mgos_config_set_device_public_key(&mgos_sys_config, v); }

/* device.sn */
#define MGOS_CONFIG_HAVE_DEVICE_SN
#define MGOS_SYS_CONFIG_HAVE_DEVICE_SN
const char * mgos_config_get_device_sn(const struct mgos_config *cfg);
const char * mgos_config_get_default_device_sn(void);
static inline const char * mgos_sys_config_get_device_sn(void) { return mgos_config_get_device_sn(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_device_sn(void) { return mgos_config_get_default_device_sn(); }
void mgos_config_set_device_sn(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_device_sn(const char * v) { mgos_config_set_device_sn(&mgos_sys_config, v); }

/* conf_acl */
#define MGOS_CONFIG_HAVE_CONF_ACL
#define MGOS_SYS_CONFIG_HAVE_CONF_ACL
const char * mgos_config_get_conf_acl(const struct mgos_config *cfg);
const char * mgos_config_get_default_conf_acl(void);
static inline const char * mgos_sys_config_get_conf_acl(void) { return mgos_config_get_conf_acl(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_conf_acl(void) { return mgos_config_get_default_conf_acl(); }
void mgos_config_set_conf_acl(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_conf_acl(const char * v) { mgos_config_set_conf_acl(&mgos_sys_config, v); }

/* mqtt */
#define MGOS_CONFIG_HAVE_MQTT
#define MGOS_SYS_CONFIG_HAVE_MQTT
const struct mgos_config_mqtt *mgos_config_get_mqtt(const struct mgos_config *cfg);
static inline const struct mgos_config_mqtt *mgos_sys_config_get_mqtt(void) { return mgos_config_get_mqtt(&mgos_sys_config); }

/* mqtt.enable */
#define MGOS_CONFIG_HAVE_MQTT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MQTT_ENABLE
int mgos_config_get_mqtt_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_enable(void);
static inline int mgos_sys_config_get_mqtt_enable(void) { return mgos_config_get_mqtt_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_enable(void) { return mgos_config_get_default_mqtt_enable(); }
void mgos_config_set_mqtt_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_enable(int v) { mgos_config_set_mqtt_enable(&mgos_sys_config, v); }

/* mqtt.server */
#define MGOS_CONFIG_HAVE_MQTT_SERVER
#define MGOS_SYS_CONFIG_HAVE_MQTT_SERVER
const char * mgos_config_get_mqtt_server(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_server(void);
static inline const char * mgos_sys_config_get_mqtt_server(void) { return mgos_config_get_mqtt_server(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_server(void) { return mgos_config_get_default_mqtt_server(); }
void mgos_config_set_mqtt_server(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_server(const char * v) { mgos_config_set_mqtt_server(&mgos_sys_config, v); }

/* mqtt.client_id */
#define MGOS_CONFIG_HAVE_MQTT_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLIENT_ID
const char * mgos_config_get_mqtt_client_id(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_client_id(void);
static inline const char * mgos_sys_config_get_mqtt_client_id(void) { return mgos_config_get_mqtt_client_id(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_client_id(void) { return mgos_config_get_default_mqtt_client_id(); }
void mgos_config_set_mqtt_client_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_client_id(const char * v) { mgos_config_set_mqtt_client_id(&mgos_sys_config, v); }

/* mqtt.user */
#define MGOS_CONFIG_HAVE_MQTT_USER
#define MGOS_SYS_CONFIG_HAVE_MQTT_USER
const char * mgos_config_get_mqtt_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_user(void);
static inline const char * mgos_sys_config_get_mqtt_user(void) { return mgos_config_get_mqtt_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_user(void) { return mgos_config_get_default_mqtt_user(); }
void mgos_config_set_mqtt_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_user(const char * v) { mgos_config_set_mqtt_user(&mgos_sys_config, v); }

/* mqtt.pass */
#define MGOS_CONFIG_HAVE_MQTT_PASS
#define MGOS_SYS_CONFIG_HAVE_MQTT_PASS
const char * mgos_config_get_mqtt_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_pass(void);
static inline const char * mgos_sys_config_get_mqtt_pass(void) { return mgos_config_get_mqtt_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_pass(void) { return mgos_config_get_default_mqtt_pass(); }
void mgos_config_set_mqtt_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_pass(const char * v) { mgos_config_set_mqtt_pass(&mgos_sys_config, v); }

/* mqtt.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MIN
double mgos_config_get_mqtt_reconnect_timeout_min(const struct mgos_config *cfg);
double mgos_config_get_default_mqtt_reconnect_timeout_min(void);
static inline double mgos_sys_config_get_mqtt_reconnect_timeout_min(void) { return mgos_config_get_mqtt_reconnect_timeout_min(&mgos_sys_config); }
static inline double mgos_sys_config_get_default_mqtt_reconnect_timeout_min(void) { return mgos_config_get_default_mqtt_reconnect_timeout_min(); }
void mgos_config_set_mqtt_reconnect_timeout_min(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_min(double v) { mgos_config_set_mqtt_reconnect_timeout_min(&mgos_sys_config, v); }

/* mqtt.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECONNECT_TIMEOUT_MAX
double mgos_config_get_mqtt_reconnect_timeout_max(const struct mgos_config *cfg);
double mgos_config_get_default_mqtt_reconnect_timeout_max(void);
static inline double mgos_sys_config_get_mqtt_reconnect_timeout_max(void) { return mgos_config_get_mqtt_reconnect_timeout_max(&mgos_sys_config); }
static inline double mgos_sys_config_get_default_mqtt_reconnect_timeout_max(void) { return mgos_config_get_default_mqtt_reconnect_timeout_max(); }
void mgos_config_set_mqtt_reconnect_timeout_max(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt_reconnect_timeout_max(double v) { mgos_config_set_mqtt_reconnect_timeout_max(&mgos_sys_config, v); }

/* mqtt.ssl_cert */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CERT
const char * mgos_config_get_mqtt_ssl_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_cert(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_cert(void) { return mgos_config_get_mqtt_ssl_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_cert(void) { return mgos_config_get_default_mqtt_ssl_cert(); }
void mgos_config_set_mqtt_ssl_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_cert(const char * v) { mgos_config_set_mqtt_ssl_cert(&mgos_sys_config, v); }

/* mqtt.ssl_key */
#define MGOS_CONFIG_HAVE_MQTT_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_KEY
const char * mgos_config_get_mqtt_ssl_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_key(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_key(void) { return mgos_config_get_mqtt_ssl_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_key(void) { return mgos_config_get_default_mqtt_ssl_key(); }
void mgos_config_set_mqtt_ssl_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_key(const char * v) { mgos_config_set_mqtt_ssl_key(&mgos_sys_config, v); }

/* mqtt.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CA_CERT
const char * mgos_config_get_mqtt_ssl_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_ca_cert(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_ca_cert(void) { return mgos_config_get_mqtt_ssl_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_ca_cert(void) { return mgos_config_get_default_mqtt_ssl_ca_cert(); }
void mgos_config_set_mqtt_ssl_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_ca_cert(const char * v) { mgos_config_set_mqtt_ssl_ca_cert(&mgos_sys_config, v); }

/* mqtt.ssl_cipher_suites */
#define MGOS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_CIPHER_SUITES
const char * mgos_config_get_mqtt_ssl_cipher_suites(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_cipher_suites(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_cipher_suites(void) { return mgos_config_get_mqtt_ssl_cipher_suites(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_cipher_suites(void) { return mgos_config_get_default_mqtt_ssl_cipher_suites(); }
void mgos_config_set_mqtt_ssl_cipher_suites(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_cipher_suites(const char * v) { mgos_config_set_mqtt_ssl_cipher_suites(&mgos_sys_config, v); }

/* mqtt.ssl_psk_identity */
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_IDENTITY
const char * mgos_config_get_mqtt_ssl_psk_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_psk_identity(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_psk_identity(void) { return mgos_config_get_mqtt_ssl_psk_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_psk_identity(void) { return mgos_config_get_default_mqtt_ssl_psk_identity(); }
void mgos_config_set_mqtt_ssl_psk_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_psk_identity(const char * v) { mgos_config_set_mqtt_ssl_psk_identity(&mgos_sys_config, v); }

/* mqtt.ssl_psk_key */
#define MGOS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT_SSL_PSK_KEY
const char * mgos_config_get_mqtt_ssl_psk_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_ssl_psk_key(void);
static inline const char * mgos_sys_config_get_mqtt_ssl_psk_key(void) { return mgos_config_get_mqtt_ssl_psk_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_ssl_psk_key(void) { return mgos_config_get_default_mqtt_ssl_psk_key(); }
void mgos_config_set_mqtt_ssl_psk_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_ssl_psk_key(const char * v) { mgos_config_set_mqtt_ssl_psk_key(&mgos_sys_config, v); }

/* mqtt.clean_session */
#define MGOS_CONFIG_HAVE_MQTT_CLEAN_SESSION
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLEAN_SESSION
int mgos_config_get_mqtt_clean_session(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_clean_session(void);
static inline int mgos_sys_config_get_mqtt_clean_session(void) { return mgos_config_get_mqtt_clean_session(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_clean_session(void) { return mgos_config_get_default_mqtt_clean_session(); }
void mgos_config_set_mqtt_clean_session(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_clean_session(int v) { mgos_config_set_mqtt_clean_session(&mgos_sys_config, v); }

/* mqtt.keep_alive */
#define MGOS_CONFIG_HAVE_MQTT_KEEP_ALIVE
#define MGOS_SYS_CONFIG_HAVE_MQTT_KEEP_ALIVE
int mgos_config_get_mqtt_keep_alive(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_keep_alive(void);
static inline int mgos_sys_config_get_mqtt_keep_alive(void) { return mgos_config_get_mqtt_keep_alive(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_keep_alive(void) { return mgos_config_get_default_mqtt_keep_alive(); }
void mgos_config_set_mqtt_keep_alive(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_keep_alive(int v) { mgos_config_set_mqtt_keep_alive(&mgos_sys_config, v); }

/* mqtt.will_topic */
#define MGOS_CONFIG_HAVE_MQTT_WILL_TOPIC
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_TOPIC
const char * mgos_config_get_mqtt_will_topic(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_will_topic(void);
static inline const char * mgos_sys_config_get_mqtt_will_topic(void) { return mgos_config_get_mqtt_will_topic(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_will_topic(void) { return mgos_config_get_default_mqtt_will_topic(); }
void mgos_config_set_mqtt_will_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_will_topic(const char * v) { mgos_config_set_mqtt_will_topic(&mgos_sys_config, v); }

/* mqtt.will_message */
#define MGOS_CONFIG_HAVE_MQTT_WILL_MESSAGE
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_MESSAGE
const char * mgos_config_get_mqtt_will_message(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_will_message(void);
static inline const char * mgos_sys_config_get_mqtt_will_message(void) { return mgos_config_get_mqtt_will_message(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_will_message(void) { return mgos_config_get_default_mqtt_will_message(); }
void mgos_config_set_mqtt_will_message(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_will_message(const char * v) { mgos_config_set_mqtt_will_message(&mgos_sys_config, v); }

/* mqtt.will_retain */
#define MGOS_CONFIG_HAVE_MQTT_WILL_RETAIN
#define MGOS_SYS_CONFIG_HAVE_MQTT_WILL_RETAIN
int mgos_config_get_mqtt_will_retain(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_will_retain(void);
static inline int mgos_sys_config_get_mqtt_will_retain(void) { return mgos_config_get_mqtt_will_retain(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_will_retain(void) { return mgos_config_get_default_mqtt_will_retain(); }
void mgos_config_set_mqtt_will_retain(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_will_retain(int v) { mgos_config_set_mqtt_will_retain(&mgos_sys_config, v); }

/* mqtt.max_qos */
#define MGOS_CONFIG_HAVE_MQTT_MAX_QOS
#define MGOS_SYS_CONFIG_HAVE_MQTT_MAX_QOS
int mgos_config_get_mqtt_max_qos(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_max_qos(void);
static inline int mgos_sys_config_get_mqtt_max_qos(void) { return mgos_config_get_mqtt_max_qos(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_max_qos(void) { return mgos_config_get_default_mqtt_max_qos(); }
void mgos_config_set_mqtt_max_qos(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_max_qos(int v) { mgos_config_set_mqtt_max_qos(&mgos_sys_config, v); }

/* mqtt.recv_mbuf_limit */
#define MGOS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
#define MGOS_SYS_CONFIG_HAVE_MQTT_RECV_MBUF_LIMIT
int mgos_config_get_mqtt_recv_mbuf_limit(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_recv_mbuf_limit(void);
static inline int mgos_sys_config_get_mqtt_recv_mbuf_limit(void) { return mgos_config_get_mqtt_recv_mbuf_limit(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_recv_mbuf_limit(void) { return mgos_config_get_default_mqtt_recv_mbuf_limit(); }
void mgos_config_set_mqtt_recv_mbuf_limit(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_recv_mbuf_limit(int v) { mgos_config_set_mqtt_recv_mbuf_limit(&mgos_sys_config, v); }

/* mqtt.require_time */
#define MGOS_CONFIG_HAVE_MQTT_REQUIRE_TIME
#define MGOS_SYS_CONFIG_HAVE_MQTT_REQUIRE_TIME
int mgos_config_get_mqtt_require_time(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_require_time(void);
static inline int mgos_sys_config_get_mqtt_require_time(void) { return mgos_config_get_mqtt_require_time(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_require_time(void) { return mgos_config_get_default_mqtt_require_time(); }
void mgos_config_set_mqtt_require_time(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_require_time(int v) { mgos_config_set_mqtt_require_time(&mgos_sys_config, v); }

/* mqtt.cloud_events */
#define MGOS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
#define MGOS_SYS_CONFIG_HAVE_MQTT_CLOUD_EVENTS
int mgos_config_get_mqtt_cloud_events(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_cloud_events(void);
static inline int mgos_sys_config_get_mqtt_cloud_events(void) { return mgos_config_get_mqtt_cloud_events(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_cloud_events(void) { return mgos_config_get_default_mqtt_cloud_events(); }
void mgos_config_set_mqtt_cloud_events(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_cloud_events(int v) { mgos_config_set_mqtt_cloud_events(&mgos_sys_config, v); }

/* mqtt.max_queue_length */
#define MGOS_CONFIG_HAVE_MQTT_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_MQTT_MAX_QUEUE_LENGTH
int mgos_config_get_mqtt_max_queue_length(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt_max_queue_length(void);
static inline int mgos_sys_config_get_mqtt_max_queue_length(void) { return mgos_config_get_mqtt_max_queue_length(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt_max_queue_length(void) { return mgos_config_get_default_mqtt_max_queue_length(); }
void mgos_config_set_mqtt_max_queue_length(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt_max_queue_length(int v) { mgos_config_set_mqtt_max_queue_length(&mgos_sys_config, v); }

/* mqtt.pub */
#define MGOS_CONFIG_HAVE_MQTT_PUB
#define MGOS_SYS_CONFIG_HAVE_MQTT_PUB
const char * mgos_config_get_mqtt_pub(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt_pub(void);
static inline const char * mgos_sys_config_get_mqtt_pub(void) { return mgos_config_get_mqtt_pub(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt_pub(void) { return mgos_config_get_default_mqtt_pub(); }
void mgos_config_set_mqtt_pub(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt_pub(const char * v) { mgos_config_set_mqtt_pub(&mgos_sys_config, v); }

/* mqtt1 */
#define MGOS_CONFIG_HAVE_MQTT1
#define MGOS_SYS_CONFIG_HAVE_MQTT1
const struct mgos_config_mqtt *mgos_config_get_mqtt1(const struct mgos_config *cfg);
static inline const struct mgos_config_mqtt *mgos_sys_config_get_mqtt1(void) { return mgos_config_get_mqtt1(&mgos_sys_config); }

/* mqtt1.enable */
#define MGOS_CONFIG_HAVE_MQTT1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_ENABLE
int mgos_config_get_mqtt1_enable(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_enable(void);
static inline int mgos_sys_config_get_mqtt1_enable(void) { return mgos_config_get_mqtt1_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_enable(void) { return mgos_config_get_default_mqtt1_enable(); }
void mgos_config_set_mqtt1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_enable(int v) { mgos_config_set_mqtt1_enable(&mgos_sys_config, v); }

/* mqtt1.server */
#define MGOS_CONFIG_HAVE_MQTT1_SERVER
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SERVER
const char * mgos_config_get_mqtt1_server(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_server(void);
static inline const char * mgos_sys_config_get_mqtt1_server(void) { return mgos_config_get_mqtt1_server(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_server(void) { return mgos_config_get_default_mqtt1_server(); }
void mgos_config_set_mqtt1_server(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_server(const char * v) { mgos_config_set_mqtt1_server(&mgos_sys_config, v); }

/* mqtt1.client_id */
#define MGOS_CONFIG_HAVE_MQTT1_CLIENT_ID
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLIENT_ID
const char * mgos_config_get_mqtt1_client_id(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_client_id(void);
static inline const char * mgos_sys_config_get_mqtt1_client_id(void) { return mgos_config_get_mqtt1_client_id(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_client_id(void) { return mgos_config_get_default_mqtt1_client_id(); }
void mgos_config_set_mqtt1_client_id(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_client_id(const char * v) { mgos_config_set_mqtt1_client_id(&mgos_sys_config, v); }

/* mqtt1.user */
#define MGOS_CONFIG_HAVE_MQTT1_USER
#define MGOS_SYS_CONFIG_HAVE_MQTT1_USER
const char * mgos_config_get_mqtt1_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_user(void);
static inline const char * mgos_sys_config_get_mqtt1_user(void) { return mgos_config_get_mqtt1_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_user(void) { return mgos_config_get_default_mqtt1_user(); }
void mgos_config_set_mqtt1_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_user(const char * v) { mgos_config_set_mqtt1_user(&mgos_sys_config, v); }

/* mqtt1.pass */
#define MGOS_CONFIG_HAVE_MQTT1_PASS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_PASS
const char * mgos_config_get_mqtt1_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_pass(void);
static inline const char * mgos_sys_config_get_mqtt1_pass(void) { return mgos_config_get_mqtt1_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_pass(void) { return mgos_config_get_default_mqtt1_pass(); }
void mgos_config_set_mqtt1_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_pass(const char * v) { mgos_config_set_mqtt1_pass(&mgos_sys_config, v); }

/* mqtt1.reconnect_timeout_min */
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MIN
double mgos_config_get_mqtt1_reconnect_timeout_min(const struct mgos_config *cfg);
double mgos_config_get_default_mqtt1_reconnect_timeout_min(void);
static inline double mgos_sys_config_get_mqtt1_reconnect_timeout_min(void) { return mgos_config_get_mqtt1_reconnect_timeout_min(&mgos_sys_config); }
static inline double mgos_sys_config_get_default_mqtt1_reconnect_timeout_min(void) { return mgos_config_get_default_mqtt1_reconnect_timeout_min(); }
void mgos_config_set_mqtt1_reconnect_timeout_min(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt1_reconnect_timeout_min(double v) { mgos_config_set_mqtt1_reconnect_timeout_min(&mgos_sys_config, v); }

/* mqtt1.reconnect_timeout_max */
#define MGOS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECONNECT_TIMEOUT_MAX
double mgos_config_get_mqtt1_reconnect_timeout_max(const struct mgos_config *cfg);
double mgos_config_get_default_mqtt1_reconnect_timeout_max(void);
static inline double mgos_sys_config_get_mqtt1_reconnect_timeout_max(void) { return mgos_config_get_mqtt1_reconnect_timeout_max(&mgos_sys_config); }
static inline double mgos_sys_config_get_default_mqtt1_reconnect_timeout_max(void) { return mgos_config_get_default_mqtt1_reconnect_timeout_max(); }
void mgos_config_set_mqtt1_reconnect_timeout_max(struct mgos_config *cfg, double v);
static inline void mgos_sys_config_set_mqtt1_reconnect_timeout_max(double v) { mgos_config_set_mqtt1_reconnect_timeout_max(&mgos_sys_config, v); }

/* mqtt1.ssl_cert */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CERT
const char * mgos_config_get_mqtt1_ssl_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_cert(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_cert(void) { return mgos_config_get_mqtt1_ssl_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_cert(void) { return mgos_config_get_default_mqtt1_ssl_cert(); }
void mgos_config_set_mqtt1_ssl_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_cert(const char * v) { mgos_config_set_mqtt1_ssl_cert(&mgos_sys_config, v); }

/* mqtt1.ssl_key */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_KEY
const char * mgos_config_get_mqtt1_ssl_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_key(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_key(void) { return mgos_config_get_mqtt1_ssl_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_key(void) { return mgos_config_get_default_mqtt1_ssl_key(); }
void mgos_config_set_mqtt1_ssl_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_key(const char * v) { mgos_config_set_mqtt1_ssl_key(&mgos_sys_config, v); }

/* mqtt1.ssl_ca_cert */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CA_CERT
const char * mgos_config_get_mqtt1_ssl_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_ca_cert(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_ca_cert(void) { return mgos_config_get_mqtt1_ssl_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_ca_cert(void) { return mgos_config_get_default_mqtt1_ssl_ca_cert(); }
void mgos_config_set_mqtt1_ssl_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_ca_cert(const char * v) { mgos_config_set_mqtt1_ssl_ca_cert(&mgos_sys_config, v); }

/* mqtt1.ssl_cipher_suites */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_CIPHER_SUITES
const char * mgos_config_get_mqtt1_ssl_cipher_suites(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_cipher_suites(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_cipher_suites(void) { return mgos_config_get_mqtt1_ssl_cipher_suites(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_cipher_suites(void) { return mgos_config_get_default_mqtt1_ssl_cipher_suites(); }
void mgos_config_set_mqtt1_ssl_cipher_suites(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_cipher_suites(const char * v) { mgos_config_set_mqtt1_ssl_cipher_suites(&mgos_sys_config, v); }

/* mqtt1.ssl_psk_identity */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_IDENTITY
const char * mgos_config_get_mqtt1_ssl_psk_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_psk_identity(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_psk_identity(void) { return mgos_config_get_mqtt1_ssl_psk_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_psk_identity(void) { return mgos_config_get_default_mqtt1_ssl_psk_identity(); }
void mgos_config_set_mqtt1_ssl_psk_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_psk_identity(const char * v) { mgos_config_set_mqtt1_ssl_psk_identity(&mgos_sys_config, v); }

/* mqtt1.ssl_psk_key */
#define MGOS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
#define MGOS_SYS_CONFIG_HAVE_MQTT1_SSL_PSK_KEY
const char * mgos_config_get_mqtt1_ssl_psk_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_ssl_psk_key(void);
static inline const char * mgos_sys_config_get_mqtt1_ssl_psk_key(void) { return mgos_config_get_mqtt1_ssl_psk_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_ssl_psk_key(void) { return mgos_config_get_default_mqtt1_ssl_psk_key(); }
void mgos_config_set_mqtt1_ssl_psk_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_ssl_psk_key(const char * v) { mgos_config_set_mqtt1_ssl_psk_key(&mgos_sys_config, v); }

/* mqtt1.clean_session */
#define MGOS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLEAN_SESSION
int mgos_config_get_mqtt1_clean_session(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_clean_session(void);
static inline int mgos_sys_config_get_mqtt1_clean_session(void) { return mgos_config_get_mqtt1_clean_session(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_clean_session(void) { return mgos_config_get_default_mqtt1_clean_session(); }
void mgos_config_set_mqtt1_clean_session(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_clean_session(int v) { mgos_config_set_mqtt1_clean_session(&mgos_sys_config, v); }

/* mqtt1.keep_alive */
#define MGOS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_KEEP_ALIVE
int mgos_config_get_mqtt1_keep_alive(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_keep_alive(void);
static inline int mgos_sys_config_get_mqtt1_keep_alive(void) { return mgos_config_get_mqtt1_keep_alive(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_keep_alive(void) { return mgos_config_get_default_mqtt1_keep_alive(); }
void mgos_config_set_mqtt1_keep_alive(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_keep_alive(int v) { mgos_config_set_mqtt1_keep_alive(&mgos_sys_config, v); }

/* mqtt1.will_topic */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_TOPIC
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_TOPIC
const char * mgos_config_get_mqtt1_will_topic(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_will_topic(void);
static inline const char * mgos_sys_config_get_mqtt1_will_topic(void) { return mgos_config_get_mqtt1_will_topic(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_will_topic(void) { return mgos_config_get_default_mqtt1_will_topic(); }
void mgos_config_set_mqtt1_will_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_will_topic(const char * v) { mgos_config_set_mqtt1_will_topic(&mgos_sys_config, v); }

/* mqtt1.will_message */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_MESSAGE
const char * mgos_config_get_mqtt1_will_message(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_will_message(void);
static inline const char * mgos_sys_config_get_mqtt1_will_message(void) { return mgos_config_get_mqtt1_will_message(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_will_message(void) { return mgos_config_get_default_mqtt1_will_message(); }
void mgos_config_set_mqtt1_will_message(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_will_message(const char * v) { mgos_config_set_mqtt1_will_message(&mgos_sys_config, v); }

/* mqtt1.will_retain */
#define MGOS_CONFIG_HAVE_MQTT1_WILL_RETAIN
#define MGOS_SYS_CONFIG_HAVE_MQTT1_WILL_RETAIN
int mgos_config_get_mqtt1_will_retain(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_will_retain(void);
static inline int mgos_sys_config_get_mqtt1_will_retain(void) { return mgos_config_get_mqtt1_will_retain(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_will_retain(void) { return mgos_config_get_default_mqtt1_will_retain(); }
void mgos_config_set_mqtt1_will_retain(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_will_retain(int v) { mgos_config_set_mqtt1_will_retain(&mgos_sys_config, v); }

/* mqtt1.max_qos */
#define MGOS_CONFIG_HAVE_MQTT1_MAX_QOS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_MAX_QOS
int mgos_config_get_mqtt1_max_qos(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_max_qos(void);
static inline int mgos_sys_config_get_mqtt1_max_qos(void) { return mgos_config_get_mqtt1_max_qos(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_max_qos(void) { return mgos_config_get_default_mqtt1_max_qos(); }
void mgos_config_set_mqtt1_max_qos(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_max_qos(int v) { mgos_config_set_mqtt1_max_qos(&mgos_sys_config, v); }

/* mqtt1.recv_mbuf_limit */
#define MGOS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
#define MGOS_SYS_CONFIG_HAVE_MQTT1_RECV_MBUF_LIMIT
int mgos_config_get_mqtt1_recv_mbuf_limit(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_recv_mbuf_limit(void);
static inline int mgos_sys_config_get_mqtt1_recv_mbuf_limit(void) { return mgos_config_get_mqtt1_recv_mbuf_limit(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_recv_mbuf_limit(void) { return mgos_config_get_default_mqtt1_recv_mbuf_limit(); }
void mgos_config_set_mqtt1_recv_mbuf_limit(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_recv_mbuf_limit(int v) { mgos_config_set_mqtt1_recv_mbuf_limit(&mgos_sys_config, v); }

/* mqtt1.require_time */
#define MGOS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
#define MGOS_SYS_CONFIG_HAVE_MQTT1_REQUIRE_TIME
int mgos_config_get_mqtt1_require_time(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_require_time(void);
static inline int mgos_sys_config_get_mqtt1_require_time(void) { return mgos_config_get_mqtt1_require_time(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_require_time(void) { return mgos_config_get_default_mqtt1_require_time(); }
void mgos_config_set_mqtt1_require_time(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_require_time(int v) { mgos_config_set_mqtt1_require_time(&mgos_sys_config, v); }

/* mqtt1.cloud_events */
#define MGOS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
#define MGOS_SYS_CONFIG_HAVE_MQTT1_CLOUD_EVENTS
int mgos_config_get_mqtt1_cloud_events(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_cloud_events(void);
static inline int mgos_sys_config_get_mqtt1_cloud_events(void) { return mgos_config_get_mqtt1_cloud_events(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_cloud_events(void) { return mgos_config_get_default_mqtt1_cloud_events(); }
void mgos_config_set_mqtt1_cloud_events(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_cloud_events(int v) { mgos_config_set_mqtt1_cloud_events(&mgos_sys_config, v); }

/* mqtt1.max_queue_length */
#define MGOS_CONFIG_HAVE_MQTT1_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_MQTT1_MAX_QUEUE_LENGTH
int mgos_config_get_mqtt1_max_queue_length(const struct mgos_config *cfg);
int mgos_config_get_default_mqtt1_max_queue_length(void);
static inline int mgos_sys_config_get_mqtt1_max_queue_length(void) { return mgos_config_get_mqtt1_max_queue_length(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_mqtt1_max_queue_length(void) { return mgos_config_get_default_mqtt1_max_queue_length(); }
void mgos_config_set_mqtt1_max_queue_length(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_mqtt1_max_queue_length(int v) { mgos_config_set_mqtt1_max_queue_length(&mgos_sys_config, v); }

/* mqtt1.pub */
#define MGOS_CONFIG_HAVE_MQTT1_PUB
#define MGOS_SYS_CONFIG_HAVE_MQTT1_PUB
const char * mgos_config_get_mqtt1_pub(const struct mgos_config *cfg);
const char * mgos_config_get_default_mqtt1_pub(void);
static inline const char * mgos_sys_config_get_mqtt1_pub(void) { return mgos_config_get_mqtt1_pub(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_mqtt1_pub(void) { return mgos_config_get_default_mqtt1_pub(); }
void mgos_config_set_mqtt1_pub(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_mqtt1_pub(const char * v) { mgos_config_set_mqtt1_pub(&mgos_sys_config, v); }

/* rpc */
#define MGOS_CONFIG_HAVE_RPC
#define MGOS_SYS_CONFIG_HAVE_RPC
const struct mgos_config_rpc *mgos_config_get_rpc(const struct mgos_config *cfg);
static inline const struct mgos_config_rpc *mgos_sys_config_get_rpc(void) { return mgos_config_get_rpc(&mgos_sys_config); }

/* rpc.enable */
#define MGOS_CONFIG_HAVE_RPC_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_ENABLE
int mgos_config_get_rpc_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_enable(void);
static inline int mgos_sys_config_get_rpc_enable(void) { return mgos_config_get_rpc_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_enable(void) { return mgos_config_get_default_rpc_enable(); }
void mgos_config_set_rpc_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_enable(int v) { mgos_config_set_rpc_enable(&mgos_sys_config, v); }

/* rpc.http_enable */
#define MGOS_CONFIG_HAVE_RPC_HTTP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_HTTP_ENABLE
int mgos_config_get_rpc_http_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_http_enable(void);
static inline int mgos_sys_config_get_rpc_http_enable(void) { return mgos_config_get_rpc_http_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_http_enable(void) { return mgos_config_get_default_rpc_http_enable(); }
void mgos_config_set_rpc_http_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_http_enable(int v) { mgos_config_set_rpc_http_enable(&mgos_sys_config, v); }

/* rpc.service_sys_enable */
#define MGOS_CONFIG_HAVE_RPC_SERVICE_SYS_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_SERVICE_SYS_ENABLE
int mgos_config_get_rpc_service_sys_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_service_sys_enable(void);
static inline int mgos_sys_config_get_rpc_service_sys_enable(void) { return mgos_config_get_rpc_service_sys_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_service_sys_enable(void) { return mgos_config_get_default_rpc_service_sys_enable(); }
void mgos_config_set_rpc_service_sys_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_service_sys_enable(int v) { mgos_config_set_rpc_service_sys_enable(&mgos_sys_config, v); }

/* rpc.max_frame_size */
#define MGOS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_FRAME_SIZE
int mgos_config_get_rpc_max_frame_size(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_max_frame_size(void);
static inline int mgos_sys_config_get_rpc_max_frame_size(void) { return mgos_config_get_rpc_max_frame_size(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_max_frame_size(void) { return mgos_config_get_default_rpc_max_frame_size(); }
void mgos_config_set_rpc_max_frame_size(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_max_frame_size(int v) { mgos_config_set_rpc_max_frame_size(&mgos_sys_config, v); }

/* rpc.max_queue_length */
#define MGOS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
#define MGOS_SYS_CONFIG_HAVE_RPC_MAX_QUEUE_LENGTH
int mgos_config_get_rpc_max_queue_length(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_max_queue_length(void);
static inline int mgos_sys_config_get_rpc_max_queue_length(void) { return mgos_config_get_rpc_max_queue_length(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_max_queue_length(void) { return mgos_config_get_default_rpc_max_queue_length(); }
void mgos_config_set_rpc_max_queue_length(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_max_queue_length(int v) { mgos_config_set_rpc_max_queue_length(&mgos_sys_config, v); }

/* rpc.default_out_channel_idle_close_timeout */
#define MGOS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_RPC_DEFAULT_OUT_CHANNEL_IDLE_CLOSE_TIMEOUT
int mgos_config_get_rpc_default_out_channel_idle_close_timeout(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(void);
static inline int mgos_sys_config_get_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_default_out_channel_idle_close_timeout(void) { return mgos_config_get_default_rpc_default_out_channel_idle_close_timeout(); }
void mgos_config_set_rpc_default_out_channel_idle_close_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_default_out_channel_idle_close_timeout(int v) { mgos_config_set_rpc_default_out_channel_idle_close_timeout(&mgos_sys_config, v); }

/* rpc.acl_file */
#define MGOS_CONFIG_HAVE_RPC_ACL_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_ACL_FILE
const char * mgos_config_get_rpc_acl_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_acl_file(void);
static inline const char * mgos_sys_config_get_rpc_acl_file(void) { return mgos_config_get_rpc_acl_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_acl_file(void) { return mgos_config_get_default_rpc_acl_file(); }
void mgos_config_set_rpc_acl_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_acl_file(const char * v) { mgos_config_set_rpc_acl_file(&mgos_sys_config, v); }

/* rpc.auth_domain */
#define MGOS_CONFIG_HAVE_RPC_AUTH_DOMAIN
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_DOMAIN
const char * mgos_config_get_rpc_auth_domain(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_auth_domain(void);
static inline const char * mgos_sys_config_get_rpc_auth_domain(void) { return mgos_config_get_rpc_auth_domain(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_auth_domain(void) { return mgos_config_get_default_rpc_auth_domain(); }
void mgos_config_set_rpc_auth_domain(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_auth_domain(const char * v) { mgos_config_set_rpc_auth_domain(&mgos_sys_config, v); }

/* rpc.auth_file */
#define MGOS_CONFIG_HAVE_RPC_AUTH_FILE
#define MGOS_SYS_CONFIG_HAVE_RPC_AUTH_FILE
const char * mgos_config_get_rpc_auth_file(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_auth_file(void);
static inline const char * mgos_sys_config_get_rpc_auth_file(void) { return mgos_config_get_rpc_auth_file(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_auth_file(void) { return mgos_config_get_default_rpc_auth_file(); }
void mgos_config_set_rpc_auth_file(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_auth_file(const char * v) { mgos_config_set_rpc_auth_file(&mgos_sys_config, v); }

/* rpc.mqtt */
#define MGOS_CONFIG_HAVE_RPC_MQTT
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT
const struct mgos_config_rpc_mqtt *mgos_config_get_rpc_mqtt(const struct mgos_config *cfg);
static inline const struct mgos_config_rpc_mqtt *mgos_sys_config_get_rpc_mqtt(void) { return mgos_config_get_rpc_mqtt(&mgos_sys_config); }

/* rpc.mqtt.enable */
#define MGOS_CONFIG_HAVE_RPC_MQTT_ENABLE
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_ENABLE
int mgos_config_get_rpc_mqtt_enable(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_mqtt_enable(void);
static inline int mgos_sys_config_get_rpc_mqtt_enable(void) { return mgos_config_get_rpc_mqtt_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_mqtt_enable(void) { return mgos_config_get_default_rpc_mqtt_enable(); }
void mgos_config_set_rpc_mqtt_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_mqtt_enable(int v) { mgos_config_set_rpc_mqtt_enable(&mgos_sys_config, v); }

/* rpc.mqtt.pub_topic */
#define MGOS_CONFIG_HAVE_RPC_MQTT_PUB_TOPIC
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_PUB_TOPIC
const char * mgos_config_get_rpc_mqtt_pub_topic(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_mqtt_pub_topic(void);
static inline const char * mgos_sys_config_get_rpc_mqtt_pub_topic(void) { return mgos_config_get_rpc_mqtt_pub_topic(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_mqtt_pub_topic(void) { return mgos_config_get_default_rpc_mqtt_pub_topic(); }
void mgos_config_set_rpc_mqtt_pub_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_mqtt_pub_topic(const char * v) { mgos_config_set_rpc_mqtt_pub_topic(&mgos_sys_config, v); }

/* rpc.mqtt.sub_topic */
#define MGOS_CONFIG_HAVE_RPC_MQTT_SUB_TOPIC
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_SUB_TOPIC
const char * mgos_config_get_rpc_mqtt_sub_topic(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_mqtt_sub_topic(void);
static inline const char * mgos_sys_config_get_rpc_mqtt_sub_topic(void) { return mgos_config_get_rpc_mqtt_sub_topic(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_mqtt_sub_topic(void) { return mgos_config_get_default_rpc_mqtt_sub_topic(); }
void mgos_config_set_rpc_mqtt_sub_topic(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_mqtt_sub_topic(const char * v) { mgos_config_set_rpc_mqtt_sub_topic(&mgos_sys_config, v); }

/* rpc.mqtt.sub_wc */
#define MGOS_CONFIG_HAVE_RPC_MQTT_SUB_WC
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_SUB_WC
int mgos_config_get_rpc_mqtt_sub_wc(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_mqtt_sub_wc(void);
static inline int mgos_sys_config_get_rpc_mqtt_sub_wc(void) { return mgos_config_get_rpc_mqtt_sub_wc(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_mqtt_sub_wc(void) { return mgos_config_get_default_rpc_mqtt_sub_wc(); }
void mgos_config_set_rpc_mqtt_sub_wc(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_mqtt_sub_wc(int v) { mgos_config_set_rpc_mqtt_sub_wc(&mgos_sys_config, v); }

/* rpc.mqtt.qos */
#define MGOS_CONFIG_HAVE_RPC_MQTT_QOS
#define MGOS_SYS_CONFIG_HAVE_RPC_MQTT_QOS
int mgos_config_get_rpc_mqtt_qos(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_mqtt_qos(void);
static inline int mgos_sys_config_get_rpc_mqtt_qos(void) { return mgos_config_get_rpc_mqtt_qos(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_mqtt_qos(void) { return mgos_config_get_default_rpc_mqtt_qos(); }
void mgos_config_set_rpc_mqtt_qos(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_mqtt_qos(int v) { mgos_config_set_rpc_mqtt_qos(&mgos_sys_config, v); }

/* rpc.uart */
#define MGOS_CONFIG_HAVE_RPC_UART
#define MGOS_SYS_CONFIG_HAVE_RPC_UART
const struct mgos_config_rpc_uart *mgos_config_get_rpc_uart(const struct mgos_config *cfg);
static inline const struct mgos_config_rpc_uart *mgos_sys_config_get_rpc_uart(void) { return mgos_config_get_rpc_uart(&mgos_sys_config); }

/* rpc.uart.uart_no */
#define MGOS_CONFIG_HAVE_RPC_UART_UART_NO
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_UART_NO
int mgos_config_get_rpc_uart_uart_no(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_uart_no(void);
static inline int mgos_sys_config_get_rpc_uart_uart_no(void) { return mgos_config_get_rpc_uart_uart_no(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_uart_no(void) { return mgos_config_get_default_rpc_uart_uart_no(); }
void mgos_config_set_rpc_uart_uart_no(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_uart_no(int v) { mgos_config_set_rpc_uart_uart_no(&mgos_sys_config, v); }

/* rpc.uart.baud_rate */
#define MGOS_CONFIG_HAVE_RPC_UART_BAUD_RATE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_BAUD_RATE
int mgos_config_get_rpc_uart_baud_rate(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_baud_rate(void);
static inline int mgos_sys_config_get_rpc_uart_baud_rate(void) { return mgos_config_get_rpc_uart_baud_rate(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_baud_rate(void) { return mgos_config_get_default_rpc_uart_baud_rate(); }
void mgos_config_set_rpc_uart_baud_rate(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_baud_rate(int v) { mgos_config_set_rpc_uart_baud_rate(&mgos_sys_config, v); }

/* rpc.uart.fc_type */
#define MGOS_CONFIG_HAVE_RPC_UART_FC_TYPE
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_FC_TYPE
int mgos_config_get_rpc_uart_fc_type(const struct mgos_config *cfg);
int mgos_config_get_default_rpc_uart_fc_type(void);
static inline int mgos_sys_config_get_rpc_uart_fc_type(void) { return mgos_config_get_rpc_uart_fc_type(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_rpc_uart_fc_type(void) { return mgos_config_get_default_rpc_uart_fc_type(); }
void mgos_config_set_rpc_uart_fc_type(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_rpc_uart_fc_type(int v) { mgos_config_set_rpc_uart_fc_type(&mgos_sys_config, v); }

/* rpc.uart.dst */
#define MGOS_CONFIG_HAVE_RPC_UART_DST
#define MGOS_SYS_CONFIG_HAVE_RPC_UART_DST
const char * mgos_config_get_rpc_uart_dst(const struct mgos_config *cfg);
const char * mgos_config_get_default_rpc_uart_dst(void);
static inline const char * mgos_sys_config_get_rpc_uart_dst(void) { return mgos_config_get_rpc_uart_dst(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_rpc_uart_dst(void) { return mgos_config_get_default_rpc_uart_dst(); }
void mgos_config_set_rpc_uart_dst(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_rpc_uart_dst(const char * v) { mgos_config_set_rpc_uart_dst(&mgos_sys_config, v); }

/* wifi */
#define MGOS_CONFIG_HAVE_WIFI
#define MGOS_SYS_CONFIG_HAVE_WIFI
const struct mgos_config_wifi *mgos_config_get_wifi(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi *mgos_sys_config_get_wifi(void) { return mgos_config_get_wifi(&mgos_sys_config); }

/* wifi.ap */
#define MGOS_CONFIG_HAVE_WIFI_AP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP
const struct mgos_config_wifi_ap *mgos_config_get_wifi_ap(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_ap *mgos_sys_config_get_wifi_ap(void) { return mgos_config_get_wifi_ap(&mgos_sys_config); }

/* wifi.ap.enable */
#define MGOS_CONFIG_HAVE_WIFI_AP_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_ENABLE
int mgos_config_get_wifi_ap_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_enable(void);
static inline int mgos_sys_config_get_wifi_ap_enable(void) { return mgos_config_get_wifi_ap_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_enable(void) { return mgos_config_get_default_wifi_ap_enable(); }
void mgos_config_set_wifi_ap_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_enable(int v) { mgos_config_set_wifi_ap_enable(&mgos_sys_config, v); }

/* wifi.ap.ssid */
#define MGOS_CONFIG_HAVE_WIFI_AP_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_SSID
const char * mgos_config_get_wifi_ap_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_ssid(void);
static inline const char * mgos_sys_config_get_wifi_ap_ssid(void) { return mgos_config_get_wifi_ap_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_ssid(void) { return mgos_config_get_default_wifi_ap_ssid(); }
void mgos_config_set_wifi_ap_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_ssid(const char * v) { mgos_config_set_wifi_ap_ssid(&mgos_sys_config, v); }

/* wifi.ap.pass */
#define MGOS_CONFIG_HAVE_WIFI_AP_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_PASS
const char * mgos_config_get_wifi_ap_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_pass(void);
static inline const char * mgos_sys_config_get_wifi_ap_pass(void) { return mgos_config_get_wifi_ap_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_pass(void) { return mgos_config_get_default_wifi_ap_pass(); }
void mgos_config_set_wifi_ap_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_pass(const char * v) { mgos_config_set_wifi_ap_pass(&mgos_sys_config, v); }

/* wifi.ap.hidden */
#define MGOS_CONFIG_HAVE_WIFI_AP_HIDDEN
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HIDDEN
int mgos_config_get_wifi_ap_hidden(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_hidden(void);
static inline int mgos_sys_config_get_wifi_ap_hidden(void) { return mgos_config_get_wifi_ap_hidden(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_hidden(void) { return mgos_config_get_default_wifi_ap_hidden(); }
void mgos_config_set_wifi_ap_hidden(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_hidden(int v) { mgos_config_set_wifi_ap_hidden(&mgos_sys_config, v); }

/* wifi.ap.channel */
#define MGOS_CONFIG_HAVE_WIFI_AP_CHANNEL
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_CHANNEL
int mgos_config_get_wifi_ap_channel(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_channel(void);
static inline int mgos_sys_config_get_wifi_ap_channel(void) { return mgos_config_get_wifi_ap_channel(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_channel(void) { return mgos_config_get_default_wifi_ap_channel(); }
void mgos_config_set_wifi_ap_channel(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_channel(int v) { mgos_config_set_wifi_ap_channel(&mgos_sys_config, v); }

/* wifi.ap.max_connections */
#define MGOS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_MAX_CONNECTIONS
int mgos_config_get_wifi_ap_max_connections(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_max_connections(void);
static inline int mgos_sys_config_get_wifi_ap_max_connections(void) { return mgos_config_get_wifi_ap_max_connections(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_max_connections(void) { return mgos_config_get_default_wifi_ap_max_connections(); }
void mgos_config_set_wifi_ap_max_connections(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_max_connections(int v) { mgos_config_set_wifi_ap_max_connections(&mgos_sys_config, v); }

/* wifi.ap.ip */
#define MGOS_CONFIG_HAVE_WIFI_AP_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_IP
const char * mgos_config_get_wifi_ap_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_ip(void);
static inline const char * mgos_sys_config_get_wifi_ap_ip(void) { return mgos_config_get_wifi_ap_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_ip(void) { return mgos_config_get_default_wifi_ap_ip(); }
void mgos_config_set_wifi_ap_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_ip(const char * v) { mgos_config_set_wifi_ap_ip(&mgos_sys_config, v); }

/* wifi.ap.netmask */
#define MGOS_CONFIG_HAVE_WIFI_AP_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_NETMASK
const char * mgos_config_get_wifi_ap_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_netmask(void);
static inline const char * mgos_sys_config_get_wifi_ap_netmask(void) { return mgos_config_get_wifi_ap_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_netmask(void) { return mgos_config_get_default_wifi_ap_netmask(); }
void mgos_config_set_wifi_ap_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_netmask(const char * v) { mgos_config_set_wifi_ap_netmask(&mgos_sys_config, v); }

/* wifi.ap.gw */
#define MGOS_CONFIG_HAVE_WIFI_AP_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_GW
const char * mgos_config_get_wifi_ap_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_gw(void);
static inline const char * mgos_sys_config_get_wifi_ap_gw(void) { return mgos_config_get_wifi_ap_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_gw(void) { return mgos_config_get_default_wifi_ap_gw(); }
void mgos_config_set_wifi_ap_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_gw(const char * v) { mgos_config_set_wifi_ap_gw(&mgos_sys_config, v); }

/* wifi.ap.dhcp_start */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_START
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_START
const char * mgos_config_get_wifi_ap_dhcp_start(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_dhcp_start(void);
static inline const char * mgos_sys_config_get_wifi_ap_dhcp_start(void) { return mgos_config_get_wifi_ap_dhcp_start(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_dhcp_start(void) { return mgos_config_get_default_wifi_ap_dhcp_start(); }
void mgos_config_set_wifi_ap_dhcp_start(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_dhcp_start(const char * v) { mgos_config_set_wifi_ap_dhcp_start(&mgos_sys_config, v); }

/* wifi.ap.dhcp_end */
#define MGOS_CONFIG_HAVE_WIFI_AP_DHCP_END
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DHCP_END
const char * mgos_config_get_wifi_ap_dhcp_end(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_dhcp_end(void);
static inline const char * mgos_sys_config_get_wifi_ap_dhcp_end(void) { return mgos_config_get_wifi_ap_dhcp_end(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_dhcp_end(void) { return mgos_config_get_default_wifi_ap_dhcp_end(); }
void mgos_config_set_wifi_ap_dhcp_end(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_dhcp_end(const char * v) { mgos_config_set_wifi_ap_dhcp_end(&mgos_sys_config, v); }

/* wifi.ap.trigger_on_gpio */
#define MGOS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_TRIGGER_ON_GPIO
int mgos_config_get_wifi_ap_trigger_on_gpio(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_trigger_on_gpio(void);
static inline int mgos_sys_config_get_wifi_ap_trigger_on_gpio(void) { return mgos_config_get_wifi_ap_trigger_on_gpio(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_trigger_on_gpio(void) { return mgos_config_get_default_wifi_ap_trigger_on_gpio(); }
void mgos_config_set_wifi_ap_trigger_on_gpio(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_trigger_on_gpio(int v) { mgos_config_set_wifi_ap_trigger_on_gpio(&mgos_sys_config, v); }

/* wifi.ap.disable_after */
#define MGOS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_DISABLE_AFTER
int mgos_config_get_wifi_ap_disable_after(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_disable_after(void);
static inline int mgos_sys_config_get_wifi_ap_disable_after(void) { return mgos_config_get_wifi_ap_disable_after(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_disable_after(void) { return mgos_config_get_default_wifi_ap_disable_after(); }
void mgos_config_set_wifi_ap_disable_after(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_disable_after(int v) { mgos_config_set_wifi_ap_disable_after(&mgos_sys_config, v); }

/* wifi.ap.hostname */
#define MGOS_CONFIG_HAVE_WIFI_AP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_HOSTNAME
const char * mgos_config_get_wifi_ap_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_ap_hostname(void);
static inline const char * mgos_sys_config_get_wifi_ap_hostname(void) { return mgos_config_get_wifi_ap_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_ap_hostname(void) { return mgos_config_get_default_wifi_ap_hostname(); }
void mgos_config_set_wifi_ap_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_ap_hostname(const char * v) { mgos_config_set_wifi_ap_hostname(&mgos_sys_config, v); }

/* wifi.ap.keep_enabled */
#define MGOS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
#define MGOS_SYS_CONFIG_HAVE_WIFI_AP_KEEP_ENABLED
int mgos_config_get_wifi_ap_keep_enabled(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_ap_keep_enabled(void);
static inline int mgos_sys_config_get_wifi_ap_keep_enabled(void) { return mgos_config_get_wifi_ap_keep_enabled(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_ap_keep_enabled(void) { return mgos_config_get_default_wifi_ap_keep_enabled(); }
void mgos_config_set_wifi_ap_keep_enabled(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_ap_keep_enabled(int v) { mgos_config_set_wifi_ap_keep_enabled(&mgos_sys_config, v); }

/* wifi.sta */
#define MGOS_CONFIG_HAVE_WIFI_STA
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta(void) { return mgos_config_get_wifi_sta(&mgos_sys_config); }

/* wifi.sta.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ENABLE
int mgos_config_get_wifi_sta_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_enable(void);
static inline int mgos_sys_config_get_wifi_sta_enable(void) { return mgos_config_get_wifi_sta_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_enable(void) { return mgos_config_get_default_wifi_sta_enable(); }
void mgos_config_set_wifi_sta_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_enable(int v) { mgos_config_set_wifi_sta_enable(&mgos_sys_config, v); }

/* wifi.sta.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_SSID
const char * mgos_config_get_wifi_sta_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_ssid(void);
static inline const char * mgos_sys_config_get_wifi_sta_ssid(void) { return mgos_config_get_wifi_sta_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_ssid(void) { return mgos_config_get_default_wifi_sta_ssid(); }
void mgos_config_set_wifi_sta_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ssid(const char * v) { mgos_config_set_wifi_sta_ssid(&mgos_sys_config, v); }

/* wifi.sta.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_PASS
const char * mgos_config_get_wifi_sta_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_pass(void);
static inline const char * mgos_sys_config_get_wifi_sta_pass(void) { return mgos_config_get_wifi_sta_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_pass(void) { return mgos_config_get_default_wifi_sta_pass(); }
void mgos_config_set_wifi_sta_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_pass(const char * v) { mgos_config_set_wifi_sta_pass(&mgos_sys_config, v); }

/* wifi.sta.user */
#define MGOS_CONFIG_HAVE_WIFI_STA_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_USER
const char * mgos_config_get_wifi_sta_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_user(void);
static inline const char * mgos_sys_config_get_wifi_sta_user(void) { return mgos_config_get_wifi_sta_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_user(void) { return mgos_config_get_default_wifi_sta_user(); }
void mgos_config_set_wifi_sta_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_user(const char * v) { mgos_config_set_wifi_sta_user(&mgos_sys_config, v); }

/* wifi.sta.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ANON_IDENTITY
const char * mgos_config_get_wifi_sta_anon_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_anon_identity(void);
static inline const char * mgos_sys_config_get_wifi_sta_anon_identity(void) { return mgos_config_get_wifi_sta_anon_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_anon_identity(void) { return mgos_config_get_default_wifi_sta_anon_identity(); }
void mgos_config_set_wifi_sta_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_anon_identity(const char * v) { mgos_config_set_wifi_sta_anon_identity(&mgos_sys_config, v); }

/* wifi.sta.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CERT
const char * mgos_config_get_wifi_sta_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta_cert(void) { return mgos_config_get_wifi_sta_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_cert(void) { return mgos_config_get_default_wifi_sta_cert(); }
void mgos_config_set_wifi_sta_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_cert(const char * v) { mgos_config_set_wifi_sta_cert(&mgos_sys_config, v); }

/* wifi.sta.key */
#define MGOS_CONFIG_HAVE_WIFI_STA_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_KEY
const char * mgos_config_get_wifi_sta_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_key(void);
static inline const char * mgos_sys_config_get_wifi_sta_key(void) { return mgos_config_get_wifi_sta_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_key(void) { return mgos_config_get_default_wifi_sta_key(); }
void mgos_config_set_wifi_sta_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_key(const char * v) { mgos_config_set_wifi_sta_key(&mgos_sys_config, v); }

/* wifi.sta.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CA_CERT
const char * mgos_config_get_wifi_sta_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_ca_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta_ca_cert(void) { return mgos_config_get_wifi_sta_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_ca_cert(void) { return mgos_config_get_default_wifi_sta_ca_cert(); }
void mgos_config_set_wifi_sta_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ca_cert(const char * v) { mgos_config_set_wifi_sta_ca_cert(&mgos_sys_config, v); }

/* wifi.sta.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_IP
const char * mgos_config_get_wifi_sta_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_ip(void);
static inline const char * mgos_sys_config_get_wifi_sta_ip(void) { return mgos_config_get_wifi_sta_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_ip(void) { return mgos_config_get_default_wifi_sta_ip(); }
void mgos_config_set_wifi_sta_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_ip(const char * v) { mgos_config_set_wifi_sta_ip(&mgos_sys_config, v); }

/* wifi.sta.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NETMASK
const char * mgos_config_get_wifi_sta_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_netmask(void);
static inline const char * mgos_sys_config_get_wifi_sta_netmask(void) { return mgos_config_get_wifi_sta_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_netmask(void) { return mgos_config_get_default_wifi_sta_netmask(); }
void mgos_config_set_wifi_sta_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_netmask(const char * v) { mgos_config_set_wifi_sta_netmask(&mgos_sys_config, v); }

/* wifi.sta.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_GW
const char * mgos_config_get_wifi_sta_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_gw(void);
static inline const char * mgos_sys_config_get_wifi_sta_gw(void) { return mgos_config_get_wifi_sta_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_gw(void) { return mgos_config_get_default_wifi_sta_gw(); }
void mgos_config_set_wifi_sta_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_gw(const char * v) { mgos_config_set_wifi_sta_gw(&mgos_sys_config, v); }

/* wifi.sta.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_NAMESERVER
const char * mgos_config_get_wifi_sta_nameserver(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_nameserver(void);
static inline const char * mgos_sys_config_get_wifi_sta_nameserver(void) { return mgos_config_get_wifi_sta_nameserver(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_nameserver(void) { return mgos_config_get_default_wifi_sta_nameserver(); }
void mgos_config_set_wifi_sta_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_nameserver(const char * v) { mgos_config_set_wifi_sta_nameserver(&mgos_sys_config, v); }

/* wifi.sta.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta_dhcp_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta_dhcp_hostname(void);
static inline const char * mgos_sys_config_get_wifi_sta_dhcp_hostname(void) { return mgos_config_get_wifi_sta_dhcp_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta_dhcp_hostname(void) { return mgos_config_get_default_wifi_sta_dhcp_hostname(); }
void mgos_config_set_wifi_sta_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta1 */
#define MGOS_CONFIG_HAVE_WIFI_STA1
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta1(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta1(void) { return mgos_config_get_wifi_sta1(&mgos_sys_config); }

/* wifi.sta1.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ENABLE
int mgos_config_get_wifi_sta1_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta1_enable(void);
static inline int mgos_sys_config_get_wifi_sta1_enable(void) { return mgos_config_get_wifi_sta1_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta1_enable(void) { return mgos_config_get_default_wifi_sta1_enable(); }
void mgos_config_set_wifi_sta1_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta1_enable(int v) { mgos_config_set_wifi_sta1_enable(&mgos_sys_config, v); }

/* wifi.sta1.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA1_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_SSID
const char * mgos_config_get_wifi_sta1_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_ssid(void);
static inline const char * mgos_sys_config_get_wifi_sta1_ssid(void) { return mgos_config_get_wifi_sta1_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_ssid(void) { return mgos_config_get_default_wifi_sta1_ssid(); }
void mgos_config_set_wifi_sta1_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ssid(const char * v) { mgos_config_set_wifi_sta1_ssid(&mgos_sys_config, v); }

/* wifi.sta1.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA1_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_PASS
const char * mgos_config_get_wifi_sta1_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_pass(void);
static inline const char * mgos_sys_config_get_wifi_sta1_pass(void) { return mgos_config_get_wifi_sta1_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_pass(void) { return mgos_config_get_default_wifi_sta1_pass(); }
void mgos_config_set_wifi_sta1_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_pass(const char * v) { mgos_config_set_wifi_sta1_pass(&mgos_sys_config, v); }

/* wifi.sta1.user */
#define MGOS_CONFIG_HAVE_WIFI_STA1_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_USER
const char * mgos_config_get_wifi_sta1_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_user(void);
static inline const char * mgos_sys_config_get_wifi_sta1_user(void) { return mgos_config_get_wifi_sta1_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_user(void) { return mgos_config_get_default_wifi_sta1_user(); }
void mgos_config_set_wifi_sta1_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_user(const char * v) { mgos_config_set_wifi_sta1_user(&mgos_sys_config, v); }

/* wifi.sta1.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_ANON_IDENTITY
const char * mgos_config_get_wifi_sta1_anon_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_anon_identity(void);
static inline const char * mgos_sys_config_get_wifi_sta1_anon_identity(void) { return mgos_config_get_wifi_sta1_anon_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_anon_identity(void) { return mgos_config_get_default_wifi_sta1_anon_identity(); }
void mgos_config_set_wifi_sta1_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_anon_identity(const char * v) { mgos_config_set_wifi_sta1_anon_identity(&mgos_sys_config, v); }

/* wifi.sta1.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CERT
const char * mgos_config_get_wifi_sta1_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta1_cert(void) { return mgos_config_get_wifi_sta1_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_cert(void) { return mgos_config_get_default_wifi_sta1_cert(); }
void mgos_config_set_wifi_sta1_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_cert(const char * v) { mgos_config_set_wifi_sta1_cert(&mgos_sys_config, v); }

/* wifi.sta1.key */
#define MGOS_CONFIG_HAVE_WIFI_STA1_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_KEY
const char * mgos_config_get_wifi_sta1_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_key(void);
static inline const char * mgos_sys_config_get_wifi_sta1_key(void) { return mgos_config_get_wifi_sta1_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_key(void) { return mgos_config_get_default_wifi_sta1_key(); }
void mgos_config_set_wifi_sta1_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_key(const char * v) { mgos_config_set_wifi_sta1_key(&mgos_sys_config, v); }

/* wifi.sta1.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA1_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_CA_CERT
const char * mgos_config_get_wifi_sta1_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_ca_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta1_ca_cert(void) { return mgos_config_get_wifi_sta1_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_ca_cert(void) { return mgos_config_get_default_wifi_sta1_ca_cert(); }
void mgos_config_set_wifi_sta1_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ca_cert(const char * v) { mgos_config_set_wifi_sta1_ca_cert(&mgos_sys_config, v); }

/* wifi.sta1.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA1_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_IP
const char * mgos_config_get_wifi_sta1_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_ip(void);
static inline const char * mgos_sys_config_get_wifi_sta1_ip(void) { return mgos_config_get_wifi_sta1_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_ip(void) { return mgos_config_get_default_wifi_sta1_ip(); }
void mgos_config_set_wifi_sta1_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_ip(const char * v) { mgos_config_set_wifi_sta1_ip(&mgos_sys_config, v); }

/* wifi.sta1.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NETMASK
const char * mgos_config_get_wifi_sta1_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_netmask(void);
static inline const char * mgos_sys_config_get_wifi_sta1_netmask(void) { return mgos_config_get_wifi_sta1_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_netmask(void) { return mgos_config_get_default_wifi_sta1_netmask(); }
void mgos_config_set_wifi_sta1_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_netmask(const char * v) { mgos_config_set_wifi_sta1_netmask(&mgos_sys_config, v); }

/* wifi.sta1.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA1_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_GW
const char * mgos_config_get_wifi_sta1_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_gw(void);
static inline const char * mgos_sys_config_get_wifi_sta1_gw(void) { return mgos_config_get_wifi_sta1_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_gw(void) { return mgos_config_get_default_wifi_sta1_gw(); }
void mgos_config_set_wifi_sta1_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_gw(const char * v) { mgos_config_set_wifi_sta1_gw(&mgos_sys_config, v); }

/* wifi.sta1.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_NAMESERVER
const char * mgos_config_get_wifi_sta1_nameserver(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_nameserver(void);
static inline const char * mgos_sys_config_get_wifi_sta1_nameserver(void) { return mgos_config_get_wifi_sta1_nameserver(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_nameserver(void) { return mgos_config_get_default_wifi_sta1_nameserver(); }
void mgos_config_set_wifi_sta1_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_nameserver(const char * v) { mgos_config_set_wifi_sta1_nameserver(&mgos_sys_config, v); }

/* wifi.sta1.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA1_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta1_dhcp_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta1_dhcp_hostname(void);
static inline const char * mgos_sys_config_get_wifi_sta1_dhcp_hostname(void) { return mgos_config_get_wifi_sta1_dhcp_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta1_dhcp_hostname(void) { return mgos_config_get_default_wifi_sta1_dhcp_hostname(); }
void mgos_config_set_wifi_sta1_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta1_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta1_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta2 */
#define MGOS_CONFIG_HAVE_WIFI_STA2
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2
const struct mgos_config_wifi_sta *mgos_config_get_wifi_sta2(const struct mgos_config *cfg);
static inline const struct mgos_config_wifi_sta *mgos_sys_config_get_wifi_sta2(void) { return mgos_config_get_wifi_sta2(&mgos_sys_config); }

/* wifi.sta2.enable */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ENABLE
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ENABLE
int mgos_config_get_wifi_sta2_enable(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta2_enable(void);
static inline int mgos_sys_config_get_wifi_sta2_enable(void) { return mgos_config_get_wifi_sta2_enable(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta2_enable(void) { return mgos_config_get_default_wifi_sta2_enable(); }
void mgos_config_set_wifi_sta2_enable(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta2_enable(int v) { mgos_config_set_wifi_sta2_enable(&mgos_sys_config, v); }

/* wifi.sta2.ssid */
#define MGOS_CONFIG_HAVE_WIFI_STA2_SSID
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_SSID
const char * mgos_config_get_wifi_sta2_ssid(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_ssid(void);
static inline const char * mgos_sys_config_get_wifi_sta2_ssid(void) { return mgos_config_get_wifi_sta2_ssid(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_ssid(void) { return mgos_config_get_default_wifi_sta2_ssid(); }
void mgos_config_set_wifi_sta2_ssid(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ssid(const char * v) { mgos_config_set_wifi_sta2_ssid(&mgos_sys_config, v); }

/* wifi.sta2.pass */
#define MGOS_CONFIG_HAVE_WIFI_STA2_PASS
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_PASS
const char * mgos_config_get_wifi_sta2_pass(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_pass(void);
static inline const char * mgos_sys_config_get_wifi_sta2_pass(void) { return mgos_config_get_wifi_sta2_pass(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_pass(void) { return mgos_config_get_default_wifi_sta2_pass(); }
void mgos_config_set_wifi_sta2_pass(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_pass(const char * v) { mgos_config_set_wifi_sta2_pass(&mgos_sys_config, v); }

/* wifi.sta2.user */
#define MGOS_CONFIG_HAVE_WIFI_STA2_USER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_USER
const char * mgos_config_get_wifi_sta2_user(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_user(void);
static inline const char * mgos_sys_config_get_wifi_sta2_user(void) { return mgos_config_get_wifi_sta2_user(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_user(void) { return mgos_config_get_default_wifi_sta2_user(); }
void mgos_config_set_wifi_sta2_user(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_user(const char * v) { mgos_config_set_wifi_sta2_user(&mgos_sys_config, v); }

/* wifi.sta2.anon_identity */
#define MGOS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_ANON_IDENTITY
const char * mgos_config_get_wifi_sta2_anon_identity(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_anon_identity(void);
static inline const char * mgos_sys_config_get_wifi_sta2_anon_identity(void) { return mgos_config_get_wifi_sta2_anon_identity(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_anon_identity(void) { return mgos_config_get_default_wifi_sta2_anon_identity(); }
void mgos_config_set_wifi_sta2_anon_identity(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_anon_identity(const char * v) { mgos_config_set_wifi_sta2_anon_identity(&mgos_sys_config, v); }

/* wifi.sta2.cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CERT
const char * mgos_config_get_wifi_sta2_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta2_cert(void) { return mgos_config_get_wifi_sta2_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_cert(void) { return mgos_config_get_default_wifi_sta2_cert(); }
void mgos_config_set_wifi_sta2_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_cert(const char * v) { mgos_config_set_wifi_sta2_cert(&mgos_sys_config, v); }

/* wifi.sta2.key */
#define MGOS_CONFIG_HAVE_WIFI_STA2_KEY
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_KEY
const char * mgos_config_get_wifi_sta2_key(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_key(void);
static inline const char * mgos_sys_config_get_wifi_sta2_key(void) { return mgos_config_get_wifi_sta2_key(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_key(void) { return mgos_config_get_default_wifi_sta2_key(); }
void mgos_config_set_wifi_sta2_key(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_key(const char * v) { mgos_config_set_wifi_sta2_key(&mgos_sys_config, v); }

/* wifi.sta2.ca_cert */
#define MGOS_CONFIG_HAVE_WIFI_STA2_CA_CERT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_CA_CERT
const char * mgos_config_get_wifi_sta2_ca_cert(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_ca_cert(void);
static inline const char * mgos_sys_config_get_wifi_sta2_ca_cert(void) { return mgos_config_get_wifi_sta2_ca_cert(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_ca_cert(void) { return mgos_config_get_default_wifi_sta2_ca_cert(); }
void mgos_config_set_wifi_sta2_ca_cert(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ca_cert(const char * v) { mgos_config_set_wifi_sta2_ca_cert(&mgos_sys_config, v); }

/* wifi.sta2.ip */
#define MGOS_CONFIG_HAVE_WIFI_STA2_IP
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_IP
const char * mgos_config_get_wifi_sta2_ip(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_ip(void);
static inline const char * mgos_sys_config_get_wifi_sta2_ip(void) { return mgos_config_get_wifi_sta2_ip(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_ip(void) { return mgos_config_get_default_wifi_sta2_ip(); }
void mgos_config_set_wifi_sta2_ip(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_ip(const char * v) { mgos_config_set_wifi_sta2_ip(&mgos_sys_config, v); }

/* wifi.sta2.netmask */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NETMASK
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NETMASK
const char * mgos_config_get_wifi_sta2_netmask(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_netmask(void);
static inline const char * mgos_sys_config_get_wifi_sta2_netmask(void) { return mgos_config_get_wifi_sta2_netmask(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_netmask(void) { return mgos_config_get_default_wifi_sta2_netmask(); }
void mgos_config_set_wifi_sta2_netmask(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_netmask(const char * v) { mgos_config_set_wifi_sta2_netmask(&mgos_sys_config, v); }

/* wifi.sta2.gw */
#define MGOS_CONFIG_HAVE_WIFI_STA2_GW
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_GW
const char * mgos_config_get_wifi_sta2_gw(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_gw(void);
static inline const char * mgos_sys_config_get_wifi_sta2_gw(void) { return mgos_config_get_wifi_sta2_gw(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_gw(void) { return mgos_config_get_default_wifi_sta2_gw(); }
void mgos_config_set_wifi_sta2_gw(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_gw(const char * v) { mgos_config_set_wifi_sta2_gw(&mgos_sys_config, v); }

/* wifi.sta2.nameserver */
#define MGOS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_NAMESERVER
const char * mgos_config_get_wifi_sta2_nameserver(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_nameserver(void);
static inline const char * mgos_sys_config_get_wifi_sta2_nameserver(void) { return mgos_config_get_wifi_sta2_nameserver(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_nameserver(void) { return mgos_config_get_default_wifi_sta2_nameserver(); }
void mgos_config_set_wifi_sta2_nameserver(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_nameserver(const char * v) { mgos_config_set_wifi_sta2_nameserver(&mgos_sys_config, v); }

/* wifi.sta2.dhcp_hostname */
#define MGOS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA2_DHCP_HOSTNAME
const char * mgos_config_get_wifi_sta2_dhcp_hostname(const struct mgos_config *cfg);
const char * mgos_config_get_default_wifi_sta2_dhcp_hostname(void);
static inline const char * mgos_sys_config_get_wifi_sta2_dhcp_hostname(void) { return mgos_config_get_wifi_sta2_dhcp_hostname(&mgos_sys_config); }
static inline const char * mgos_sys_config_get_default_wifi_sta2_dhcp_hostname(void) { return mgos_config_get_default_wifi_sta2_dhcp_hostname(); }
void mgos_config_set_wifi_sta2_dhcp_hostname(struct mgos_config *cfg, const char * v);
static inline void mgos_sys_config_set_wifi_sta2_dhcp_hostname(const char * v) { mgos_config_set_wifi_sta2_dhcp_hostname(&mgos_sys_config, v); }

/* wifi.sta_cfg_idx */
#define MGOS_CONFIG_HAVE_WIFI_STA_CFG_IDX
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CFG_IDX
int mgos_config_get_wifi_sta_cfg_idx(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_cfg_idx(void);
static inline int mgos_sys_config_get_wifi_sta_cfg_idx(void) { return mgos_config_get_wifi_sta_cfg_idx(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_cfg_idx(void) { return mgos_config_get_default_wifi_sta_cfg_idx(); }
void mgos_config_set_wifi_sta_cfg_idx(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_cfg_idx(int v) { mgos_config_set_wifi_sta_cfg_idx(&mgos_sys_config, v); }

/* wifi.sta_connect_timeout */
#define MGOS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_CONNECT_TIMEOUT
int mgos_config_get_wifi_sta_connect_timeout(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_connect_timeout(void);
static inline int mgos_sys_config_get_wifi_sta_connect_timeout(void) { return mgos_config_get_wifi_sta_connect_timeout(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_connect_timeout(void) { return mgos_config_get_default_wifi_sta_connect_timeout(); }
void mgos_config_set_wifi_sta_connect_timeout(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_connect_timeout(int v) { mgos_config_set_wifi_sta_connect_timeout(&mgos_sys_config, v); }

/* wifi.sta_all_chan_scan */
#define MGOS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
#define MGOS_SYS_CONFIG_HAVE_WIFI_STA_ALL_CHAN_SCAN
int mgos_config_get_wifi_sta_all_chan_scan(const struct mgos_config *cfg);
int mgos_config_get_default_wifi_sta_all_chan_scan(void);
static inline int mgos_sys_config_get_wifi_sta_all_chan_scan(void) { return mgos_config_get_wifi_sta_all_chan_scan(&mgos_sys_config); }
static inline int mgos_sys_config_get_default_wifi_sta_all_chan_scan(void) { return mgos_config_get_default_wifi_sta_all_chan_scan(); }
void mgos_config_set_wifi_sta_all_chan_scan(struct mgos_config *cfg, int v);
static inline void mgos_sys_config_set_wifi_sta_all_chan_scan(int v) { mgos_config_set_wifi_sta_all_chan_scan(&mgos_sys_config, v); }

bool mgos_sys_config_get(const struct mg_str key, struct mg_str *value);
bool mgos_sys_config_set(const struct mg_str key, const struct mg_str value, bool free_strings);

bool mgos_config_is_default_str(const char *s);

/* Backward compatibility. */
const struct mgos_conf_entry *mgos_config_schema(void);

#ifdef __cplusplus
}
#endif
