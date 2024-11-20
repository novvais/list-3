#include <stdio.h>
#include <stdlib.h>

int definirTamanhoArr(int *tamanhoA, int *tamanhoB) {
    printf("Qual vai ser o tamanho do primeiro array? ");
    scanf("%d", tamanhoA);

    printf("Qual vai ser o tamanho do segundo array? ");
    scanf("%d", tamanhoB);

    if (*tamanhoA != *tamanhoB) {
        return 0;
    }

    return 2;
}

void preencherArr(int *arr, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", arr + i);

        printf("\n");
    }
}

int somarArrs(int *arrA, int *arrB, int *arrC, int tamanhoA) {
    int *ptrA = arrA;
    int *ptrB = arrB;
    int *ptrC = arrC;
    int i = 0;

    do {
        *ptrC = *ptrA + *ptrB;

        ptrA++;
        ptrB++;
        ptrC++;

        i++;
    } while (i < tamanhoA);
    
    return 1;
}

int main() {
    int tamanhoA, tamanhoB, verificacao;

    verificacao = definirTamanhoArr(&tamanhoA, &tamanhoB);

    if (verificacao == 0) {
        printf("O tamanho dos dois arrays eh diferente. ");

        return 1;
    }

    int *arrA = (int*) malloc(tamanhoA * sizeof(int));
    int *arrB = (int*) malloc(tamanhoB * sizeof(int));
    int *arrC = (int*) malloc(tamanhoA * sizeof(int));

    if (arrA == NULL || arrB == NULL || arrC == NULL) {
        printf("Erro: Falha ao alocar memória.\n");

        free(arrA); free(arrB); free(arrC); 

        return 1;
    }

    printf("Preenchendo o primeiro array: \n\n");
    preencherArr(arrA, tamanhoA);

    printf("Preenchendo o segundo array: \n\n");
    preencherArr(arrB, tamanhoB);
    
    somarArrs(arrA, arrB, arrC, tamanhoA);

    printf("A soma foi concluida: \n");

    for (int i = 0; i < tamanhoA; i++) {
        printf("%d ", *(arrC + i));
    }

    printf("\n");
    
    return 0;
}
