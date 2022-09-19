#include <time.h>
#include<stdlib.h>
#include "random_coordinates.h"

int main()
{
    srand(time(NULL));

    print_random_coordinates(10);

    return 0;
}
