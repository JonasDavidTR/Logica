#include <stdio.h>

/*
Converter um inteiro menor que 32 para sua representação em binário.
*/

int main(){

    int num;

    printf("Digite um numero menor que 32: ");
    scanf("%i", &num);

    if(num >= 32){
        printf("O numero tem que ser menor que 32\n");
        return 1;
    }


    for(int i = 4; i >= 0; i--){
        int bit = (num >> i) & 1;
        printf("%i", bit);
    }

    return 0;
}