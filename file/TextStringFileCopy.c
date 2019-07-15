  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <time.h>
  #include <math.h>
  
  int main(void)
  {
     FILE * src = fopen("src.txt", "rt");
     FILE * des = fopen("dst.txt", "wt");
     char str[20];
  

    if(src == NULL || des == NULL)
    {
      puts("file open fail");
      return -1;
    }
    
    while((fgets(str, sizeof(str), src)) != NULL)
      fputs(str, des);
 
    if(feof(src)!=0)
      puts("file copy done");
    else
      puts("file copy fail");
 
    fclose(src);
    fclose(des);
    return 0;
 }
