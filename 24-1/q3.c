#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
   FILE * src = fopen("mystory.txt", "rt");
   char str[50];

   if(src == NULL)
   {
     puts("file open fail");
     return -1;
   }

   while(1)
   {
     if((fgets(str, sizeof(str), src)) == NULL)
       break;
     puts(str);
   }

   if(feof(src) != 0)
     puts("file print done");
   else
     puts("file print fail");

   return 0;
}
