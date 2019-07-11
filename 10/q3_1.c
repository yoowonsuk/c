#include <stdio.h>

void Euclid(int, int);

int main(void)
{
	int n1, n2;

	printf("input two int: ");
	scanf("%d %d", &n1, &n2);

	if(n1 > n2)
		Euclid(n1, n2);
	else
		Euclid(n2, n1);

	return 0;
}

void Euclid(int l, int s)
{
	if(!(l % s))
		printf("GCD: %d\n", s);
	else
		Euclid(s, l - s*(l/s));
}

