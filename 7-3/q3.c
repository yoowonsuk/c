#include <stdio.h>

int main(void)
{
	int cur = 2;
	int is = 0;

	do
	{
		is = 1;
		do
		{
			printf("%d x %d = %d\n", cur, is, cur * is);
			is++;
		}while(is < 10);
		cur++;
	}while(cur < 10);
	return 0;
}
