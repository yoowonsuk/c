#include <stdio.h>

int main(void)
{
	int arr[10];
	int i, len, temp, front, rear;
	len = sizeof(arr) / sizeof(int);
	front = 0, rear = len - 1;

	for(i=0; i<len; i++)
	{
		printf("input%d: ", i+1), scanf("%d", &temp);
		if(temp % 2)
			arr[front++] = temp;
		else
			arr[rear--] = temp;
	}

	for(i=0; i<len; i++)
		printf("%d ", arr[i]);
	printf("\n");
	return 0;
}

