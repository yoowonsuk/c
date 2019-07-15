  #include <stdio.h>
  #include <stdlib.h>
  #include <string.h>
  #include <time.h>
  #include <math.h>
  
  int main(void)
  {
     FILE * des = fopen("mystory.txt", "at");
  
     if(des == NULL)
     {
       puts("file open fail");
       return -1;
     }
  
     fputs("#favorite food: jjamppong, sweet and sour pork\n", des);
     fputs("#hobby: soccer\n", des);
  
    fclose(des);
     return 0;
  }
