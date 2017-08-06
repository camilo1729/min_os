
#include "io.h"

void kmain(void) {
  char gretting[]= "Hello world: This is a longer message";
  fb_write(gretting);
  fb_move_cursor(0x0150);
}
