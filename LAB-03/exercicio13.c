#include <stdio.h>

int main(void) {
    int cont = 0, idade = 0, cont1_10 = 0, cont11_20 = 0, cont21_30 = 0, cont31 = 0;
    float peso = 0, peso1_10 = 0, peso11_20 = 0, peso21_30 = 0, peso31 = 0;

    for (cont = 1; cont <= 15; cont++) {
        printf("========================================\n");
        printf("            Pessoa %d\n", cont);
        printf("Informe sua idade:");
        scanf("%d", &idade);
        printf("Informe seu peso: ");
        scanf("%f", &peso);
        if (idade >= 1 && idade <= 10) {
            peso1_10 += peso;
            cont1_10 += 1;
        } else if (idade >= 11 && idade <= 20) {
            peso11_20 += peso;
            cont11_20 += 1;
        } else if (idade >= 21 && idade <= 30) {
            peso21_30 += peso;
            cont21_30 += 1;
        } else if (idade >= 31) {
            peso31 += peso;
            cont31 += 1;
        }
    }  //Fim for
    printf("========================================\n");
    printf("   Media dos pesos por faixa etaria\n");
    if (cont1_10 != 0) {
        printf("Faixa etaria(1-10):   %.2f\n", peso1_10 / cont1_10);
    } else {
        printf("Faixa etaria(1-10):   Sem dados.\n");
    }

    if (cont11_20 != 0) {
        printf("Faixa etaria(11-20):  %.2f\n", peso11_20 / cont11_20);
    } else {
        printf("Faixa etaria(11-20):  Sem dados.\n");
    }

    if (cont21_30 != 0) {
        printf("Faixa etaria(21-30):  %.2f\n", peso21_30 / cont21_30);
    } else {
        printf("Faixa etaria(21-30):  Sem dados.\n");
    }

    if (cont31 != 0) {
        printf("Faixa etaria(31-...): %.2f\n", peso31 / cont31);
    } else {
        printf("Faixa etaria(31-...): Sem dados.\n");
    }
    printf("========================================\n");
    return 0;
}