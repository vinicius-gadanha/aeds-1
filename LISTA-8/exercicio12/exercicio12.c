#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *arquivo = fopen("resultados.txt", "w");
    int num_veiculos;
    float valor_aluguel, faturamento_anual, ganho_multas, valor_manutencao;
    printf("Digite a quantidade de veiculos que a locadora possui:");
    scanf("%d", &num_veiculos);
    printf("Digite o valor do aluguel:");
    scanf("%f", &valor_aluguel);

    faturamento_anual = ((num_veiculos / 3) * valor_aluguel) * 12;
    fprintf(arquivo, "Faturamento Anual: R$%.2f\n", faturamento_anual);
    ganho_multas = (num_veiculos / 10) * ((valor_aluguel * 20) / 100);
    fprintf(arquivo, "Valor ganho com multas no mes: R$%.2f\n", ganho_multas);
    valor_manutencao = ((num_veiculos * 2.0) / 100) * 600.0;
    fprintf(arquivo, "Valor gasto com manutencao anual: R$%.2f\n", valor_manutencao);

    fclose(arquivo);

    printf("Faturamento Anual: R$%.2f\n", faturamento_anual);
    printf("Valor ganho com multas no mes: R$%.2f\n", ganho_multas);
    printf("Valor gasto com manutencao anual: R$%.2f\n", valor_manutencao);

    return 0;
}