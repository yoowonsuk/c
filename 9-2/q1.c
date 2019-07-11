#include <stdio.h>

int AddToTotal(int num)
{
	static int total;
	total += num;
	return total;
}

int main(void)
{
	int num, i;
	for(i=0; i<3; i++)
	{
		printf("input%d: ", i+1);
		scanf("%d", &num);
		printf("total sum: %d\n", AddToTotal(num));
	}
	return 0;
}
