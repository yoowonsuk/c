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

   struct employee per;

   printf("information? ");
   scanf("%s %s %d", per.name, per.perID, &per.salary);

   printf("name: %s, perID: %s, salary: %d\n", per.name, per.perID, per.salary);
   return 0;
}
