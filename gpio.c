#include "gpio.h"

uint32_t gpio_set_function(uint32_t pin, uint32_t function)
{

}

uint32_t gpio_pin_enable(uint32_t pin)
{
  uint32_t* reg_gpset;
  uint32_t set_bit;
  
  if(pin >=0 && pin < 32){
    reg_gpset = (uint32_t*) GPSET0;
    set_bit = 31 - pin;
    }
  else if (pin >=32 && pin < 54){
    reg_gpset = (uint32_t*) GPSET1;
    set_bit = (pin-32);
    }
    
  *reg_gpset = (1 << set_bit);
}

uint32_t gpio_pin_disable(uint32_t pin)
{
  uint32_t* reg_gpclr;
  uint32_t clr_bit;
  
  if(pin >=0 && pin < 32){
    reg_gpclr = (uint32_t*) GPCLR0;
    clr_bit = 31 - pin;
    }
  else if (pin >=32 && pin < 54){
    reg_gpclr = (uint32_t*) GPCLR1;
    clr_bit = (pin-32);
    }
    
  *reg_gpclr = (1 << clr_bit);

  
}
