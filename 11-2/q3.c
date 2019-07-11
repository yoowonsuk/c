#include <stdio.h>

int main(void)
{
	char str[50];
	int max, i, len;

	printf("string? ");
	scanf("%s", str);

	i=1;
	max = str[0];
	while(str[i++] != '\0')
		if(max < str[i])
			max = str[i];

	printf("character of max number is %c\n", max);
	return 0;
}
