#include <stdio.h>
#include <stdlib.h>
#define TAM 4

void preencheMatriz(int Matriz[TAM][TAM]) {
    printf("Entre abaixo com os elementos da Matriz\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("Elemento linha: %d coluna: %d = ", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }
}

void printMatriz(int Matriz[TAM][TAM]) {
    system("cls || clear");
    printf("=======================\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d\t", Matriz[i][j]);
        }
        printf("\n");
    }
    printf("=======================\n");
}

int getSomaMatriz(int Matriz[TAM][TAM]) {
    int soma = 0;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            soma += Matriz[i][j];
        }
    }
    return soma;
}

int getSomaDiagPrincipal(int Matriz[TAM][TAM]) {
    printf("Elementos diagonal principal: ");
    int somaDiagPrincipal = 0;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i == j) {
                somaDiagPrincipal += Matriz[i][j];
                printf("%d  ", Matriz[TAM][TAM]);
            }
        }
    }
    printf("\n");
    return somaDiagPrincipal;
}

int main(void) {
    int Matriz[TAM][TAM];
    preencheMatriz(Matriz);
    printMatriz(Matriz);
    printf("Soma da Matriz: %d\n", getSomaMatriz(Matriz));
    printf("Soma Diagonal Principal da Matriz: %d\n", getSomaDiagPrincipal(Matriz));
    return 0;
}
