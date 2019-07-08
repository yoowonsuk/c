#include <stdio.h>

int main(void)
{
	int num;

	printf("input integer: ");
	scanf("%d", &num);

	printf("%d to the power of 2 equals %d\n", num, num*num);
	return 0;
}
