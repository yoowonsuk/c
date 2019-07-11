#include <stdio.h>

int main(void)
{
	char str[50];
	int i=0;

	printf("input string: ");
	scanf("%s", str);

	while(str[i] != '\0')
		i++;

	printf("string length: %d\n", i);
	return 0;
}
