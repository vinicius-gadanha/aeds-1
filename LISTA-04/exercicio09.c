#include <stdio.h>

float calcular_custo_consumidor(float custo) {
    float custo_final;
    if (custo > 45000) {
        custo_final = (custo * 15 / 100) + (custo * 20 / 100) + custo;
    } else if (custo <= 45000 && custo > 28000) {
        custo_final = (custo * 10 / 100) + (custo * 15 / 100) + custo;
    } else if (custo <= 28000) {
        custo_final = (custo * 5 / 100) + custo;
    }
    return custo_final;
}

int main(void) {
    float custo_fabrica, custo_consumidor;
    printf("Digite o custo de fabrica:");
    scanf("%f", &custo_fabrica);
    custo_consumidor = calcular_custo_consumidor(custo_fabrica);
    printf("Custo de fabrica: R$ %.2f\n", custo_fabrica);
    printf("Custo consumidor: R$ %.2f\n", custo_consumidor);

    return 0;
}