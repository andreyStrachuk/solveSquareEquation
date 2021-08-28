#ifndef CALCULATING_FUNCTIONS_H_INCLUDED
#define CALCULATING_FUNCTIONS_H_INCLUDED

#include <math.h>
#include <assert.h>
#include <stdio.h>
#include "common_functions.h"
#include "display_functions.h"
#include "input_functions.h"

/// Enum type used for determining number of roots
enum numberOfRoots {
    NO_ROOTS,                                   ///< Equation has no roots.
    ROOT_1,                                     ///< Equation has 1 root.
    ROOTS_2,                                    ///< Equation has 2 roots.
    INF_NUMBER                                  ///< Equation has infinite number of roots.
};

/**
    \brief Function designed to calculate roots of square equation.
    \param [out] a a coefficient in square equation, cannot be 0.
    \param [out] b b coefficient in square equation.
    \param [out] c c coefficient in square equation.
    \param [out] x1 pointer to the 1st root of equation.
    \param [out] x2 pointer to the 2nd root of equation.
    \return -1 - input is INCORRECT.
    First, this function calls function correctInputCheck.\n
    If then inputCheckResult equals OK, it decides whether this\n
    is linear or square equation. After that, it calls solveLinearEq or calculateRoots functions.
*/
int solveSqEq (const double a, const double b, const double c, double* x1, double* x2);


/**
    \brief Function designed to calculate roots of square equation
    This function works ONLY with equations where a != 0.
    \param [in] a a coefficient in square equation, cannot be 0.
    \param [in] b b coefficient in square equation.
    \param [in] c c coefficient in square equation.
    \param [out] x1 pointer to the 1st root of equation.
    \param [out] x2 pointer to the 2nd root of equation.

    \return NO_ROOTS - no roots, ROOT_1 - 1 root,
    ROOTS_2 - 2 roots.

    First, this function calculates discriminant of
    equation. Then function detectSignOfDiscr (double D)
    returns number constant. After that, switch decides what case it jumps to
    and run case.

    Formula that calculates roots:\n
    \f$x = (-b +- \sqrt{D})/2a\f$
*/
int calculateRootsOfSqEq (const double a, const double b, const double c, double* x1, double* x2);

/**
    \brief This function solves linear equation.
    \f$bx + c = 0\f$
    \param [in] b b coefficient in linear equation.
    \param [in] c c coefficient in linear equation.
    \param [in] x pointer to the root of equation.
    \return number of roots.

    This function checks coefficients if they are zero's
    and then calculate roots.

    Formula that calculates root:\n
    \f$x = -b/c\f$
*/
int solveLinearEq (const double b, const double c, double* x); // убрать

/**
    \brief This function calculates discriminant.

    \param [in] a a coefficient in square equation, cannot be 0.
    \param [in] b b coefficient in square equation.
    \param [in] c c coefficient in square equation.
    \return value of discriminant.

    The following formula calculates discriminant\n
    \f$D = b^2 - 4ac\f$
*/
double calcDiscriminant (const double a, const double b, const double c);

#endif // CALCULATING_FUNCTIONS_H_INCLUDED
