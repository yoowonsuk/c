#include <stdio.h>

int main(void)
{
	int num = 0, cnt = 5, sum = 0;

	while(cnt--)
	{
		while(num < 1)
		{
			printf("input integer more than or equal to 1: ");
			scanf("%d", &num);
		}
		sum += num;
		num = 0;
	}
	printf("total sum: %d\n", sum);
	return 0;
}
