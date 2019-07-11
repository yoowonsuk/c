#include <stdio.h>
int BiggestoValue(int, int, int);
int SmallestoValue(int, int, int);

int main(void)
{
	int num1, num2, num3;
	int large, small;

	printf("num1, num2, num3? ");
	scanf("%d %d %d", &num1, &num2, &num3);

	large = BiggestoValue(num1, num2, num3);
	small = SmallestoValue(num1, num2, num3);

	printf("Biggest: %d, Smallest: %d\n", large, small);
	return 0;
}

int BiggestoValue(int n1, int n2, int n3)
{
	if(n1 > n2)
		return n1 > n3 ? n1 : n3;
	else
		return n2 > n3 ? n2 : n3;
}

int SmallestoValue(int n1, int n2, int n3)
{
        if(n1 > n2)
                return n2 > n3 ? n3 : n2;
        else
                return n1 > n3 ? n3 : n1;
}

