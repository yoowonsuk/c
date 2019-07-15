#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
   FILE * des = fopen("mystory.txt", "wt");

   if(des == NULL)
   {
     puts("file open fail");
     return -1;
   }

   fputs("#Name: Yoo\n", des);
   fputs("#perID: 94\n", des);
   fputs("#number: 010\n", des);

   fclose(des);
   return 0;
}
