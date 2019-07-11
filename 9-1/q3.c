#include <stdio.h>

void Fibonacci(int);

int main(void)
{
	int cnt;

	printf("how many? ");
	scanf("%d", &cnt);
	
	Fibonacci(cnt);
	return 0;
}

void Fibonacci(int cnt)
{
	//int n1 = 0, n2 = 1, temp;
	int n1 = 0, n2 = 1;
	switch(cnt)
	{
	case 0:
		return;
	case 1:
		printf("%d\n", n1);
		break;
	case 2:
		printf("%d %d\n", n1, n2);
		break;
	default:
		while(cnt--)
		{
			printf("%d ", n1);
			n2 += n1;
			n1 = n2 - n1;
			/*
			temp = n1;
			n1 = n2;
			n2 += temp;
			*/
		}
		printf("\n");
	}
}
