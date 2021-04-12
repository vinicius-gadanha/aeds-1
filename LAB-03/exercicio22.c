#include <stdio.h>

int main(void) {
    char opcao = 'a';
    int cont = 1;
    double salario;
    while (opcao != 'D') {
        printf("========================================================\n");
        printf("           Funcionario %d\n", cont);
        printf("Informe o seu salario:");
        scanf("%lf", &salario);
        printf("========================================================\n");
        printf("           Menu de opcoes:\n");
        printf("A-Para aumento de 8%%\n");
        printf("B-Para aumento de 11%%\n");
        printf("C-Para o aumento fixo de R$450.00\n");
        printf("D-Sair do programa\n");
        printf("========================================================\n");
        printf("Digite sua escolha([A][B][C][D]):");
        scanf(" %c", &opcao);
        if (opcao != 'A' && opcao != 'B' && opcao != 'C' && opcao != 'D') {
            printf("========================================================\n");
            printf("ERRO:opcao recebida é inválida.\n");
            printf("Tente novamente.\n");
        } else {
            cont += 1;
            if (opcao == 'A') {
                printf("Aumento de 8%% no seu salario: R$");
                printf("%.2f\n", (salario * 108 / 100));
            }  //Opcao A
            else if (opcao == 'B') {
                printf("Aumento de 11%% no seu salario: R$");
                printf("%.2f\n", (salario * 111 / 100));
            }  //Opcao B
            else if (opcao == 'C') {
                printf("Aumento fixo de R$450 no seu salario: R$");
                printf("%.2f\n", (salario + 450));
            }  //Opcao C
            else if (opcao == 'D') {
                printf("Programa finalizado.");
            }  //Opcao D
        }
    }  //Fim while
    return 0;
}