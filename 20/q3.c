#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
   int i;
   
   printf("scope of rand(): 0 to %d\n", RAND_MAX);

   for(i=0; i<5; i++)
     printf("output rand%d: %d\n", i+1, rand()%100);
   return 0;
}
