/*Escreva um programa em C para preencher e calcular a soma de todos os elementos em uma matriz*/

#include <stdio.h>
#include <stdlib.h>
#define TAM 3
#define LIN1 3
#define LIN2 2
#define COL1 2
#define COL2 3

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
    int somaDiagPrincipal = 0;
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            if (i == j) {
                somaDiagPrincipal += Matriz[i][j];
            }
        }
    }
    return somaDiagPrincipal;
}

int getSomaDiagSecundaria(int Matriz[TAM][TAM]) {
    int somaDiagSecundaria = 0;
    for (int i = 0, j = TAM - 1; i < TAM; i++, j--) {
        somaDiagSecundaria += Matriz[i][j];
    }
    return somaDiagSecundaria;
}

int main(void) {
    int Matriz[TAM][TAM];
    preencheMatriz(Matriz);
    printMatriz(Matriz);
    printf("Soma da Matriz: %d\n", getSomaMatriz(Matriz));
    printf("Soma Diagonal Principal da Matriz: %d\n", getSomaDiagPrincipal(Matriz));
    printf("Soma Diagonal Secundaria da Matriz: %d\n", getSomaDiagSecundaria(Matriz));

    // int Matriz1[LIN1][COL1] = {{1, 1}, {2, 2}, {3, 3}};
    // int Matriz2[LIN2][COL2] = {{1, 1, 1}, {1, 1, 1}};

    // int Matriz[2][2];
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         Matriz[i][j] = 0;
    //         for (int k = 0; k < 3; k++) {
    //             Matriz[i][j] += Matriz1[k][i] * Matriz2[j][k];
    //         }
    //     }
    // }
    // printf("=====================\n");
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         printf("%d\t", Matriz[i][j]);
    //     }
    //     printf("\n");
    // }
    // printf("=====================\n");
    return 0;
}