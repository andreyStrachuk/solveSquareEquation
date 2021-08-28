#include "display_functions.h"

void showError (const int resultOfInput) {
    switch (resultOfInput) {
        case lackOfThreeNumbers : {
            printf ("Error: enter 3 numbers\n");
            break;
        }
        case presenceOfInvChar : {
            printf ("Error: your input data contains invalid symbols\n");
            break;
        }
        default : {
            printf ("Unexpected error\n");
        }
    }
}

void showRoots (const int numberOfRoots, const double x1, const double x2) {
    switch (numberOfRoots) {
        case NO_ROOTS : {
            printf ("Number of roots: %d\n", NO_ROOTS);
            break;
        }
        case ROOT_1 : {
            printf ("Number of roots: %d\n"
                    "Root: %lg\n", ROOT_1, x1);
            break;
        }
        case ROOTS_2 : {
            printf ("Number of roots: %d\n"
                    "Roots: %lg, %lg\n", ROOTS_2, x1, x2);
            break;
        }
        case INF_NUMBER : {
            printf ("Infinite number of roots\n");
            break;
        }
        default : {
            printf ("Unexpected number of roots\n");
        }
    }
}
