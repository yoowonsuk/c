#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main(void)
{
   FILE * fp = fopen("text.txt", "wt");
   fputs("123456789", fp);
   fclose(fp);

   fp = fopen("text.txt", "rt");

   fseek(fp, -2, SEEK_END);
   putchar(fgetc(fp));

   fseek(fp, 2, SEEK_SET);
   putchar(fgetc(fp));

   fseek(fp, 2, SEEK_CUR);
   putchar(fgetc(fp));

   fclose(fp);
   return 0;
}
