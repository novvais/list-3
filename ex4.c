#include <stdio.h>
#include <stdlib.h>

void printArr(int *arr, int tamanho) {
    int *ptr = arr;
    int i = 0;

    do {
        printf("Valor: %d \n", *ptr);
        ptr++;

        i++;
    } while (i < tamanho);
}

void preencherArr(int *arr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &arr[i]);

        printf("\n");
    }
}

int main() {
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int *arr = (int*) malloc(tamanho * sizeof(int));

    preencherArr(arr, tamanho);
    
    printArr(arr, tamanho);

    return 0;
}