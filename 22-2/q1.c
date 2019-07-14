#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
   struct employee {
     char name[20];
     char perID[20];
     int salary;
   };

   struct employee arr[3];
   int i;

   for(i=0; i<3; i++)
   {
     fputs("name, id, salary? ", stdout);
     scanf("%s %s %d", arr[i].name, arr[i].perID, &arr[i].salary);
   }
   printf("\n");

   for(i=0; i<3; i++)
    printf("name: %s, perID: %s, salary: %d\n", arr[i].name, arr[i].perID, arr[i].salary);

   return 0;
}

