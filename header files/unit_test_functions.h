#ifndef UNIT_TEST_FUNCTIONS_H_INCLUDED
#define UNIT_TEST_FUNCTIONS_H_INCLUDED

#include <stdio.h>
#include "calculating_functions.h"
#include "display_functions.h"
#include "common_functions.h"
#include "input_functions.h"
#include "unit_test_functions.h"

/**
    Function designed to test function calculateRoots
    \param void

    Function checks all 3 variants of calculateRoots function return value.
*/
void unitTestSolveSqEq (void);

/**
    Function designed to test function solveLinearEq
    \param void

    Function checks all 3 variants of solveLinearEq function return value.
*/
void unitTestSolveLinEq (void);

/**
    Function checks if function solveSqEq works properly.
    \param [in] a a coefficient
    \param [in] b b coefficient
    \param [in] c c coefficient
    \param [in] x1_r real value of 1st root
    \param [in] x2_r real value of 2nd root
    \param [in] x1 pointer to the x1
    \param [in] x2 pointer to the x2
*/
void rootsSqTest (double a, double b, double c, double x1_r, double x2_r, double* x1, double* x2);

/**
    Function checks if function solveLinEq works properly.
    \param [in] b b coefficient
    \param [in] c c coefficient
    \param [in] x_r real value of root
    \param [in] x pointer to the x
*/
void rootLinTest (double b, double c, double x_r, double* x_p);

#endif // UNIT_TEST_FUNCTIONS_H_INCLUDED
