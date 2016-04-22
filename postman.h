#include <stdint.h>

#define MAILBOX_BASE        0x2000b880
#define MAILBOX_READ        MAILBOX_BASE
#define MAILBOX_POLL        0x2000b890
#define MAILBOX_SENDER      0x2000b894
#define MAILBOX_STATUS      0x2000b898
#define MAILBOX_CONFIG      0x2000b89C
#define MAILBOX_WRITE       0x2000b8a0

uint32_t mailbox_read(uint32_t channel);
uint32_t mailbox_write(uint32_t channel, uint32_t message);
