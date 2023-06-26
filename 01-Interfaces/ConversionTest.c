#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

int main ( ) {

    assert (celsius(5.0) == -15.0);
    assert (celsius(23.0) == -5.0);
    assert (celsius(104.0) == 40.0);
    assert (fahrenheit(0.0) == 32.0);
    assert (fahrenheit(50.0) == 122.0);
    assert (fahrenheit(100.0) == 212.0);

    return 0;
}