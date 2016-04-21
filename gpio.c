#include "gpio.h"

uint32_t gpio_set_function(uint32_t pin, uint32_t function)
{

}

uint32_t gpio_pin_enable(uint32_t pin)
{
  uint32_t* reg_gpset;
  
  if(pin >=0 && pin < 32){
    reg_gpset = (uint32_t*) GPSET0;
    bit = pin;
    }
  else if (pin >=32 && pin < 54){
    reg_gpset = (uint32_t*) GPSET1;bit = (pin-32);
    }
}

uint32_t gpio_pin_disable(uint32_t pin)
{
  uint32_t* reg_gpclr;
  uint32_t bit;
  
  if(pin >=0 && pin < 32){
    reg_gpclr = (uint32_t*) GPCLR0;
    bit = pin;
    }
  else if (pin >=32 && pin < 54){
    reg_gpclr = (uint32_t*) GPCLR1;
    bit = (pin-32);
    }

  
}
