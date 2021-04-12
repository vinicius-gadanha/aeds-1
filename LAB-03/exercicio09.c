#include <stdio.h>

int main(void) {
    int cont = 0, idade = 0, idadeTotal = 0, num_pessoas1 = 0, num_pessoas2 = 0, num_pessoas3 = 0;
    float peso = 0, altura = 0;
    for (cont = 1; cont <= 10; cont++) {
        printf("===============================\n");
        printf("          Pessoa %d\n", cont);
        printf("Informe sua idade:");
        scanf("%d", &idade);
        printf("Informe seu peso(Kg):");
        scanf("%f", &peso);
        printf("Informe sua altura(m):");
        scanf("%f", &altura);

        idadeTotal += idade;
        if (peso > 90 && altura < 1.50) {
            num_pessoas1 += 1;
        }
        if (idade >= 10 && idade <= 30) {
            num_pessoas2 += 1;
        }
        if (altura > 1.90) {
            num_pessoas3 += 1;
        }
    }  //Fim for
    printf("===============================\n");
    printf("Media das idades: %.1f\n", idadeTotal / 10.0);
    printf("Quantidade de pessoas com peso superior a 90Kg e altura inferior a 1.50 metro: %d\n", num_pessoas1);
    printf("Porcentagem de pessoas com idade entre 10 e 30 anos entre pessoas com mais de 1.90:");
    if (num_pessoas3 != 0) {
        printf(" %.1f\n", num_pessoas2 / num_pessoas3 * 100.0);
    } else {
        printf("Não foi possivel fazer esse calculo.");
    }
    printf("===============================\n");
    return 0;
}