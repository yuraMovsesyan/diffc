#include <stdio.h>

#include "header/fraction.h"

#ifdef RUN_TESTS_ON_MAKE
#include "../test/header/test.h"
#endif

int main()                      
{
    #ifdef RUN_TESTS_ON_MAKE
        test();
        return 0;
    #endif

    Fraction* frac1 = new_fraction_num(2);
    Fraction* frac2 = new_fraction(2, 3);

    print_fraction(frac1);
    print_fraction(frac2);

    destroy_fraction(frac1);
    destroy_fraction(frac2);

    return 0;                       
}        