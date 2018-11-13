//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"
#include <stdio.h>
#include <math.h>

#define ECART 1e-10


int main(void)
{
    double a = 2.0, b = 3.0, c = 4.0, delta;
    unsigned char nb_solutions;

    delta = b*b - 4*a*c;

    if( fabs(delta) < ECART )
        nb_solutions = 1;
    else if (delta > 0.0)
        nb_solutions = 2;
    else
        nb_solutions = 0;

        return 0;
}
