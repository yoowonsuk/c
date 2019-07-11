#include <stdio.h>

int main(void)
{
	double kor, eng, math, avg;

	printf("score of kor, eng, math? ");
	scanf("%lf %lf %lf", &kor, &eng, &math);
	avg = (kor + eng + math) / (double)3;

	if(avg >= 90)
		printf("his or her grade is A\n");
	else if(avg >= 80)
		printf("his or her grade is B\n");
	else if (avg >= 70)
		printf("his or her grade is C\n");
	else if (avg >= 50)
		printf("his or her grade is D\n");
	else
		printf("his or her grade is F\n");
	return 0;
}

