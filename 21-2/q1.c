#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
  char st[100];
  int len, i, sum, cnt;

  printf("input string: ");
  scanf("%s", st);

  len = strlen(st);
  cnt = sum = 0;

  for(i=0; i<len; i++)
    if('0'<=st[i] && st[i]<='9')
      sum += st[i], cnt++;
  
  sum -= cnt * '0';
  printf("total sum: %d\n", sum);
  return 0;
}
