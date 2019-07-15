#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
  FILE * fp = fopen("simple.txt", "wt");
  if(fp == NULL)
  {
    puts("file open fail");
    return -1;
  }

  fputc('A', fp);
  fputc('A', fp);
  fputs("My name is Hong\n", fp);
  fputs("My name is Yoon\n", fp);
  fclose(fp);
  return 0;
}
