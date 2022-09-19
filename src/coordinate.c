#include "coordinate.h"
#include <stdio.h>

Coordinate init_coordinate(double x, double y)
{
    Coordinate c;
    c.x = x;
    c.y = y;
    return c;
}

void coordinate_show(Coordinate c)
{
    printf("(x: %1.4f, y: %1.4f) ", c.x, c.y);
}