#include <stdio.h>

/*
    Transformar uma velocidade fornecida em m/s para km/h.

    ** 1 m/s == 3.6 km/h
*/

int main(){

    float ms, km;

    printf("Digite um valor: ");
    scanf("%f", &ms);

    km = ms * 3.6;

    printf("%.2f m/s equivale a %.2f km/h", ms, km);


    return 0;
}