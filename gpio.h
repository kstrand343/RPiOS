#include <stdint.h>

#define GPIO_BASE         0x20200000UL

#define GPFSEL0           GPIO_BASE
#define GPFSEL1           0x20200004UL
#define GPFSEL2           0x20200008UL
#define GPFSEL3           0x2020000CUL
#define GPFSEL4           0x20200010UL
#define GPFSEL5           0x20200014UL

#define GPSET0            0x2020001CUL
#define GPSET1            0x20200020UL

#define GPCLR0            0x20200028UL
#define GPCLR1            0x2020002CUL

// 000 = GPIO Pin is an input
// 001 = GPIO Pin is an output
// 100 = GPIO Pin takes alternate function 0
// 101 = GPIO Pin takes alternate function 1
// 110 = GPIO Pin takes alternate function 2
// 111 = GPIO Pin takes alternate function 3
// 011 = GPIO Pin takes alternate function 4
// 010 = GPIO Pin takes alternate function 5
#define SET_PIN_INPUT     0b000
#define SET_PIN_OUTPUT    0b001
#define SET_PIN_ALT0      0b100
#define SET_PIN_ALT1      0b101
#define SET_PIN_ALT2      0b110
#define SET_PIN_ALT3      0b111
#define SET_PIN_ALT4      0b011
#define SET_PIN_ALT5      0b010

uint32_t gpio_set_function(uint32_t pin, uint32_t function);
uint32_t gpio_pin_enable(uint32_t pin);
uint32_t gpio_pin_disable(uint32_t pin);
