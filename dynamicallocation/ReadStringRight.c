#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

char * ReadUserName(void)
{
  char * name = (char *)malloc(sizeof(char)*30);
  printf("What's your name? ");
  gets(name);
  return name;
}

int main(void)
{
  char * name1, * name2;
  name1 = ReadUserName();
  printf("name1: %s\n", name1);
  name2 = ReadUserName();
  printf("name2: %s\n", name2);

  printf("again name1: %s\n", name1);
  printf("again name2: %s\n", name2);
  free(name1);
  free(name2);
  return 0;
}
