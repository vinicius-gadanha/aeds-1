#include <stdio.h>

int main(void) {
    int vetor[6], i, par = 0, impar = 0;

    for (i = 0; i < 6; i++) {
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);
    }

    printf("Valores Pares:  ");
    for (i = 0; i < 6; i++) {
        if ((vetor[i] % 2) == 0) {
            par += 1;
            printf("%d | ", vetor[i]);
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", par);

    printf("Valores Impares:  ");
    for (i = 0; i < 6; i++) {
        if ((vetor[i] % 2) != 0) {
            impar += 1;
            printf("%d | ", vetor[i]);
        }
    }
    printf("\nQuantidade de numeros pares: %d\n", impar);

    return 0;
}