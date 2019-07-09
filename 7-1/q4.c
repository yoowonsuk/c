#include <stdio.h>

int main(void)
{
	int dan, num = 9;

	printf("dan? ");
	scanf("%d", &dan);

	while(num)
		printf("%d ", dan * num--);
	printf("\n");
	return 0;
}
