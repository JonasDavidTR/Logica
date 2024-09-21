#include <stdio.h>
#include <stdlib.h>

/*
                        Descrição do problema

Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo.
*/

int area(int *area, int base, int altura);
int perimetro(int *perimetroT, int lado);

int main(){

    //declarando variaveis.
    int perimetroT = 0;
    int areaT = 0;
    int base = 10;
    int altura = 10;
    int lado = 10;

    //chamada de funcoes.

    // Area
    area(&areaT, base, altura);
    printf("\nArea: %i", areaT);

    // Perimetro
    perimetro(&perimetroT,lado);
    printf("\nPerimetro: %i", perimetroT);

    return 0;
}


int area(int *area, int base, int altura){
    return *area = base * altura;
}
int perimetro(int *perimetroT, int lado){
    return *perimetroT = lado * 4;
}
