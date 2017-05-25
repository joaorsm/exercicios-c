#include "stdio.h"
#include "stdlib.h"

int main() {
    int v[10], indice, numero, indice2;
    numero = 2;
    indice = 0;

    while(indice < 10) {
        v[indice] = numero;
        indice = indice + 1;
        numero = numero + 2;
    }
    for(indice2 = 0; indice2 < 10; indice2++) {
        printf("Posicao v[%d] = %d \n", indice2, v[indice2]);
    }
    system("pause");
    return 0;
}