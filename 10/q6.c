#include <stdio.h>

void Conversion(int);

int main()
{
	int sec;

	printf("sec? ");
	scanf("%d", &sec);

	Conversion(sec);
	return 0;
}

void Conversion(int sec)
{
	int min, hour;

	hour = sec / 3600;
	min = sec / 60 - hour * 60;
	sec %= 60;

	printf("h: %d, m: %d, s: %d\n", hour, min, sec);
	return;
}
	
