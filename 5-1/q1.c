#include <stdio.h>

int main(void)
{
	int x1, y1, x2, y2;

	printf("input left upper x and y: ");
	scanf("%d %d", &x1, &y1);

	printf("input right lower x and y: ");
	scanf("%d %d", &x2, &y2);

	printf("area of rectangle is %d\n", (x2-x1)*(y1-y2));
	return 0;
}

