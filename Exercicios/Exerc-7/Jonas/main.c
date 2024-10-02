#include <stdio.h>

/*
Solicitar a idade de uma pessoa em dias e informar na tela a idade em anos, meses e dias.
*/

int main(){

    int idadeEmDias, anos, meses, dias;

    // Solicita a idade em dias
    printf("Digite a idade em dias: ");
    scanf("%d", &idadeEmDias);

    // Calcula anos, meses e dias
    anos = idadeEmDias / 365;
    idadeEmDias %= 365;
    meses = idadeEmDias / 30;
    dias = idadeEmDias % 30;

    printf("Idade: %d anos, %d meses, %d dias\n", anos, meses, dias);

    return 0;
}
