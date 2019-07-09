#include <stdio.h>

int main()
{
	int i, result = 1;

	printf("how many times? ");
	scanf("%d", &i);

	for(;i > 0; i--)
		result *= i;
	printf("%d\n", result);
	return 0;
}
