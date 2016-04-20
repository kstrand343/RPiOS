#include <stdint.h>
#include "mem_access.h"

#define SYS_TIMER		      0x20003000UL

#define SYS_TIMER_CS		  SYS_TIMER
#define SYS_TIMER_CLO		  0x20003004UL
#define SYS_TIMER_CHI		  0x20003008UL
#define SYS_TIMER_C0		  0x2000300CUL
#define SYS_TIMER_C1		  0x20003010UL
#define SYS_TIMER_C2		  0x20003014UL
#define SYS_TIMER_C3		  0x20003018UL

void wait(uint32_t duration)
{
  volatile uint32_t check = mem_read(SYS_TIMER_CLO) + duration;
  while(mem_read(SYS_TIMER_CLO) < check);
}
