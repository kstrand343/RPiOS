#define GPIO_BASE         0x20200000UL

#define GPFSEL0           GPIO_BASE
#define GPFSEL1           0x20200004UL
#define GPFSEL2           0x20200008UL
#define GPFSEL3           0x2020000CUL
#define GPFSEL4           0x20200010UL
#define GPFSEL5           0x20200014UL

#define GPFSET0           0x2020001CUL
#define GPFSET1           0x20200020UL

#define GPFCLR0           0x20200028UL
#define GPFCLR1           0x2020002CUL

#define SYS_TIMER		      0x20003000UL

#define SYS_TIMER_CS		  SYS_TIMER
#define SYS_TIMER_CLO		  0x20003004UL
#define SYS_TIMER_CHI		  0x20003008UL
#define SYS_TIMER_C0		  0x2000300CUL
#define SYS_TIMER_C1		  0x20003010UL
#define SYS_TIMER_C2		  0x20003014UL
#define SYS_TIMER_C3		  0x20003018UL
