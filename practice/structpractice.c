#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct
{
  int xpos;
  int ypos;
} Point;

int main(void)
{
    Point pos = {5, 3};
    Point * ptr = &pos;

    printf("%d %d\n", pos.xpos, pos.ypos);
    printf("%d %d\n", (&pos)->xpos, (&pos)->ypos);
    printf("%d %d %d %d\n", (*(&pos)).xpos, *&pos.xpos, (&pos)->xpos, (*ptr).xpos);
    return 0;
}
