#include <stdio.h>

int recur(int);

int main(void)
{
	int n;

	printf("n? ");
	scanf("%d", &n);
	printf("2 to the power of %d is %d\n", n, recur(n));
	return 0;
}

int recur(int n)
{
	if(n)
		return 2 * recur(n-1);
	else
		return 1;
}
