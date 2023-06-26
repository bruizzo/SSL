#include <stdio.h>
#include "Conversion.h"

float celsius (float tempFahr) {
    float tempCelsius;
    tempCelsius = (tempFahr - 32.0) * (5.0 / 9.0);
    return tempCelsius;
}

float fahrenheit (float tempCelsius) {
    float tempFahr;
    tempFahr = (tempCelsius * (9.0 / 5.0)) + 32.0;
    return tempFahr;
}