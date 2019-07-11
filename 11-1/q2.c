#include <stdio.h>

int main(void)
{
	char arr[] = {'G', 'o', 'o', 'd', ' ', 't', 'i', 'm', 'e'};
	int i;

	for(i=0; i<sizeof(arr); i++)
		printf("%c", arr[i]);
	printf("\n");
	return 0;
}
	
