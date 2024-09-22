#include <stdio.h>

/*
                            Descrição do Problema

Dado os três lados de um triângulo, determinar o perímetro do mesmo.
    P = a + b + c
*/

int perimetro(int a, int b, int c);

int main(){

    //lados do triangulo
    int a = 7, b = 10, c = 10;


    int perimetroT = perimetro(a, b, c);

    printf("\nPerimetro: %i", perimetroT);

    return 0;
}

int perimetro(int a, int b, int c){
    return a + b + c;
}
