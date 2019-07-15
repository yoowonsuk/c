#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
  char str[30];
  int ch;
  FILE * fp = fopen("simple.txt", "rt");
  if(fp == NULL)
  {
    puts("file open fail");
    return -1;
  }

  ch = fgetc(fp);
  printf("%c\n", ch);
  ch = fgetc(fp);
  printf("%c\n", ch);

  fgets(str, sizeof(str), fp);
  puts(str);
  fgets(str, sizeof(str), fp);
  puts(str);

  fclose(fp);
  return 0;
}
