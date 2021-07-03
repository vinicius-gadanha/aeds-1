#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int numero_votos = 10;

typedef struct Chapa {
    char nome[30], nomeResponsavel[30];
    int numVotos;
} Chapa;

void cadastroChapa(Chapa *chapa) {
    fflush(stdin);
    printf("Informe seu nome: ");
    gets(&chapa->nome);
    fflush(stdin);
    printf("Informe o nome do responsavel:");
    gets(&chapa->nomeResponsavel);
    chapa->numVotos = 0;
}

void printChapa(Chapa *chapa) {
    printf("Nome: %s\n", chapa->nome);
    printf("Nome do Responsavel: %s\n", chapa->nomeResponsavel);
    printf("Numero de Votos: %d\n", chapa->numVotos);
}

int main(void) {
    Chapa chapa1, chapa2;
    int i = 0, numChapa = 0;

    // for (i = 0; i < 30; i++) {
    //     memset(chapa1.nome[i], 0, sizeof(chapa1.nome[i]));
    //     memset(chapa1.nomeResponsavel[i], 0, sizeof(chapa1.nomeResponsavel[i]));
    //     memset(chapa2.nome[i], 0, sizeof(chapa2.nome[i]));
    //     memset(chapa2.nomeResponsavel[i], 0, sizeof(chapa2.nomeResponsavel[i]));
    // }

    printf("Chapa 1:\n");
    cadastroChapa(&chapa1);
    printf("Chapa 2:\n");
    cadastroChapa(&chapa2);

    printf("Informe os votos:\n");
    printf("[1] = %s\n", chapa1.nome);
    printf("[2] = %s\n", chapa2.nome);
    for (i = 0; i < numero_votos; i++) {
        printf("Digite seu voto:");
        scanf("%d", &numChapa);
        if (numChapa == 1) {
            chapa1.numVotos += 1;
        } else if (numChapa == 2) {
            chapa2.numVotos += 1;
        }
    }

    if (chapa1.numVotos == chapa2.numVotos) {
        printf("EMPATE nos VOTOS!\n");
        printChapa(&chapa1);
        printf("=======================\n");
        printChapa(&chapa2);
    } else if (chapa1.numVotos > chapa2.numVotos) {
        printf("CHAPA CAMPEA!!!\n");
        printChapa(&chapa1);
    } else if (chapa1.numVotos < chapa2.numVotos) {
        printf("CHAPA CAMPEA!!!\n");
        printChapa(&chapa2);
    }

    return 0;
}