#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct{
  int xpos;
  int ypos;
} Point;

void SwapPoint(Point *, Point *);

int main(void)
{
    Point pos1 = {2, 4};
    Point pos2 = {5, 7};

    SwapPoint(&pos1, &pos2);

    printf("pos1: [%d, %d]\n", pos1.xpos, pos1.ypos);
    printf("pos2: [%d, %d]\n", pos2.xpos, pos2.ypos);
    return 0;
}

void SwapPoint(Point * pos1, Point * pos2)
{
  Point temp;

  temp = *pos1;
  *pos1 = *pos2;
  *pos2 = temp;
}

