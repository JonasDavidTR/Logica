#include <stdio.h>

int converte(int ms);

int main() {
    int resultado = converte(5);
    printf("%d km/h\n", resultado);
    return 0;
}

int converte(int ms) {
    int velocidadeEmKM = ms * 3.6;
    return velocidadeEmKM;
}