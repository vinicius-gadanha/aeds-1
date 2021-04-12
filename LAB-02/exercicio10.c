#include <stdio.h>

int main(void) {
    float custo_fabrica, distribuidor, impostos;
    printf("Informe o custo de fabrica:");
    scanf("%f", &custo_fabrica);
    if (custo_fabrica <= 12000) {
        distribuidor = (custo_fabrica * 5) / 100;
        impostos = 0;
    } else if (custo_fabrica > 12000 && custo_fabrica <= 25000) {
        distribuidor = (custo_fabrica * 10) / 100;
        impostos = (custo_fabrica * 15) / 100;
    } else if (custo_fabrica > 25000) {
        distribuidor = (custo_fabrica * 15) / 100;
        impostos = (custo_fabrica * 20) / 100;
    }
    printf("Custo de Fabrica: R$%.2f\n", custo_fabrica);
    printf("Distribuidor: R$%.2f\n", distribuidor);
    printf("Impostos: R$%.2f\n", impostos);
    printf("Custo ao consumidor: R$%.2f", (custo_fabrica + distribuidor + impostos));
    return 0;
}