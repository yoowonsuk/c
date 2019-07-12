#include <stdio.h>
#include <string.h>
void Palindrome(char *, int);

int main(void)
{
	char str[50];
	printf("input string: ");
	scanf("%s", str);

	Palindrome(str, strlen(str));
	return 0;
}

void Palindrome(char * str, int len)
{
	int front, rear;

	front = 0, rear = len - 1;

	while(front < rear)
	{
		if(str[front++] != str[rear--])
		{
			printf("not parlindrome\n");
			return;
		}
	}
	printf("it's parlindrome\n");
	return;
}

