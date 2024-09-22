#include <stdio.h>

/*
Ler dois números inteiros e exibir o quociente e o resto da divisão inteira entre eles.
*/

int main(){
    int num1 = 10;
    int num2 = 2;
    int resto = num1 % num2;
    int resultado = num1 / num2;

    printf("\nO resultado da divisao de %i por %i e: %i com resto: %i", num1, num2, resultado,resto);

    return 0;
}

