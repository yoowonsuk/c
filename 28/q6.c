#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#define LEN 20

typedef struct
{
  char name[LEN];
  char phone[LEN];
} Phone;

void insert(Phone **, Phone *, int);
void delete(Phone **, int, int);
int search(Phone **, Phone *, int);
void printall(Phone **, int);

int main(void)
{
    int i=0, idx=-1, cur=-1, state;
    Phone * arr[30];
    Phone * ptr;
    FILE * fp = fopen("list.txt", "rb");
    while(1)
    {
      ptr = (Phone *)malloc(sizeof(Phone));
      state = fread((void *)tem, sizeof(Phone), 1, fp);
      if(state != 1)
        break;
      idx++;
      arr[idx] = tem;
    }
    fclose(fp);

    while(i!=5)
    {
      puts("*** MENU ***");
      puts("1. Insert");
      puts("2. Delete");
      puts("3. Search");
      puts("4. Print All");
      puts("5. Exit");
      fputs("Choose the item: ", stdout);
      scanf("%d", &i);
      getchar();

      switch(i)
      {
      case 1:
        ptr = (Phone *)malloc(sizeof(Phone));
        fputs("Input Name: ", stdout);
        fgets(ptr->name, LEN, stdin);
        fputs("Input Tel Number: ", stdout);
        fgets(ptr->phone, LEN, stdin);
        idx++;
        insert(arr, ptr, idx);
        break;
      case 2:
        delete(arr, cur, idx);
        if(cur != -1)
          idx--;
        break;
      case 3:
        ptr = (Phone *)malloc(sizeof(Phone));
        fputs("Search Name: ", stdout);
        fgets(ptr->name, LEN, stdin);
        fputs("search Tel Number: ", stdout);
        fgets(ptr->phone, LEN, stdin);
        cur = search(arr, ptr, idx);
        if(cur == -1)
          puts("can't find");
        else
        {
          fputs(ptr->name, stdout);
          fputs(ptr->phone, stdout);
          puts("It exists");
        }
        break;
      case 4:
        printall(arr, idx);
        break;
      case 5:
        fp = fopen("list.txt", "wb");
        if(fp == NULL)
        {
          puts("file open fail");
          return -1;
        }
        for(j=0; j<=idx; j++)
          fwrite((void *)arr[j], sizeof(Phone), 1, fp);
        fclose(fp);
      }
    }
}

void insert(Phone ** arr, Phone * temp, int idx)
{
  arr[idx] = temp;
}

void delete(Phone ** arr, int cur, int idx)
{
  int i;
  if(cur == -1)
  {
    puts("void");
    return;
  }
  for(i=cur; i<idx; i++)
    *arr[cur] = *arr[cur+1];
}

int search(Phone ** arr, Phone * temp, int idx)
{
  int i;
  for(i=0; i<=idx; i++)
    if(!strcmp( (arr[i]->name), temp->name ) )
      if(!strcmp( (arr[i]->phone), temp->phone) )
              return i;
  return -1;
}
void printall(Phone ** arr, int idx)
{
  int i;

  for(i=0; i<=idx; i++)
  {
    printf("person%d\n%s%s\n", i+1, arr[i]->name, arr[i]->phone);
  }
}
