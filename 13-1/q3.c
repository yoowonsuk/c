#include <stdio.h>

int main(void)
{
        int arr[] = {1, 2, 3, 4, 5};
        int * ptr = &arr[sizeof(arr)/sizeof(int) - 1];
        int i, sum = 0;

        for(i=0; i<sizeof(arr)/sizeof(int); i++)
                sum += *(ptr--);

	printf("%d\n", sum);
        return 0;
}

