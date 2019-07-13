#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
   int usr[3], com[3];
   int i, cnt, strike, ball;
   cnt = 0;

   srand((int)time(NULL));

   while(1)
   {
     for(i=0; i<3; i++)
      com[i] = rand()%10;

     if(com[0] == com[1] || com[1] == com[2] || com[0] == com[2])
       continue;
     break;
   }

   while(1)
   {
     strike = ball = 0;
     printf("challenge%d\n", ++cnt);
     for(i=0; i<3; i++)
     {
       printf("input%d: ", i+1);
       scanf("%d", &usr[i]);
     }

     for(i=0; i<3; i++)
     {
       if(com[i] == usr[i])
         strike++;
       else if(com[(i+1)%3] == usr[i])
         ball++;
       else if(com[(i+2)%3] == usr[i])
         ball++;
     }

     if(strike == 3)
       break;
     printf("strike: %d ball: %d\n\n", strike, ball);
   }

   printf("you succeed in %d attempt\n", cnt);
   return 0;
}
