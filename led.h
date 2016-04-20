#include <stdint.h>
#includ "rpi_peripherals.h"

#define LED_ACT_PIN   47
#define LED_PWR_PIN   35

#define LED_ACT_GPFSET  GPFSET4
#define LED_PWR_GPFSET  GPFSET3

void turn_led_on(uint32_t led);
void turn_led_off(uint32_t led);
