#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(int argc, char * argv[])
{
  FILE * fp1, * fp2;
  int ch1, ch2;
    
  if(argc != 3)
  {
    printf("usage error");
    return -1;
  }

  fp1 = fopen(argv[1], "rt");
  fp2 = fopen(argv[2], "rt");

  while(1)
  {
    ch1 = fgetc(fp1);
    ch2 = fgetc(fp2);

    if(ch1 != ch2)
    {
      printf("They're different\n");
      return 0;
    }

    if(ch1 == EOF && ch2 == EOF)
    {
      printf("Both are same\n");
      return 0;
    }
  }
}
