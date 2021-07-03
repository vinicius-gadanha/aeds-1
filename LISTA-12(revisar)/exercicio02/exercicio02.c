#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const double valor_pe = 15.00, valor_mao = 20.00, valor_podologia = 30.00;

typedef struct Manicure {
    int pe, mao, podol;
    char nome[40];
    double salario;
} Manicure;

void printMatriz(int Matriz[5][3]) {
    printf("=======================\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", Matriz[i][j]);
        }
        printf("\n");
    }
    printf("=======================\n");
}

void dadosManicure(Manicure *manicures) {
    double faturamento;
    fflush(stdin);
    printf("Informe seu nome: ");
    gets(manicures->nome);
    printf("Pes:");
    scanf("%d", &manicures->pe);
    printf("Mao:");
    scanf("%d", &manicures->mao);
    printf("Podologia:");
    scanf("%d", &manicures->podol);
    faturamento = (manicures->pe * valor_pe) + (manicures->mao * valor_mao) + (manicures->podol * valor_podologia);
    manicures->salario = (faturamento * 30) / 100;
}

void gravarArquivo(Manicure manicures[5]) {
    FILE *arquivo = fopen("faturamento.txt", "w");
    int i = 0;
    for (i = 0; i < 5; i++) {
        fprintf(arquivo, "%s: R$ %.2f\n", manicures[i].nome, manicures[i].salario);
        printf("%d Salvo.\n", i);
    }
    fclose(arquivo);
}

int main(void) {
    Manicure manicures[5];
    int i = 0, lin = 0, col = 0, tabela[5][3];
    memset(tabela, 0, sizeof(tabela));

    //Coleta de dados
    for (i = 0; i < 5; i++) {
        dadosManicure(&manicures[i]);
        printf("=================\n");
    }

    //Tabela
    for (lin = 0; lin < 5; lin++) {
        for (col = 0; col < 3; col++) {
            if (col == 0) {
                tabela[lin][col] = manicures[lin].pe;
            } else if (col == 1) {
                tabela[lin][col] = manicures[lin].mao;
            } else if (col == 2) {
                tabela[lin][col] = manicures[lin].podol;
            }
        }
    }
    printMatriz(tabela);

    //Gravar Arquivo
    gravarArquivo(manicures);

    return 0;
}