#include "calculating_functions.h"

double calcDiscriminant (const double a, const double b, const double c) {
    return (b * b - 4 * a * c);
}

int calculateRootsOfSqEq (const double a, const double b, const double c, double* x1, double* x2) {
    assert (x1);
    assert (x2);
    assert (x1 != x2);

    double discriminant = calcDiscriminant (a, b, c);
    int signOfDiscriminant = doubleComp (discriminant, 0);

    switch (signOfDiscriminant) { // compairing with zero
        case LESS : {
            return NO_ROOTS;
        }
        case EQUAL : {
            double root = -b / (2 * a);

            *x1 = minusZeroFix (root);

            return ROOT_1;
        }
        case MORE : {
            double root_1st = NAN;
            double root_2nd = NAN;

            double sqrtOfDiscriminant = sqrt (discriminant);

            if (checkIfZero (c)) {
                root_1st = 0;
                solveLinearEq (a, b, &root_2nd);
            } else {
                root_1st = (-b - sqrtOfDiscriminant) / (2 * a);
                root_2nd = (-b + sqrtOfDiscriminant) / (2 * a);
            }

            *x1 = minusZeroFix (root_1st);
            *x2 = minusZeroFix (root_2nd);

            return ROOTS_2;
        }
        default : {
            printf ("Error: unexpected sign of discriminant — %d.\n", signOfDiscriminant);

            return -1;
        }
    }
}

int solveSqEq (const double a, const double b, const double c, double* x1, double* x2) {
    assert (x1);
    assert (x2);
    assert (x1 != x2);

    if (checkIfZero (a)) {
        return solveLinearEq (b, c, x1);
    }

    return calculateRootsOfSqEq (a, b, c, x1, x2);

    exit (0);
}

int solveLinearEq (const double b, const double c, double* x) {
    assert (x);

    if (checkIfZero (b)) {

        if (checkIfZero (c)) {
            *x = NAN;

            return INF_NUMBER;
        } else {
            *x = NAN;

            return NO_ROOTS;
        }

    } else {
        double root = -c / b;
        *x = minusZeroFix (root);

        return ROOT_1;
    }
}
