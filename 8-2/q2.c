#include <stdio.h>

int main(void)
{
	int ten, one;

	for(one = 0; one < 10; one++)
		for(ten = 0; ten < 10; ten++)
			if((one + ten) * 11 == 99)
				printf("%d %d\n", ten * 10 + one, one * 10 + ten);

	return 0;
}
