#include <stdio.h>
#include "mgos.h"
#include "mgos_mqtt.h"
int i = 0;
static void my_timer_cb(void *arg) {
  if (i == 26) i = 0;
  // char message[] = {'N', 'g', 'u', 'y' , 'e' , 'n', 'e', 't', 'D', 'o', 'H', 'e', 'l', 'l', 'o', '0'+i};
  char message[] = {'V', 'i', 'e', 't' , 'N' , 'a', 'm', 'V', 'o', 'D', 'i', 'c', 'h', 'A'+i, 'A'+i, 'A'+i};
  i++;
  mgos_mqtt_pub("/esp8266", message, 16, 1, 0);
  (void) arg;
}
enum mgos_app_init_result mgos_app_init(void) {
  mgos_set_timer(5000, MGOS_TIMER_REPEAT, my_timer_cb, NULL);
  return MGOS_APP_INIT_SUCCESS;
}
