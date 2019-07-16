#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef struct
{
  char title[20];
  char author[20];
  int pages;
} Book;

int main(void)
{
  Book arr[3];
  int i;

  for(i=0; i<3; i++)
  {
    printf("title? ");
    scanf("%s", arr[i].title);
    printf("author? ");
    scanf("%s", arr[i].author);
    printf("pages? ");
    scanf("%d", &arr[i].pages);
  }
  printf("\n");

  for(i=0; i<3; i++)
  {
    printf("book%d\n", i+1);
    printf("title: %s\nauthor: %s\npages: %d\n", arr[i].title, arr[i].author, arr[i].pages);
  }
  return 0;
}
