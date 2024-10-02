#include <stdio.h>

/*
                            Descrição do problema
Ler um número inteiro e exibir o seu sucessor.
*/

int sucessor(int num);

int main(){

    int num = 10;

    int sucessorN = sucessor(num);

    printf("\nO sucessor de %i e: %i",num, sucessorN);

    return 0;
}

int sucessor(int num){
    return num + 1;
}