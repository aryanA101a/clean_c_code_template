#ifndef COORDINATE_H
#define COORDINATE_H

typedef struct Coordinate
{
    double x;
    double y;
} Coordinate;

Coordinate init_coordinate(double x, double y);
void coordinate_show(Coordinate c);

#endif