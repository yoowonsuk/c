#include <stdio.h>

int main(void)
{
        int arr[] = {1, 2, 3, 4, 5};
        int * ptr = arr;
        int i;

        for(i=0; i<sizeof(arr)/sizeof(int); i++)
                *(ptr+i) += 2;

        for(i=0; i<sizeof(arr)/sizeof(int); i++)
                printf("%d ", arr[i]);
        printf("\n");
        return 0;
}

