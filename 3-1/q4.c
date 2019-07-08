#include <stdio.h>

int main(void)
{
	int num1, num2;

	printf("input two integers: ");
	scanf("%d %d:", &num1, &num2);

	printf("%d divided by %d equals that the quotient is %d and the remainder is %d\n", num1, num2, num1/num2, num1%num2);
	return 0;
}
