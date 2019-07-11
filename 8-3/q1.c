#include <stdio.h>

int main(void)
{
	int n;

	printf("n? ");
	scanf("%d", &n);

	switch(n / 10)
	{
		case 0:
			printf("0 <= n < 10\n");
			break;
		case 1:
			printf("10 <= n < 20\n");
			break;
		case 2:
			printf("20 <= n < 30\n");
			break;
		default:
			printf("30 <= n\n");
	}
	return 0;
}

