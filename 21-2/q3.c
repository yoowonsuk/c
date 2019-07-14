#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
   char str1[30], str2[30];
   int idx1, idx2, i;

   fputs("name, age? ", stdout);
   fgets(str1, sizeof(str1), stdin);
   fputs("name, age? ", stdout);
   fgets(str2, sizeof(str2), stdin);

   for(idx1=0; idx1<strlen(str1); idx1++)
     if(str1[idx1] == ' ')
       break;
   for(idx2=0; idx2<strlen(str2); idx2++)
     if(str2[idx2] == ' ')
       break;

   if(idx1 != idx2)
     puts("name is different");
   else if(strncmp(str1, str2, idx1))
     puts("name is different");
   else
     puts("name is same");

   if( atoi(&str1[idx1]) != atoi(&str2[idx2]))
    puts("ages are different");
   else
    puts("ages are same");
   return 0;
}

