#include <stdio.h>

int main(void) {
    int codigo, quantidade;
    float preco_u, preco_f, desconto;
    printf("|| CODIGO || PRECO   ||\n");
    printf("|| 1 a 10 || R$ 10.00||\n");
    printf("||11 a 20 || R$ 15.00||\n");
    printf("||21 a 30 || R$ 20.00||\n");
    printf("||31 a 40 || R$ 30.00||\n");
    printf("Digite o codigo do produto:");
    scanf("%d", &codigo);
    printf("Digite a quantidade comprada do produto:");
    scanf("%d", &quantidade);
    if(codigo >= 1 && codigo <= 10) {
        preco_u = 10;
    } else if(codigo >= 11 && codigo <= 20) {
        preco_u = 15;
    } else if(codigo >= 21 && codigo <= 30) {
        preco_u = 20;
    } else if(codigo >= 31 && codigo <= 40) {
        preco_u = 30;
    }

    preco_f = preco_u * quantidade;
    if(preco_f <= 250) {
        desconto = (preco_f * 5) / 100;
    } else if(preco_f > 250 && preco_f <= 500) {
        desconto = (preco_f * 10) / 100;
    } else if(preco_f > 500) {
        desconto = (preco_f * 15) / 100;
    }
    
    printf("Valor unitario do produto: R$%.2f\n", preco_u);
    printf("Valor total da nota: R$%.2f\n", preco_f);
    printf("Valor do desconto: R$%.2f\n", desconto);
    printf("Valor final: R$%.2f", preco_f - desconto);
    return 0;
}