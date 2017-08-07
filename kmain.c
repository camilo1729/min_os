
#include "io.h"

void kmain(void) {
  char gretting[]= "Hello world: This is a longer message";
  initialize_console();
  fb_write(gretting);

}
