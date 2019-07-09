#include <stdio.h>

int main(void)
{
	int num = 1, sum = 0;

	while(num)
	{
		printf("input: ");
		scanf("%d", &num);
		sum += num;
	}

	printf("total sum: %d\n", sum);
	return 0;
}
