#include <stdio.h>

int main(void)
{
	int A, Z;
	int result;
	for(A = 0; A < 10; A++)
		for(Z = 0; Z < 10; Z++)
		{
			if(A == Z)
				continue;
			result = (A + Z) * 11;
			if(result == 99)
				printf("%d%d + %d%d = %d\n", A, Z, Z, A, result);
		}
	return 0;
}
