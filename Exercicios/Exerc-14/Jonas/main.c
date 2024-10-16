#include <stdio.h>

/*Informar o tempo para abrir semáforos sincronizados de acordo com a distância entre eles.*/

int main(){
    float velocidade, distancia, tempo;

    printf("\nInforme a distancia entre os semaforos: (em metros). ");
    scanf("%f", &distancia);
    printf("\ninforme a velocidade do veiculo: (em m/s). ");
    scanf("%f", &velocidade);

    //calculo do tempo para percorrer a distância de um semaforo à outro.
    if(velocidade > 0){
        tempo = distancia / velocidade; //em segundos 
        printf("\nTempo necessario para abrir os semaforos: %.2f segundos\n", tempo);
    }else{
        printf("\nA velocidade deve ser maio que zero.");
    }

    return 0;
}