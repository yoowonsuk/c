#include <stdio.h>

int main(void)
{
	int ar1[][4] = {1, 2, 3, 4, 5, 6, 7, 8};
	int ar2[2][4];
	int i, j;

	for(i=0; i<2; i++)
		for(j=0; j<4; j++)
			ar2[j][i] = ar1[i][j];

	for(i=0; i<4; i++)
	{
		for(j=0; j<2; j++)
			printf("%d ", ar2[i][j]);
		printf("\n");
	}
	return 0;
}
