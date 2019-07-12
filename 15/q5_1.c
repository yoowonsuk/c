#include <stdio.h>
void DesSort(int [], int);

int main(void)
{
	int arr[7];
	int i, len;
	len = sizeof(arr) / sizeof(int);

	for(i=0; i<len; i++)
		printf("input%d: ", i+1), scanf("%d", &arr[i]);

	DesSort(arr, len);
	for(i=0; i<len; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

void DesSort(int ary[], int len)
{
	int i, j;
        int temp;
 
         for(i=0; i<len-1; i++)
         {
                 for(j=0; j<(len-i)-1; j++)
                 {
                         if(ary[j]<ary[j+1])
                         {
                                 temp = ary[j];
                                 ary[j] = ary[j+1];
                                 ary[j+1] = temp;
                         }
                 }
         }
}


