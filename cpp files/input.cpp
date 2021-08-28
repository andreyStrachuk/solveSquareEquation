#include "input_functions.h"

int inputAndCheck (double* a, double* b, double* c) {
    assert (a);
    assert (b);
    assert (c);
    assert (a != b);
    assert (b != c);
    assert (a != c);

    int amountOfInputNumbers = scanf ("%lg %lg %lg", a, b, c);
    int checkLastSymbol = getchar ();

    if (amountOfInputNumbers != 3) {
        return lackOfThreeNumbers;
    }
    else if (checkLastSymbol > ' ') {
        return presenceOfInvChar;
    }
    else if (checkLastSymbol == '\n') {
        return OK;
    } else {
        cleanBuffer ();
        return OK;
    }
}
