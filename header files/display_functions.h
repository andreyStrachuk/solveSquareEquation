#ifndef DISPLAY_FUNCTIONS_H_INCLUDED
#define DISPLAY_FUNCTIONS_H_INCLUDED

#include "calculating_functions.h"
#include <stdio.h>

/**
    \brief This function prints type of error occured during program executing.
    \param [in] code number from enum set resultOfCorrectInput.
    \return type of error occurred in program.
*/
void showError (const int resultOfInput);

/**
    \brief This function display roots.

    \param [in] numberOfRoots contains value from enum numberOfRoots.
    \param [in] x1 1st root.
    \param [in] x2 2nd root.

    This function gets value from enum set numberOfRoots and then display
    roots.
*/
void showRoots (const int numberOfRoots, const double x1, const double x2);

#endif // DISPLAY_FUNCTIONS_H_INCLUDED
