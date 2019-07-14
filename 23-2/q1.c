#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

typedef struct
{
  int xpos;
  int ypos;
} Point;

void area(Point, Point);
void coordinate(Point, Point);

int main(void)
{
  Point pos1 = {0, 0};
  Point pos2 = {100, 100};

  area(pos1, pos2);
  coordinate(pos1, pos2);
  return 0;
}

void area(Point pos1, Point pos2)
{
  int ar = (pos2.ypos - pos1.ypos) * (pos2.xpos - pos1.xpos);

  printf("area is %d\n", ar);
}

void coordinate(Point pos1, Point pos2)
{
  printf("[%d, %d], [%d, %d], [%d, %d], [%d, %d]\n", pos1.xpos, pos1.ypos,
      pos1.xpos, pos2.ypos, pos2.xpos, pos1.ypos, pos2.xpos, pos2.ypos);
}
