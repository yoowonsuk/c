#include <stdio.h>

int main(void)
{
	int num, total = 0;
	printf("input integer(0 to quit): ");
	scanf("%d", &num);

	while(num)
	{
		total += num;		
		printf("input integer(0 to quit): ");
		scanf("%d", &num);
	}
	printf("total sum: %d\n", total);
	return 0;
}
