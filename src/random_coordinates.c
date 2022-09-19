#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "coordinate.h"

double generate_random_coordinate(double n){
    double number = ((double)rand()/(double)(RAND_MAX)) *n;
    return number ;
}

void print_random_coordinates(int n)
{
    double x,y;
    Coordinate c;
    for (int i = 0; i < n; i++)
    {
        x=generate_random_coordinate(100.0);
        y=generate_random_coordinate(100.0);

        c=init_coordinate(x,y);

        coordinate_show(c);
    }

    printf("\n");
}