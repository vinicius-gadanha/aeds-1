#include <stdio.h>

void printf_vetor(int n, int *vetor) {
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("%d | ", vetor[i]);
    }
    printf("\n");
}

int main(void) {
    int vetorOriginal[10], vetorInvertido[10], i = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetorOriginal[i]);
        vetorInvertido[9 - i] = vetorOriginal[i];
    }

    printf("Original:  ");
    printf_vetor(10, vetorOriginal);
    printf("Invertido: ");
    printf_vetor(10, vetorInvertido);

    return 0;
}