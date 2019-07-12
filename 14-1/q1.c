#include <stdio.h>

int SquareByValue(int);
void SquareByReference(int *);

int main()
{
	int num1, num2;
	num1 = num2 = 5;

	num1 = SquareByValue(num1);
	SquareByReference(&num2);

	printf("num1: %d, num2: %d\n", num1, num2);
	return 0;
}

int SquareByValue(int num)
{
	num *= num;
	printf("num in SBV is %d\n", num);
	return num;
}

void SquareByReference(int * ptr)
{
	*ptr *= *ptr;
	printf("num in SBR is %d\n", *ptr);
}
	
