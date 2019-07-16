#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(int argc, char * argv[])
{
  FILE * fp = fopen(argv[1], "rt");
  char str[20];
  int cntA, cntP;
  cntA = cntP = 0;

  while( fscanf(fp, "%s", str) != EOF )
  {
    if(str[0] == 'A')
      cntA++;
    else if(str[0] == 'P')
      cntP++;
  }

  printf("string starting with A: %d\n", cntA);
  printf("string starting with P: %d\n", cntP);
  return 0;
}
