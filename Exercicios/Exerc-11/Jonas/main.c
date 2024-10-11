#include <stdio.h>
/*
    Calcular a média aritmética entre duas notas bimestrais de um aluno.
*/


int main(){

    int a,b, media;

    printf("Digite a nota do primeiror bimestre: ");
    scanf("%i", &a);
    printf("\nDigite a nota do segundo bimestre: ");
    scanf("%i", &b);

    media = (a + b) / 2;
    printf("media bimestral: %i", media);

    return 0;
}
