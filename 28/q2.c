#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define LEN 20

typedef struct
{
  char title[LEN];
  char author[LEN];
  int pages;
} Book;

int main(void)
{
  Book * list[3];
  int i;

  for(i=0; i<3; i++)
  {
    list[i] = (Book *)malloc(sizeof(Book));
    fputs("title? ", stdin);
    fgets(list[i]->title, LEN, stdin);
    fputs("author? ", stdin);
    fgets(list[i]->author, LEN, stdin);
    fputs("pages? ", stdin);
    scanf("%d", &(list[i]->pages));
    getchar();
  }
  printf("\n");

  for(i=0; i<3; i++)
  {
    fputs(list[i]->title, stdout);
    fputs(list[i]->author, stdout);
    printf("%d\n\n", list[i]->pages);
  }

  for(i=0; i<3; i++)
    free(list[i]);
  return 0;
}
