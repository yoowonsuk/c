#include <stdio.h>

int main(void)
{
	int num = 1, total = -1;

	while(num)
	{
		total += num;
		printf("input integer(0 to quit): ");
		scanf("%d", &num);
	}
	printf("total sum: %d\n", total);
	return 0;
}
		
