#include <stdio.h>

float calcular_valor_total(float imposto, int meses1) {
    float valor_final;
    if (imposto > 1200) {
        valor_final = (imposto * 10 / 100) * meses1 + imposto;
    } else if (imposto <= 1200 && imposto > 500) {
        valor_final = (imposto * 7 / 100) * meses1 + imposto;
    } else if (imposto <= 500 && imposto > 180) {
        valor_final = (imposto * 4 / 100) * meses1 + imposto;
    } else if (imposto <= 180 && imposto > 50) {
        valor_final = (imposto * 2 / 100) * meses1 + imposto;
    } else if (imposto <= 50) {
        valor_final = (imposto * 1 / 100) * meses1 + imposto;
    }
    return valor_final;
}

int main(void) {
    int count = 1, meses;
    float valor_imposto = 0, valor_total = 0;
    while (count <= 10) {
        printf("============================================\n");
        printf("Proprietario %d\n", count);
        printf("Valor do imposto:");
        scanf("%f", &valor_imposto);
        printf("Meses em atraso:");
        scanf("%d", &meses);
        valor_total = calcular_valor_total(valor_imposto, meses);
        printf("Valor total a pagar: R$ %.2f\n", valor_total);
        count++;
    }
    printf("FIM PROGRAMA");
    return 0;
}