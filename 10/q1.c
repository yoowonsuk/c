#include <stdio.h>

int main(void)
{
	int num;

	printf("input decimal: ");
	scanf("%d", &num);

	printf("hexadecimal: %#X\n", num);
	return 0;
}
