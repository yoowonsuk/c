#include <stdio.h>

int main()
{
	int num, cnt = 0;

	printf("input Integer: ");
	scanf("%d", &num);

	while(cnt++ < num)
		printf("Hello world!\n");

	return 0;
}
