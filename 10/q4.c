#include <stdio.h>

void cal(int);

int main(void)
{
	int num;

	printf("how much do you have? ");
	scanf("%d", &num);

	cal(num);
	return 0;
}

void cal(int money)
{
	int i, j, k;

	for(i = 1; i < money / 500; i++)
		for(j = 1; j < money / 700; j++)
			for(k = 1; k < money / 400; k++)
				if(i * 500 + j * 700 + k * 400 == money)
					printf("cream bread: %d, saewookkang: %d, cola: %d\n", i, j, k);

	printf("what are you going to choose?\n");
	return;
}
