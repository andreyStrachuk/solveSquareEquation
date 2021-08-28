#include <stdio.h>
#include <stdlib.h>
#include "input_functions.h"
#include "calculating_functions.h"
#include "unit_test_functions.h"

/**
    Define that activates unit tests
*/
//#define NDEBUG_MODE

/**
    Program that solves square equation\n
    \f$ax^2 + bx + c = 0\f$
*/
int main () {
    double a  = NAN;
    double b  = NAN;
    double c  = NAN;
    double x1 = NAN;
    double x2 = NAN;

    #ifdef NDEBUG_MODE
         unitTestSolveSqEq ();
         unitTestSolveLinEq ();
    #endif

    printf ("Enter coefficients a, b and c:\n");
    int inputCheckResult = inputAndCheck(&a, &b, &c);

    if (inputCheckResult == OK) {
        int result = solveSqEq (a, b, c, &x1, &x2);

        showRoots (result, x1, x2);
    } else {
        showError (inputCheckResult);
    }

    return 0;
}



