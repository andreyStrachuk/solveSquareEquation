#ifndef INPUT_FUNCTIONS_H_INCLUDED
#define INPUT_FUNCTIONS_H_INCLUDED

#include <assert.h>
#include <stdio.h>
#include "common_functions.h"

/// Enum type used for detecting an error in input
enum resultOfInput {
    lackOfThreeNumbers,                         ///< Input doesn't contain 3 numbers.
    presenceOfInvChar,                          ///< Input contains char symbols.
    OK                                          ///< Input is correct.
};

/**
    \brief This function returns error code if input is incorrect.
    \param a a coefficient.
    \param b b coefficient.
    \param c c coefficient.
    \return inputCheckResult - constant from enum set resultOfInput.

    Function initializes variable amountOfInputNumbers with\n
    the number of correctly retrieved numbers. If it is less\n
    than 3, function returns lackOfThreeNumbers. If the input\n
    contains char symbol, it returns presenceOfInvChar. Else,
    it returns OK.
*/
int inputAndCheck (double* a, double* b, double* c);

#endif // INPUT_FUNCTIONS_H_INCLUDED
