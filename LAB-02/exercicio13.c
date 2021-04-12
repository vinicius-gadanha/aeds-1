#include <stdio.h>

int main(void) {
    float preco_i, preco_f, aumento;
    printf("Informe o valor do produto:");
    scanf("%f", &preco_i);
    if (preco_i <= 50) {
        aumento = (preco_i * 5) / 100;
    } else if (preco_i > 50 && preco_i <= 100) {
        aumento = (preco_i * 10) / 100;
    } else if (preco_i > 100) {
        aumento = (preco_i * 15) / 100;
    }

    preco_f = preco_i + aumento;
    printf("Valor Inicial: R$%.2f\n", preco_i);
    printf("Aumento: R$%.2f\n", aumento);
    printf("Valor final: R$%.2f\n", preco_f);

    if (preco_f <= 80) {
        printf("Classificacao: Barato");
    } else if (preco_f > 80 && preco_f <= 120) {
        printf("Classificacao: Normal");
    } else if (preco_f > 120 && preco_f <= 200) {
        printf("Classificacao: Caro");
    } else if (preco_f > 200) {
        printf("Classificacao: Muito caro");
    }
    return 0;
}