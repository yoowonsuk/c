#include <stdio.h>

void expo(int);

int main(void)
{
	int n;

	printf("n? ");
	scanf("%d", &n);

	expo(n);
	return 0;
}

void expo(int n)
{
	int k, result;
	k = 1, result = 2;

	while(result <= n)
		result *= 2, k++;
	printf("the appropriate answer is %d\n", --k);
	return;
}
