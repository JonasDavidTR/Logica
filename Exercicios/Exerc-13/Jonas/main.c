#include <stdio.h>

/*Calcular a resistência equivalente de um circuito composto por três resistências.*/

#define N 3 //Numero total de Resistencias definida por N

int resEqSerie(int res[N]);
float resEqParalelo(int res[N]);

int main(){

    int resistencias[N] = {18, 30, 7};
    printf("\nValores: ");
    for(int i = 0; i < N; i++){
        printf("%i", resistencias[i]);
        if(i < N - 1){
            printf(",");
        }
    }
    printf("\nResistencia equivalente em serie    : %i", resEqSerie(resistencias));
    printf("\nResistencia equivalente em paralelo : %.2f", resEqParalelo(resistencias));

    return 0;
}

float resEqParalelo(int res[N]){
    float valor = 0.0;
    for(int i = 0; i < N; i++){
        valor = valor + (1.0 / res[i]);
    }
    if(valor != 0){
        return 1 / valor;
    }else{
        printf("\nErro: divisao por zero.");
        return 0;
    }
}

int resEqSerie(int res[N]){
    int valor = 0;
    for(int i = 0; i < N; i++){
        valor = valor + res[i];
    }
    return valor;
}