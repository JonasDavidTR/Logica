#include <stdio.h>
/*
    Inverter um número de três algarismos.
*/

int inverter(int num);

int main(){

    int num, numInvertido;
    printf("Numero a ser invertido >> ");
    scanf("%i", &num);

    if (num < 100 || num > 999){
        printf("Por favor, insira um numero de tres digitos.\n");
        return 1;
    }


    numInvertido = inverter(num);
    printf("Numero invertido: %i", numInvertido);

    return 0;
}


int inverter(int num){
    int centena = num / 100;
    int dezena = (num / 10) % 10;
    int unidade = num % 10;

    return (unidade * 100) + (dezena * 10) + centena;
}