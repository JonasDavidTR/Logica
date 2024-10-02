#include <stdio.h>
#include <math.h>

/*
                                Descrição do problema

Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma.
    Area = 3,14 = r**2
    P = 2 * 3,14 * raio
*/

float area(float pi, float raio);
float perimetro(float pi, float raio);

int main(){

    float pi = 3.14;
    float raio = 5;


    float areaT = area(pi, raio);
    float perimetroT = perimetro(pi, raio);


    printf("\nArea: %.2f", areaT);
    printf("\nPerimetro: %.2f", perimetroT);

    
    return 0;
}


float area(float pi, float raio){
    return pi * (pow(raio, 2));
}

float perimetro(float pi, float raio){
    return 2 * pi * raio;
}
