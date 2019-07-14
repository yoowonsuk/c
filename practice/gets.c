#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
   char str[10];
   str[9] = 'A';

   printf("%c\n", str[9]);
   gets(str);
   printf("%c\n", str[9]);
//   fputs(str, stdout);
//   gets(str);
   fputs(str, stdout);
   return 0;
}
