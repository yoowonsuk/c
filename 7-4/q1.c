#include <stdio.h>

int main(void)
{
	int num1, num2, i, sum = 0;

	printf("input two integers: ");
	scanf("%d %d", &num1, &num2);

	for(i = num1; i <= num2; i++)
		sum += i;
	printf("%d\n", sum);
	return 0;
}
