#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
   int i = 0, cnt = 5, j;
   int * ptr = (int *)malloc(sizeof(int) * cnt);

   while(1)
   {
     if(i == cnt)
     {
       cnt += 3;
       ptr = (int *)realloc(ptr, cnt * sizeof(int));
     }

     printf("input integer: ");
     scanf("%d", &ptr[i]);
     if(ptr[i] == -1)
       break;
     i++;
   }

   for(j=0; j<i; j++)
     printf("%d ", ptr[j]);
   printf("\n");
   free(ptr);

   return 0;
}
