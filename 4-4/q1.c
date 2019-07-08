#include <stdio.h>

int main(void)
{
	int num, con;

	printf("input integer: ");
	scanf("%d", &num);
	
	con = ~num + 1;
	printf("2's complement: %d\n",  con);
	return 0;
}
