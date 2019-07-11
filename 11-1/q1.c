#include <stdio.h>

int main(void)
{
	int array[5], i, max, min, sum;
	sum = 0;

	for(i=0; i<5; i++)
		printf("input%d: ", i), scanf("%d", &array[i]);

	max = min = array[0];

	for(i=0; i<5; i++)
		sum += array[i];
	for(i=1; i<5; i++)
	{
		if(max < array[i])
			max = array[i];
		if(min > array[i])
			min = array[i];
	}

	printf("sum: %d, max: %d, min: %d\n", sum, max, min);
	return 0;
}

