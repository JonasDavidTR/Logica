#include <stdio.h>

/*
Calcular a altura de um prédio utilizando o tamanho de sua sombra e a sua altura.

    Suponha que:

    A altura da pessoa é de 1.8 metros.
    O comprimento da sombra da pessoa é 1.2 metros.
    O comprimento da sombra do prédio é 10 metros.
    
    alturaPredio = (alturaPessoa * comprimentoSombraPredio) / comprimentoSombraPessoa
    com os valores ficaria:
        alturaPredio = (1.8 * 10) / 1.2
*/

float alturaPredio(float alturaPessoa, float sombraPredio, float sombraPessoa);

int main(){
    float alturaPessoa = 1.8;
    float sombraPredio = 10;
    float sombraPessoa = 1.2;

    printf("%0.1f", alturaPredio(alturaPessoa, sombraPredio, sombraPessoa));

    return 0;
}

float alturaPredio(float alturaPessoa, float sombraPredio, float sombraPessoa){

    float alturaPredio;
    return alturaPredio = (alturaPessoa * sombraPredio) / sombraPessoa;
}