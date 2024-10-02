#include <stdio.h>

/*
Converter um valor de temperatura em Fahrenheit para Celsius.
*/

int main(){

    int fahrenheit;
    float celsius;

    // Informe os graus em Fahrenheit
    printf("\nGraus em Fahrenheit: ");
    scanf("%i", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

    printf("\n%i Graus Fahrenheit equivale a %.2f graus Celsius\n", fahrenheit, celsius);

    return 0;
}
