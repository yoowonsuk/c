#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
  char name[10];
  char sex;
  int age;

  FILE * fp = fopen("friend.txt", "wt");
  int i;

  for(i=0; i<3; i++)
  {
    scanf("%s %c %d", name, &sex, &age);
    getchar();
    fprintf(fp, "%s %c %d", name, sex, age);
  }

  fclose(fp);
  return 0;
}
