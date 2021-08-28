#include "unit_test_functions.h"

void rootLinTest (const double b, const double c, const double x_r, double* x_p) {
    *x_p = NAN;
    int result = solveLinearEq (b, c, x_p);

    assert (x_p);

    static int numberOfLinTest = 0;

    if (result == NO_ROOTS) {

    printf ("Test number: %d\n"
            "Input: %lg, %lg\n"
            "Expected: no roots\n", numberOfLinTest, b, c);

        if (isnan (*x_p)) {
            printf ("Output: no roots\n");
            printf ("Succeed.\n\n");
        } else {
            printf ("Output: root —— %lg\n", *x_p);
            printf ("Failed.\n\n");
        }
    }
    if (result == ROOT_1) {

        printf ("Test number: %d\n"
                "Input: %lg, %lg\n"
                "Expected: %lg\n"
                "Output: roots —— %lg\n", numberOfLinTest, b, c, x_r, *x_p);

        if (doubleComp (x_r, *x_p) == EQUAL) {
            printf ("Succeed.\n\n");
        } else {
            printf ("Failed.\n\n");
        }
    }
    if (result == INF_NUMBER) {

        printf ("Test number: %d\n"
                "Input: %lg, %lg\n"
                "Expected: inifinite number of roots\n", numberOfLinTest, b, c);

        if (isnan (*x_p)) {
            printf ("Output: inifinite number of roots\n");
            printf ("Succeed.\n\n");
        } else {
            printf ("Output: root —— %lg\n\n", *x_p);
            printf ("Failed.\n\n");
        }
    }

    numberOfLinTest++;
}

void rootsSqTest (const double a, const double b, const double c, const double x1_r, const double x2_r, double* x1_p, double* x2_p) {
    *x1_p = NAN;
    *x2_p = NAN;

    int result = solveSqEq (a, b, c, x1_p, x2_p);

    assert (x1_p);
    assert (x2_p);

    static int numberOfSqTest = 0;

    if (result == ROOT_1) {

        printf ("Test number: %d\n"
                "Input: %lg, %lg, %lg\n"
                "Expected: %lg\n"
                "Output: roots —— %lg\n", numberOfSqTest, a, b, c, x1_r, *x1_p);

    if (doubleComp (x1_r, *x1_p)) {

        printf ("Succeed.\n\n");
        } else {
            printf ("Failed.\n\n");
        }
    }
    if (result == ROOTS_2) {

        printf ("Test number: %d\n"
                "Input: %lg, %lg, %lg\n"
                "Expected: roots —— %lg, %lg\n"
                "Output: roots —— %lg, %lg\n", numberOfSqTest, a, b, c, x1_r, x2_r, *x1_p, *x2_p);

        if (doubleComp (x1_r, *x1_p) == EQUAL && doubleComp (x2_r, *x2_p) == EQUAL) {
            printf ("Succeed.\n\n");
        } else {
            printf ("Failed.\n\n");
        }
    }
    if (result == NO_ROOTS) {

        printf ("Test number: %d\n"
                "Input: %lg, %lg, %lg\n"
                "Expected: no roots\n", numberOfSqTest, a, b, c);

        if (isnan(*x1_p) && isnan(*x2_p)) {
            printf ("Output: no roots\n");
            printf ("Succeed.\n\n");
        } else {
            printf ("Output: roots — %lg, %lg\n", *x1_p, *x2_p);
            printf ("Failed.\n\n");
        }
    }

    numberOfSqTest++;
}

void unitTestSolveSqEq (void) {
    printf ("unitTestCalcRoots started!\n\n");

    double x1 = NAN;
    double x2 = NAN;

    rootsSqTest (4.0, 4.0, 1.0, -0.5, NAN, &x1, &x2);
    rootsSqTest (4.0, 4.0, 4.0, NAN, NAN, &x1, &x2);
    rootsSqTest (0.0, 0.0, 0.0, NAN, NAN, &x1, &x2);
    rootsSqTest (1.0, 5.0, 6.0, -3.0, -2.0, &x1, &x2);
}

void unitTestSolveLinEq (void) {
    printf ("\n" "unitTestSolveLinEq started!\n\n");

    double x = NAN;

    rootLinTest (5.0, 5.0, -1.0, &x);
    rootLinTest (0.0, 0.0, NAN, &x);
    rootLinTest (5.0, 0.0, 0.0, &x);
    rootLinTest (6.0, 2.0, -0.333333333333333333333333333333, &x);
}
