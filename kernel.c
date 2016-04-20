// Filename: kernel.c
// Author: Keith Strandell
//
// Description: This is a simple kernel that will periodically toggle the LEDs on and off.
//
// This is based on Alex Chadwick's Baking Pi: Operating Systems Development through the University of Cambridge
// (https://www.cl.cam.ac.uk/projects/raspberrypi/tutorials/os/)
#include <stdint.h>
#include "mem_access.h"
#include "led.h"

int main()
{
  while(1)
  {
    // Turn on LED_ACT
    turn_led_on(LED_ACT);
    // Turn off LED_PWR
    turn_led_off(LED_PWR);
    // Wait 2 seconds
    wait(2000000);
    // Turn off LED_ACT
    turn_led_off(LED_ACT);
    // Turn on LED_PWR
    turn_led_on(LED_PWR);
    // Wait 1 second
    wait(1000000);
  }
  return -1
}
