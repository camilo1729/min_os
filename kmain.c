
#include "io.h"

void kmain(void) {
  fb_move_cursor(0x0150);
  fb_write_cell(0, 'H', 2, 8);
  //We have to write by two
  fb_write_cell(2, 'e', 2, 8);
}
