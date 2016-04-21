#include <stdint.h>

#define GPIO_BASE         0x20200000UL

#define GPFSEL0           GPIO_BASE
#define GPFSEL1           0x20200004UL
#define GPFSEL2           0x20200008UL
#define GPFSEL3           0x2020000CUL
#define GPFSEL4           0x20200010UL
#define GPFSEL5           0x20200014UL

#define GPSET0           0x2020001CUL
#define GPSET1           0x20200020UL

#define GPCLR0           0x20200028UL
#define GPCLR1           0x2020002CUL

uint32_t gpio_set_function(uint32_t pin, uint32_t function);
uint32_t gpio_pin_enable(uint32_t pin);
uint32_t gpio_pin_disable(uint32_t pin);
