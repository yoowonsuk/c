#include <stdio.h>

int main(void)
{
	int villa[8];
	int i, popu;

	for(i=0; i<8; i++)
	{
		printf("%dfloor %droom number popu? ", (i/2)+1, (i%2)+1);
		scanf("%d", &villa[i]);
	}

	for(i=0; i<4; i++)
	{
		popu = 0;
		popu += villa[2*i] + villa[2*i+1];
		printf("%dfloor popu: %d\n", i, popu);
	}
	return 0;
}
