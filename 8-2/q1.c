#include <stdio.h>

int main(void)
{
	int cur, is;

	for(cur = 2; cur < 10; cur++)
	{
		if(cur % 2 != 0)
			continue;
		for(is = 1; is <10; is++)
		{
			if(is > cur)
				break;
			printf("%d \n", cur * is);
		}
		printf("\n");
	}
	return 0;
}

