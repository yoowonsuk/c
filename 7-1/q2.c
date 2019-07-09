#include <stdio.h>

int main(void)
{
	int num, cnt = 0;

	printf("how many? ");
	scanf("%d", &num);

	while(cnt++ < num)
		printf("%d ",3 * cnt);
	printf("\n");
	return 0;
}
