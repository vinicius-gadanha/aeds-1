#include <stdio.h>

void preencheMatriz(int Matriz[4][3]) {
    printf("Entre abaixo com os elementos da Matriz\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento linha: %d coluna: %d = ", i, j);
            scanf("%d", &Matriz[i][j]);
        }
    }
}

void printMatriz(int Matriz[4][3]) {
    system("cls || clear");
    printf("=======================\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", Matriz[i][j]);
        }
        printf("\n");
    }
    printf("=======================\n");
}

int getSomaMatriz(int Matriz[4][3]) {
    int soma = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            soma += Matriz[i][j];
        }
    }
    return soma;
}

void getPosicaoMatriz(int num, int Matriz[4][3]) {
    int col = 0, lin = 0, numero = 0;
    numero = num;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (numero = Matriz[i][j]) {
                lin = i;
                col = j;
            }
        }
    }
    printf("Posicao do NUMERO %d na Matriz: Linha %d | Coluna %d\n", numero, lin, col);
}

void getN_MaiorMatriz(int Matriz[4][3]) {
    int maior = 0;
    maior = Matriz[1][1];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (maior < Matriz[i][j]) {
                maior = Matriz[i][j];
            }
        }
    }
    printf("Numero Maior: %d\n", maior);
    getPosicaoMatriz(maior, Matriz[4][3]);
}

void getN_MenorMatriz(int Matriz[4][3]) {
    int menor = 0;
    menor = Matriz[1][1];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (menor > Matriz[i][j]) {
                menor = Matriz[i][j];
            }
        }
    }
    printf("Numero Menor: %d\n", menor);
    getPosicaoMatriz(menor, Matriz[4][3]);
}

int main(void) {
    int matriz[4][3];
    preencheMatriz(matriz);
    printMatriz(matriz);
    printf("Soma da Matriz: %d\n", getSomaMatriz(matriz));
    getN_MaiorMatriz(matriz);
    getN_MenorMatriz(matriz);
}