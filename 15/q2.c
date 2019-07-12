#include <stdio.h>
void decitobin(int);

int main(void)
{
	int num;

	printf("input decial: ");
	scanf("%d", &num);

	decitobin(num);
	return 0;
}

void decitobin(int num)
{
	int i, j, arr[50];

	for(i=0;;i++)
	{
		arr[i] = num % 2;
		if(!(num/2))
			break;
		num /= 2;
	}

	for(j=i; j>=0; j--)
		printf("%d",arr[j]);
	printf("\n");
	return;
}
