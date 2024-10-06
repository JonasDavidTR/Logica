#include <stdio.h>
/*
Calcular volume de uma lata de óleo, dado seu raio e sua altura.
*/

int main(){
    
    const float pi = 3.14;
    float volume, r, h;

    printf("Digite o valor do raio: ");
    scanf("%f", &r);
    printf("\nDigite o valor da altura: ");
    scanf("%f", &h);

    volume = pi * (r * r) * h;
    printf("O volume da lata e: %.1f", volume);

    return 0;
}