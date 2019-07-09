#include <stdio.h>

int main(void)
{
	int times, num, cnt;
	double sum, avg;
	sum = 0.;

	printf("times? ");
	scanf("%d", &times);
	cnt = times;
	while(cnt--)
	{
		printf("input: ");
		scanf("%d", &num);
		sum += (double)num;
	}
	
	avg = sum / (double)times;
	printf("average: %f\n", avg);
	return 0;
}
