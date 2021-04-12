#include <stdio.h>

int main(void) {
    int opcao = 0, meses = 0;
    double salario = 0;
    while (opcao != 4) {
        printf("====================================\n");
        printf("Menu de opcoes:\n");
        printf("[1]-Novo salario\n[2]-Ferias\n[3]-Decimo terceiro\n[4]-Sair\n");
        printf("====================================\n");
        printf("Digite sua escolha([1][2][3][4]):");
        scanf("%d", &opcao);
        if (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4) {
            printf("====================================\n");
            printf("ERRO:opcao recebida invalida.\n");
            printf("Tente novamente.\n");
        } else {
            if (opcao == 1) {
                printf("====================================\n");
                printf("Informe seu salario: R$");
                scanf("%lf", &salario);
                if (salario <= 210) {
                    printf("Novo salario: R$ %.2f\n", salario * 115 / 100);
                } else if (salario > 210 && salario <= 600) {
                    printf("Novo salario: R$%.2f\n", salario * 110 / 100);
                } else if (salario > 600) {
                    printf("Novo salario: R$%.2f\n", salario * 105 / 100);
                }
            }  //Opçao [A]
            else if (opcao == 2) {
                printf("====================================\n");
                printf("Informe seu salario: R$");
                scanf("%lf", &salario);
                printf("Valor de suas ferias: R$ %.2f\n", salario + (salario / 3));
            }  //Opçao [B]
            else if (opcao == 3) {
                printf("====================================\n");
                printf("Informe seu salario: R$");
                scanf("%lf", &salario);
                printf("Informe o numero de meses de trabalho na empresa:");
                scanf("%d", &meses);
                printf("Valor do decimo terceiro: R$ %.2f\n", salario * meses / 12);
            }  //Opçao [C]
            else if (opcao == 4) {
                printf("Programa finalizado.");
            }  //Opçao [D]
        }
    }  //Fim while
    return 0;
}