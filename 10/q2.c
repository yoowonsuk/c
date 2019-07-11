#include <stdio.h>

void gugudan(int, int);

int main(void)
{
	int n1, n2;

	printf("input two digits: ");
	scanf("%d %d", &n1, &n2);

	if(n1 > n2)
		gugudan(n2, n1);
	else
		gugudan(n1, n2);

	return 0;
}

void gugudan(int s, int l)
{
	int is;
	for(; s <= l; s++)
	{
		for(is = 1; is < 10; is ++)
			printf("%d x %d = %d\n", s, is, s*is);
		printf("\n");
	}
	return;
}
