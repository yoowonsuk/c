#include <stdio.h>
void snailprint(int (*ary)[50], int);

int main(void)
{
   int num, arr[50][50];

   printf("how long? ");
   scanf("%d", &num);

   snailprint(arr, num);
   return 0;
}

void snailprint(int (*ary)[50], int num)
{
  int i, j, cnt, n;
  cnt = num -1;
  n = 1;
  i = j = 0;

  while(1)
  {
    for(; j<cnt; j++)
      ary[i][j] = n++;
    for(; i<cnt; i++)
      ary[i][j] = n++;
    for(; j >= num - cnt; j--)
      ary[i][j] = n++;
    for(; i>= num - cnt; i--)
      ary[i][j] = n++;
    if(n >= num * num)
      break;
    i++, j++;
    cnt -= 1;
  }
  if(num%2)
    ary[num/2][num/2] = n;

  for(i = 0; i<num; i++)
  {
    for(j=0; j<num; j++)
      printf("%4d", ary[i][j]);
    printf("\n");
  }
}
