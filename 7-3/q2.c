#include <stdio.h>

int main(void)
{
	int i, total;
	i = total = 0;

	do
	{
		if(!(i % 2))
			total += i;
	}while(i++ < 100);

	printf("total sum: %d\n", total);
	return 0;
}
