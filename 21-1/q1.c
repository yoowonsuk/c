#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
  int ch;

  ch = getchar();
  if('A' <= ch && ch <= 'Z')
    putchar(ch + 'a'-'A');
  else
    putchar(ch - 'a' + 'A');
  printf("\n");
  return 0;
}
