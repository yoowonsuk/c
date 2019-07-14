#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
   FILE * fp = fopen("data.txt", "wt");
   if(fp == NULL)
   {
     puts("file open fail");
     return -1;
   }

   fputc('A', fp);
   fputc('B', fp);
   fputc('C', fp);
   fclose(fp);
   return 0;
}
