#include <stdio.h>
#include <math.h>

void PrimeNumber();

int main(void)
{
	PrimeNumber();
	return 0;
}

void PrimeNumber()
{
	int i = 2, cnt = 10, d;
	while(cnt)
	{
		for(d = (int)sqrt((double)(i));; d--)
		{
			if(d == 1)
				cnt--, printf("%d ", i);
			if(!(i % d))
				break;
		}
		i++;
	}
	printf("\n");
	return;
}


