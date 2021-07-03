#include <stdio.h>

int main(void) {
    int n = 0, i = 0, positivo = 0, negativo = 0;
    printf("Informe a quantidade de numeros para armazenar:");
    scanf("%d", &n);
    int vetor[n];

    for (i = 0; i < n; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
        if (vetor[i] > 0) {
            positivo += 1;
        } else {
            negativo += 1;
        }
    }

    printf("Numeros armazenados no vetor: ");
    for (i = 0; i < n; i++) {
        printf("%d | ", vetor[i]);
    }

    printf("\nQuantidade de numeros POSITIVOS: %d\n", positivo);
    printf("Quantidade de numeros NEGATIVOS: %d\n", negativo);
    return 0;
}