#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const char meses[12][12] = {{"Janeiro"}, {"Fevereiro"}, {"Marco"}, {"Abril"}, {"Maio"}, {"Junho"}, {"Julho"}, {"Agosto"}, {"Setembro"}, {"Outubro"}, {"Novembro"}, {"Dezembro"}};

typedef struct Motor {
    float custo, lucro;
    int numMotores[12];
} Motor;

void dadosMotor(Motor *m) {
    int i = 0;
    printf("Custo:");
    scanf("%f", &m->custo);
    printf("Lucro:");
    scanf("%f", &m->lucro);
    for (i = 0; i < 12; i++) {
        printf("==========================\n");
        printf("%s\n", meses[i]);
        printf("Numero de Motores:");
        scanf("%d", &m->numMotores[i]);
    }
}

float gravarArquivoElucroTotal(int tabela1[12][2], int tabela2[2][2]) {
    FILE *arquivo = fopen("controle.txt", "w");
    int i = 0, j = 0;
    float custom1 = 0, custom2 = 0, lucrom1, lucrom2, custosm1[12], lucrosm1[12], custosm2[12], lucrosm2[12], lucroTotal;
    custom1 = tabela2[0][0];
    lucrom1 = tabela2[0][1];
    custom2 = tabela2[1][0];
    lucrom2 = tabela2[1][1];

    for (i = 0; i < 12; i++) {
        for (j = 0; j < 2; j++) {
            if (j == 0) {
                custosm1[i] = custom1 * tabela1[i][j];
                lucrosm1[i] = lucrom1 * tabela1[i][j];
            } else if (j == 1) {
                custosm2[i] = custom2 * tabela1[i][j];
                lucrosm2[i] = lucrom2 * tabela1[i][j];
            }
        }
    }

    fprintf(arquivo, "MOTOR 1\n");
    for (i = 0; i < 12; i++) {
        fprintf(arquivo, "%s: custo->R$%.2f / lucro->R$%.2f\n", meses[i], custosm1[i], lucrosm1[i]);
    }
    fprintf(arquivo, "===============================================================\n");
    fprintf(arquivo, "MOTOR 2\n");
    for (i = 0; i < 12; i++) {
        fprintf(arquivo, "%s: custo->R$%.2f / lucro->R$%.2f\n", meses[i], custosm2[i], lucrosm2[i]);
    }

    for (i = 0; i < 12; i++) {
        lucroTotal += lucrosm1[i] + lucrosm2[i];
    }

    fclose(arquivo);
    return lucroTotal;
}

int main(void) {
    int tabela1[12][2], tabela2[2][2], lin = 0, col = 0, i = 0;
    float lucroTotal = 0;
    memset(tabela1, 0, sizeof(tabela1));
    memset(tabela2, 0, sizeof(tabela2));
    Motor m1, m2;
    memset(m1.numMotores, 0, sizeof(m1.numMotores));

    //Coleta de dados
    printf("MOTOR 1\n");
    dadosMotor(&m1);
    printf("MOTOR 2\n");
    dadosMotor(&m2);

    //Tabela 1
    for (lin = 0; lin < 12; lin++) {
        for (col = 0; col < 12; col++) {
            if (col == 0) {
                tabela1[lin][col] = m1.numMotores[lin];
            } else if (col == 1) {
                tabela1[lin][col] = m2.numMotores[lin];
            }
        }
    }

    //Tabela 2
    for (lin = 0; lin < 2; lin++) {
        for (col = 0; col < 2; col++) {
            if (lin == 0) {
                if (col == 0) {
                    tabela2[lin][col] = m1.custo;
                } else if (col == 1) {
                    tabela2[lin][col] = m1.lucro;
                }
            } else if (lin == 1) {
                if (col == 0) {
                    tabela2[lin][col] = m2.custo;
                } else if (col == 1) {
                    tabela2[lin][col] = m2.lucro;
                }
            }
        }
    }

    //Gravar no Arquivo(controle.txt) e Retornar o Lucro Total;
    lucroTotal = gravarArquivoElucroTotal(tabela1, tabela2);
    printf("Lucro Total: R$ %.2f", lucroTotal);
    return 0;
}