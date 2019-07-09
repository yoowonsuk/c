#include <stdio.h>

int main(void)
{
	printf("ABCDEFG\rHi\n"); // carriage return don't erase the former letters on the same line
	printf("ABCDE\rF\n");
	return 0;
}

