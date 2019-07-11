#include <stdio.h>

int main(void)
{
	int n1, n2;

	printf("input two integers: ");
	scanf("%d %d", &n1, &n2);

	if(n1 > n2)
		printf("the difference between two int is %d\n", n1-n2);
	else
		printf("the difference between two int is %d\n", n2-n1);
	return 0;
}

