#include <stdio.h>

int main(void) {
    int opcao = 0;
    double nota1 = 0, nota2 = 0, nota3 = 0, peso_n1 = 0, peso_n2 = 0, peso_n3 = 0;
    while (opcao != 3) {
        printf("====================================\n");
        printf("        Menu de opcoes:\n");
        printf("[1]-Media aritmetica\n[2]-Media ponderada\n[3]-Sair\n");
        printf("====================================\n");
        printf("Digite sua escolha([1][2][3]):");
        scanf("%d", &opcao);
        if (opcao != 1 && opcao != 2 && opcao != 3) {
            printf("====================================\n");
            printf("ERRO:opcao recebida é inválida.\n");
            printf("Tente novamente.\n");
        } else {
            printf("====================================\n");
            if (opcao == 1) {
                printf("Digite a primera nota:");
                scanf("%lf", &nota1);
                printf("Digite a segunda nota:");
                scanf("%lf", &nota2);
                printf("Media das notas: %.2f\n", (nota1 + nota2) / 2);
            }  //Opçao media aritmetica
            else if (opcao == 2) {
                printf("Digite a primeira nota:");
                scanf("%lf", &nota1);
                printf("Digite o peso da primeira nota:");
                scanf("%lf", &peso_n1);
                printf("Digite a segunda nota:");
                scanf("%lf", &nota2);
                printf("Digite o peso da segunda nota:");
                scanf("%lf", &peso_n2);
                printf("Digite a terceira nota:");
                scanf("%lf", &nota3);
                printf("Digite o peso da terceira nota:");
                scanf("%lf", &peso_n3);
                printf("Media das notas:");
                printf(" %.2f\n", ((nota1 * peso_n1) + (nota2 * peso_n2) + (nota3 * peso_n3)) / (peso_n1 + peso_n2 + peso_n3));
            }  //Opçao media ponderada
            else if (opcao == 3) {
                printf("Programa finalizado.");
            }
        }
    }  //Fim while
    return 0;
}