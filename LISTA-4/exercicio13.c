#include <stdio.h>

float somar(float n1, float n2) {
    float resultado;
    resultado = n1 + n2;
    return resultado;
}

float subtrair(float n1, float n2) {
    float resultado;
    resultado = n1 - n2;
    return resultado;
}

float multiplicar(float n1, float n2) {
    float resultado;
    resultado = n1 * n2;
    return resultado;
}

float dividir(float n1, float n2) {
    float resultado;
    resultado = n1 / n2;
    return resultado;
}

void menu(void) {
    float num1, num2;
    int opcao = 0;
    while (opcao != 5) {
        do {
            printf("============================\n");
            printf("Menu Opcoes:\n");
            printf("[1] - Para somar\n");
            printf("[2] - Para subtrair\n");
            printf("[3] - Para multiplicar\n");
            printf("[4] - Para dividir\n");
            printf("[5] - Para sair\n");
            printf("Escolha uma opcao:");
            scanf("%d", &opcao);
            if (opcao <= 0 || opcao >= 6) {
                printf("Opcao Invalida, tente novamente.\n");
            }
        } while (opcao <= 0 || opcao >= 6);
        if (opcao != 5) {
            printf("Digite um numero:");
            scanf("%f", &num1);
            printf("Digite outro numero:");
            scanf("%f", &num2);
            //Soma
            if (opcao == 1) {
                float soma;
                soma = somar(num1, num2);
                printf("============================\n");
                printf("Soma:\n");
                printf("%.1f + %.1f = %.1f\n", num1, num2, soma);
            //Subtração
            } else if (opcao == 2) {
                float subtracao;
                subtracao = subtrair(num1, num2);
                printf("============================\n");
                printf("Subtracao:\n");
                printf("%.1f - %.1f = %.1f\n", num1, num2, subtracao);
            }
            //Multiplicação
            else if (opcao == 3) {
                float multiplicacao;
                multiplicacao = multiplicar(num1, num2);
                printf("============================\n");
                printf("Multiplicacao:\n");
                printf("%.1f x %.1f = %.1f\n", num1, num2, multiplicacao);
            }
            //Divisão
            else if (opcao == 4) {
                float divisao;
                if (num2 != 0) {
                    divisao = dividir(num1, num2);
                    printf("============================\n");
                    printf("Divisao:\n");
                    printf("%.1f ÷ %.1f = %.1f\n", num1, num2, divisao);
                } else if (num2 == 0) {
                    printf("Sem resultado divisao por 0.\n");
                }
            }

        } else if (opcao == 5) {
            printf("Fim do Programa");
        }
    }
}

int main(void) {
    menu();
}