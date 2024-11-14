#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho;

    printf("Digite o tamanho do array ");
    scanf("%d", &tamanho);

    int *arr = (int*) malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d numero: \n", i + 1);
        scanf("%d", &arr[i]);
    }
    
    
}