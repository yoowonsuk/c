#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef struct
{
  char name[10];
  char sex;
  int age;
} Friend;

int main(void)
{
  FILE * fp;
  Friend myfren1;
  Friend myfren2;

  fp = fopen("friend.bin", "wb");
  scanf("%s %c %d", myfren1.name, &myfren1.sex, &myfren1.age);
  fwrite((void*)&myfren1, sizeof(Friend), 1, fp);
  fclose(fp);

  fp = fopen("friend.bin", "rb");
  fread((void*)&myfren2, sizeof(Friend), 1, fp);
  printf("%s %c %d\n", myfren2.name, myfren2.sex, myfren2.age);
  fclose(fp);
  return 0;
}
