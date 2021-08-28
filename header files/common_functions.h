#ifndef COMP_FUNCTIONS_H_INCLUDED
#define COMP_FUNCTIONS_H_INCLUDED

#include <math.h>

/// Enum type used for comparing two double values
enum resultOfCompareTwoDoubles {
    LESS,                                       ///< 1st number is less than 2nd.
    EQUAL,                                      ///< Numbers are equal.
    MORE                                        ///< 1st numbers is bigger than 2nd.
};

/**
    \brief This function compares 2 double values.

    \param [in] value_1 1st value to compare.
    \param [in] value_2 2nd value to compare.
    \return number constant from enum set resultOfCompareTwoDoubles.

    This function compares 2 double values and returns
    number constant from enum set resultOfCompareTwoDoubles.
*/
int doubleComp (const double value_1, const double value_2);

/**
    \brief Function that detects if double value is zero.
    \param [in] value value
    \return true if value equals zero, false if not.
*/
bool checkIfZero (const double value);

/**
    \brief Function designed to fix bug with -0.

    \param [in] x value that may be -0.0.
    \return value if it is not a -0.0, 0 if it is -0.
    This function compares x with zero and if they are similar,
    function returns absolute value of x. If they aren't, it just
    returns x.
*/
double minusZeroFix (const double value);

/**
    \brief This function calculates machine epsilon
*/
double calculateMachineEpsilon (void);

/**
    \brief This function clears buffer
*/
void cleanBuffer ();

#endif // COMP_FUNCTIONS_H_INCLUDED
