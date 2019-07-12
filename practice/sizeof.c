#include <stdio.h>

int main(void)
{
	int * ptr = NULL;
	int arr[] = {1, 2, 3, 4, 5, 6};
	double * ptr2 = NULL;

	printf("%ld %ld\n", sizeof(ptr), sizeof(arr));
	printf("%ld\n", sizeof(ptr2));
	return 0;
}
