#include <stdio.h>

int main(void) {
    char letra, finalizar = 'C';
    int quantidade_lucro1000 = 0, quantidade_lucro200 = 0;
    double valor_compra = 0, valor_venda = 0, lucro = 0, lucro_total = 0;

    while (finalizar != 'F') {
        printf("============================================================\n");
        printf("Informe a letra da acao:");
        scanf(" %c", &letra);
        printf("Informe o valor de compra: R$ ");
        scanf("%lf", &valor_compra);
        printf("Informe o valor da venda: R$ ");
        scanf("%lf", &valor_venda);

        lucro = valor_venda - valor_compra;
        printf("Lucro: R$ %.2f\n", lucro);

        lucro_total += lucro;
        if (lucro > 1000) {
            quantidade_lucro1000 += 1;
        } else if (lucro < 200) {
            quantidade_lucro200 += 1;
        }

        printf("============================================================\n");
        printf("Para finalizar digite 'F' para continuar digite 'C':");
        scanf(" %c", &finalizar);
    }  //Fim while
    printf("============================================================\n");
    printf("Quantidade de acoes com lucro acima de R$1000.00: %d\n", quantidade_lucro1000);
    printf("Quantidade de acoes com lucro menor de R$200.00:  %d\n", quantidade_lucro200);
    printf("Lucro TOTAL: R$ %.2f\n", lucro_total);
    printf("============================================================\n");
    return 0;
}