#include <stdio.h>
#include <string.h>
#include "Conversion.h"

void printTablaCelsius (int cotaInferior, int cotaSuperior, int intervalo);
void printTablaFahrenheit (int cotaInferior, int cotaSuperior, int intervalo);
void printFila (float valor, float valorConvertido);
void printFilas (int cotaInferior, int cotaSuperior, int intervalo, char* tabla );

int main ( ) {

    const int cotaInferiorCelsius = 0;
    const int cotaSuperiorCelsius = 300;
    const int intervaloCelsius = 20;

    const int cotaInferiorFahrenheit = 0;
    const int cotaSuperiorFahrenheit = 100;
    const int intervaloFahrenheit = 10;

    printTablaCelsius (cotaInferiorCelsius, cotaSuperiorCelsius, intervaloCelsius);
    printf ("\n\n\n");
    printTablaFahrenheit (cotaInferiorFahrenheit, cotaSuperiorFahrenheit, intervaloFahrenheit);

    return 0;
}

void printTablaCelsius (int cotaInferior, int cotaSuperior, int intervalo) {
    printf ("Tabla de Fahrenheit a Celsius\n");
    printf ("-----------------------------\n");
    printFilas (cotaInferior, cotaSuperior, intervalo, "Celsius");
    printf ("-----------------------------\n");
    return;
}

void printTablaFahrenheit (int cotaInferior, int cotaSuperior, int intervalo) {
    printf ("Tabla de Celsius a Fahrenheit\n");
    printf ("-----------------------------\n");
    printFilas (cotaInferior, cotaSuperior, intervalo, "Fahrenheit");
    printf ("-----------------------------\n");
    return;
}

void printFila (float valor, float valorConvertido) {
    printf ("%3.0f %6.1f \n", valor, valorConvertido);
    return;
}

void printFilas (int cotaInferior, int cotaSuperior, int intervalo, char* tabla ) {
    float temp;
    if (strcmp (tabla, "Celsius") == 0) {
        for (temp = cotaInferior; temp <= cotaSuperior; temp = temp + intervalo){
            printFila(temp, celsius (temp));
        }
    }
    if (strcmp (tabla, "Fahrenheit") == 0) {
        for (temp = cotaInferior; temp <= cotaSuperior; temp = temp + intervalo){
            printFila(temp, fahrenheit (temp));
        }
    }
    return;
}