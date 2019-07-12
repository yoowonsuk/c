#include <stdio.h>
void MaxAndMin(int **, int **, int []);

int main(void)
{
	int * maxPtr, * minPtr;
	int arr[5] = {3, 5, 7, 1, 2};
	MaxAndMin(&maxPtr, &minPtr, arr);

	printf("%d %d\n", *maxPtr, *minPtr);
	return 0;
}

void MaxAndMin(int ** dptr1, int ** dptr2, int ary[])
{
  int i;

  *dptr1 = *dptr2 = ary;

  for(i=1; i<5; i++)
  {
    if(**dptr1 < ary[i])
      *dptr1 = &ary[i];
    if(**dptr2 > ary[i])
      *dptr2 = &ary[i];
  }
}
