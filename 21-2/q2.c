#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void)
{
  char str1[20];
  char str2[20];
  char str3[40];

  fputs("input string1: ", stdout);
  fgets(str1, sizeof(str1), stdin);
  str1[strlen(str1)-1] = 0;
  fputs("input string2: ", stdout);
  fgets(str2, sizeof(str2), stdin);
  str2[strlen(str2)-1] = 0;

  strncpy(str3, str1, sizeof(str3)-1);
  str3[sizeof(str3)-1] = 0;
  strncat(str3, str2, sizeof(str3)-strlen(str3)-1);
  puts(str3);
  return 0;
}
