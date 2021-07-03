#include <stdio.h>
#include <string.h>

int main(void) {
    char vetor1[20], vetor2[20], vetor1_auxiliar[20], vetor2_auxiliar[20];
    int i = 0, j = 0;

    printf("VETOR 1:\n");
    for (i = 0; i < 20; i++) {
        printf("Digite um caracter:");
        scanf(" %c", &vetor1[i]);
    }

    printf("VETOR 2:\n");
    for (i = 0; i < 20; i++) {
        printf("Digite um caracter:");
        scanf(" %c", &vetor2[i]);
    }

    for (i = 0; i < 20; i++) {
        vetor1_auxiliar[i] = vetor1[i];
        vetor2_auxiliar[i] = vetor2[i];
    }

    for (i = 0, j = 19; i < 20; i++, j--) {
        vetor1[i] = vetor2_auxiliar[j];
    }
    for (i = 0, j = 19; i < 20; i++, j--) {
        vetor2[i] = vetor1_auxiliar[j];
    }

    printf("\nVetor 1: ");
    for (i = 0; i < 20; i++) {
        printf("%c | ", vetor1_auxiliar[i]);
    }
    printf("\nVetor 1 DEPOIS: ");
    for (i = 0; i < 20; i++) {
        printf("%c | ", vetor1[i]);
    }
    printf("\n\nVetor B: ");
    for (i = 0; i < 20; i++) {
        printf("%c | ", vetor2_auxiliar[i]);
    }
    printf("\nVetor 2 DEPOIS: ");
    for (i = 0; i < 20; i++) {
        printf("%c | ", vetor2[i]);
    }

    return 0;
}