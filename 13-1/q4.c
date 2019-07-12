#include <stdio.h>

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int len = sizeof(arr)/sizeof(int);
	int * ptr = arr, * ptrl = &arr[len - 1];
	int i, temp;

	for(i=0; i < len/2; i++)
	{
		temp = *(ptr);
		*(ptr++) = *ptrl;
		*(ptrl--) = temp;
	}

	for(i=0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

	
