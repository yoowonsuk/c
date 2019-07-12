#include <stdio.h>
void printodd(int [], int);
void printeven(int [], int);

int main(void)
{
	int arr[10];
	int i, len;
	len = sizeof(arr) / sizeof(int);

	for(i=0; i<len; i++)
		printf("input%d ", 1+i), scanf("%d", &arr[i]);

	printodd(arr, len);
	printeven(arr, len);
	return 0;
}

void printodd(int param[], int len)
{
	int i;
	for(i=0; i<len; i++)
		if(param[i] % 2)
			printf("%d ", param[i]);
	printf("\n");
}

void printeven(int param[], int len)
{
        int i;
        for(i=0; i<len; i++)
                if(!(param[i] % 2))
                        printf("%d ", param[i]);
        printf("\n");
}

