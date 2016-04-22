#include "postman.h"

uint32_t mailbox_read(uint32_t channel)
{
  // Verify the channel is valid
  if(!valid_channel(channel))
  {
    // TODO: Log error;
    return -1;
  }
  volatile uint32_t status = mem_read(MAILBOX_STATUS);
  volatile message = 0;
  while(1)
  {
    while(status & 0x4000000)
    {
     status  = mem_read(MAILBOX_STATUS);
    }
    message = mem_read(MAILBOX_READ);
    if(channel == (message & 0xf))
      return message >>= 4;
  }
  return -1;
}
uint32_t mailbox_write(uint32_t channel, uint32_t message);
{
  if(!valid_channel(channel))
  {
    // TODO: Log error;
    return -1;
  }
  // Verify the bottom 4 bits of the message are 0;
  if(!valid_message(message))
  {
    // TODO: Log error;
    return -1;
  }
  volatile uint32_t status = mem_read(MAILBOX_STATUS);
  // Keep checking MAILBOX_STATUS to see if the MAILBOX is empty
  while(status & 0x8000000)
  {
    uint32_t status = mem_read(MAILBOX_STATUS);
  }
  message |= channel;
  mem_write(MAILBOX_WRITE, message);
  
  return 0;
}

uint32_t valid_channel(uint32_t channel)
{
  if(!(channel < NUM_CHANNELS))
  { return 0 }
  else { return 1; }
}

uint32_t valid_message(message)
{
  // Verifies the bottom 4 bits of the message are empty;
  if(message & 0xf)
  { return 0 }
  else { return 1; }
}
