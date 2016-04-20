#include <stdint.h>
#includ "mem_access.h"
#include "rpi_peripherals.h"

void wait(uint32_t duration)
{
  volatile uint32_t check = mem_read(SYS_TIMER_CLO) + duration;
  while(mem_read(SYS_TIMER_CLO) < check);
}
