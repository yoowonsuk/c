#include <stdio.h>

int main(void)
{   
	int num1, num2, i, sum = 0;
	
	printf("input two integers: ");
	scanf("%d %d", &num1, &num2);
	i = num1;
	do
	{
		sum += i++;
	} while(i <= num2);

	printf("total sum: %d\n", sum);
	return 0;
}
