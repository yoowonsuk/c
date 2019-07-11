#include <stdio.h>

int main(void)
{
	char str[50], temp;
	int i, l, len, times;

	printf("input string: ");
	scanf("%s", str);

	len = 0;
	while(str[len] != '\0')
		len++;

	i = 0, l = len-1;
	for(times = 0; times < len/2; times++)
	{
		temp = str[i];
		str[i++] = str[l];
		str[l--] = temp;
	}

	printf("inverse of string: %s\n", str);
	return 0;
}
