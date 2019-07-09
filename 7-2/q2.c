#include <stdio.h>

int main(void)
{
	int num = 0, cnt;

	while(num < 5)
	{
		cnt = num;
		while(cnt--)
			printf("o");
		printf("*\n");
		num++;
	}
	return 0;
}

