#include <stdio.h>
#include <cfloat>
#include "common_functions.h"

int doubleComp (const double value_1, const double value_2) {
    double epsilon = calculateMachineEpsilon ();
    if (fabs (value_2 - value_1) <= epsilon) {
        return EQUAL;
    }
    else if (value_1 > value_2) {
        return MORE;
    } else {
        return LESS;
    }
}

bool checkIfZero (const double value) {
    if (doubleComp (0, value) == EQUAL) {
        return true;
    } else {
        return false;
    }
}

double minusZeroFix (const double value) {
    if (doubleComp (0, value) == EQUAL) {
        return fabs (value);
    }

    return value;
}

double calculateMachineEpsilon () {
    double epsilon = 1.0;

    while ((1 + epsilon) > 1) {
        epsilon /= 2;
    }

    return epsilon;
}

void cleanBuffer () {
    while (getchar () != '\n') ;
}
