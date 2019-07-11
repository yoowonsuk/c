#include <stdio.h>

int main(void)
{
	goto rabbit;
cat:
	printf("nnangnnang\n");
rabbit:
	printf("polljjakpolljjak\n");
dog:
	printf("barkbark\n");
	return 0;
}
