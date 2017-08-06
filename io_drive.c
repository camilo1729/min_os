#include "io.h"

#define FB_COMMAND_PORT     0x3D4
#define FB_DATA_PORT        0x3D5


#define FB_HIGH_BYTE_COMMAND   14
#define FB_LOW_BYTE_COMMAND    15


char *fb = (char *) 0x000B8000;


void fb_write_cell(unsigned int i, char c, unsigned char fg,unsigned char bg)
{
  //  x & 0x0F ensures the 4 high bits are 0
  fb[i]=c;
  fb[i+1] = ((fg& 0x0F) << 4) | (bg & 0x0F);
}



void fb_move_cursor(unsigned short pos)
{

  outb(FB_COMMAND_PORT, FB_HIGH_BYTE_COMMAND);
  outb(FB_DATA_PORT, ((pos >> 8) & 0x00FF));
  outb(FB_COMMAND_PORT, FB_LOW_BYTE_COMMAND);
  outb(FB_DATA_PORT,pos & 0x00FF);
}
