#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
long FileSize(FILE *);

int main(void)
{
    FILE * fp = fopen("text.txt", "rt");
    long size;

    size = FileSize(fp);
    printf("FileSize: %ld\n", size+1);
    return 0;
}

long FileSize(FILE * fp)
{
  long size, cur;

  cur = ftell(fp);
  fseek(fp, 0, SEEK_END);
  size = ftell(fp);
  fseek(fp, cur, SEEK_SET);
  return size;
}
