#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int mat[4][5], vet[5], L, C, i, soma = 0;

    for (L = 0; L < 4; L++) {
        for (C = 0; C < 5; C++) {
            printf("Digite o valor [%d][%d]:", L, C);
            scanf("%d", &mat[L][C]);
        }
    }

    for (C = 0; C < 5; C++) {
        for (L = 0; L < 4; L++) {
            soma += mat[L][C];
        }
        vet[C] = soma;
        soma = 0;
    }

    printf("Valores da matriz: ");
    for (L = 0; L < 4; L++) {
        printf("\n");
        for (C = 0; C < 5; C++) {
            printf(" %d | ", mat[L][C]);
        }
    }

    printf("\nValores do vetor maiores que 10: ");
    for (i = 0; i < 5; i++) {
        if (vet[i] > 10) {
            printf(" %d | ", vet[i]);
        }
    }

    return 0;
}