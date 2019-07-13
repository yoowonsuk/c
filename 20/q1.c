#include <stdio.h>

int main(void)
{
   int ary[][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
   int i, j, temp[4][4], cnt = 4;

   while(cnt--)
   {
     for (i=0; i<4; i++)
       for (j=0; j<4; j++)
        temp[j][3-i] = ary[i][j];

     for(i=0; i<4; i++)
     {
       for(j=0; j<4; j++)
       {
         ary[i][j] = temp[i][j];
         printf("%d ", ary[i][j]);
       }
       printf("\n");
     }
    printf("\n");
   }
   return 0;
}

