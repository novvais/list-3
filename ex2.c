#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = (int*) malloc(5 * sizeof(int));

    for (int j = 0; j < 5; j++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[j]);
    }

    for(int i = 0; i < 5; i++) {
        if (vetor[i] % 2 == 0) {
            printf("O endereco do numero %d na posicao %d e: %p \n", vetor[i], i, (void*)&vetor[i]);
        }
    }

    return 0;
}