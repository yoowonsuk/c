#include <stdio.h>

void GCM(int, int);

int main(void)
{
	int n1, n2;

	printf("input two digits: ");
	scanf("%d %d", &n1, &n2);

	if(n1 > n2)
		GCM(n2, n1);
	else
		GCM(n1, n2);
	return 0;
}

void GCM(int s, int l)
{
	int d = s;
	while(d)
	{
		if(!(l % d) && !(s % d))
		{
			printf("GCM is %d\n", d);
			break;
		}
		d--;
	}
}
