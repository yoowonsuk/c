#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
   int size, i, j;
   char * ptr;

   printf("What is the maximum length of string? ");
   scanf("%d", &size), getchar();
   ptr = (char *)malloc(size+2);

   printf("String? ");
   fgets(ptr, size+2, stdin);
   ptr[strlen(ptr)-1] = 0;

   for(i=strlen(ptr)-1; i>0; i--)
     if(ptr[i] == ' ')
     { 
       j = i + 1;
       while(1)
       {
         if(ptr[j] == ' ' || j == strlen(ptr))
           break;
         printf("%c", ptr[j++]);
       }
       printf("\n");
     }
   for(i=0; i<strlen(ptr); i++)
     if(ptr[i] == ' ')
       break;
     else
       printf("%c", ptr[i]);
   printf("\n");
   free(ptr);

   return 0;
}
