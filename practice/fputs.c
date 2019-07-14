#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
  int n1, n2;

  n1 = puts("hello");
  n2 = fputs("birthday", stdout);
  printf("\n");

  printf("%d %d\n", n1, n2);

  n1 = puts("smileboy");
  n2 = fputs("apple", stdout);
  printf("\n");

  printf("%d %d\n", n1, n2);


  return 0;
}
