#include <stdio.h>
void Swap3(int *, int *, int *);

int main(void)
{
	int num1 = 10, num2 = 20, num3 = 30;

	Swap3(&num1, &num2, &num3);
	printf("num1: %d, num2: %d, num3: %d\n", num1, num2, num3);
	return 0;
}

void Swap3(int * n1, int * n2, int * n3)
{
	int temp;

	temp = *n1;
	*n1 = *n3;
	*n3 = *n2;
	*n2 = temp;
}

