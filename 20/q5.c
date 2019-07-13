#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
   int me, com;
   int win, draw, cnt;
   cnt = win = draw = 0;
   srand((int)time(NULL));

   while(1)
   {
     printf("rock: 1, scissors: 2, paper: 3\ninput? ");
     scanf("%d", &me);
     com = rand()%3+1;
     cnt++;
    
     switch(me)
     {
       case 1:
         if(me+1 == com)
           printf("you rock, com scissors, you win\n"), win++;
         else if(me == com)
           printf("both rock, draw\n"), draw++;
         break;

       case 2:
         if(me+1 == com)
           printf("you scissors, com paper, you win\n"), win++;
         else if(me == com)
           printf("both scissors, draw\n"), draw++;
         break;

       case 3:
         if(me-2 == com)
           printf("you paper, com rock, you win\n"), win++;
         else if(me == com)
           printf("both paper, draw\n"), draw++;
     }
     printf("\n");
     if(cnt != draw+win)
     {
      printf("you lose\n");
      break;
     }
   }

   printf("win: %d draw: %d\n", win, draw);
   return 0;
}
