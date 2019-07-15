#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
   FILE * src = fopen("src.bin", "rb");
   FILE * des = fopen("dst.bin", "wb");
   char buf[20];
   int readcnt;

   if(src==NULL || des==NULL)
   {
     puts("file open fail");
     return -1;
   }

   while(1)
   {
     readcnt = fread((void*)buf, sizeof(char), sizeof(buf), src);

     if(readcnt < sizeof(buf))
     {
       if(feof(src) != 0)
      {
        fwrite((void*)buf, sizeof(char), readcnt, des);
        puts("copy done");
        return 0;
      }
      else
         puts("copy fail");
      break;
     }

     fwrite((void*)buf, sizeof(char), sizeof(buf), des);
   }

   fclose(src);
   fclose(des);
   return 0;
}
