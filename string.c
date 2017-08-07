#include "string.h"


unsigned int strlen(char *str)
{
  unsigned len=0;
  while(str[len])
    len++;
  return len;
}
