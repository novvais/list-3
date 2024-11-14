#include <stdio.h>
#include <stdlib.h>

int reading(int *number1, int *number2, int *number3) {
    if(*number1 == *number2 && *number2 == *number3) {
        return 1;
    }

    int temp;

    if(*number1 > *number2) {
        temp = *number1;
        *number1 = *number2;
        *number2 = temp;
    }

    if(*number2 > *number3) {
        temp = *number2;
        *number2 = *number3;
        *number3 = temp;
    }

    return 0;
}

int main() {
    int *numbers = (int*) malloc(3 * sizeof(int));

    for(int i = 0; i < 3; i++) {
        printf("Digite o %d numero: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    int retorno = reading(&numbers[0], &numbers[1], &numbers[2]);

    if(retorno == 1) {
        return printf("Os numeros sao todos iguais: %d, %d, %d ", numbers[0], numbers[1], numbers[2]);
    }

    if(retorno == 0) {
        return printf("A sequencia crescente dos numeros e: %d, %d, %d", numbers[0], numbers[1], numbers[2]);
    }

    return 0;
}