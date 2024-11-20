#include <stdio.h>
#define tamanho 10

int main() {
    float *vetor[tamanho];

    for (int i = 0; i < tamanho; i++) {
        printf("O endereco da posicao %d e %p \n", i, vetor[i]);
    }

    return 0;
}