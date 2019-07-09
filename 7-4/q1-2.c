#include <stdio.h>

int main(void)
{
	int num1, num2, i, sum = 0;	

	printf("input two integers: ");
	scanf("%d %d", &num1, &num2);
	i = num1;
	while(i <= num2)
		sum += i++;
	printf("%d\n", sum);
	return 0;
}
