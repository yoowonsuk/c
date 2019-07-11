#include <stdio.h>

int main(void)
{
	int arr[10];
	char str[10] = "happy";

	printf("%ld %ld\n", sizeof(arr), sizeof(str));
	return 0;
}
