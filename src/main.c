//  Copyright (c) 2018 Antoine Tran Tan
//

#include "my_header.h"

int main(void)
{
    unsigned long long int S1 = 1;
    unsigned char n = 2;

    while(n<50)
    {
        S1 = S1 * n;
        n = n + 1;
    }

    return 0;
}
