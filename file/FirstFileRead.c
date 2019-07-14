#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
   int ch, i;
   FILE * fp = fopen("data.txt", "rt");
   if(fp == NULL)
   {
     puts("file open fail");
     return -1;
   }

   for(i=0; i<3; i++)
   {
     ch = fgetc(fp);
     printf("%c\n", ch);
   }
  fclose(fp);
  return 0;
}
