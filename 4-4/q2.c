#include <stdio.h>

int main(void)
{
	int num = 3;

	printf("%d x 8 / 4 = %d\n", num, ((num<<3)>>2));
	return 0;
}
