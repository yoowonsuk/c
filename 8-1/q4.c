#include <stdio.h>

int main(void)
{
        int n1, n2, result;

        printf("input two integers: ");
        scanf("%d %d", &n1, &n2);
	
	// result = n1 > n2 ? n1 - n2 : n2 -n1;
	// printf("the difference: %d\n", result);
	
	n1 > n2 ? printf("the difference: %d\n", n1 - n2) :
	printf("the difference: %d\n", n2 - n1);
        return 0;
}

