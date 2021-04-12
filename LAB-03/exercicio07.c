#include <stdio.h>

int main(void) {
    int cont = 0, idade = 0, idade50 = 0, idade1020 = 0;
    float peso = 0, altura = 0, totalAltura = 0, peso40 = 0;
    for (cont = 1; cont <= 5; cont += 1) {
        printf("=================================================================\n");
        printf("Pessoa %d:\n", cont);
        printf("Informe sua idade:    ");
        scanf("%d", &idade);
        printf("Informe sua altura(m):");
        scanf("%f", &altura);
        printf("Informe seu peso(Kg): ");
        scanf("%f", &peso);
        if (idade > 50) {
            idade50 += 1;
        } else if (idade >= 10 && idade <= 20) {
            idade1020 += 1;
            totalAltura += altura;
        }
        if (peso < 40) {
            peso40 += 1;
        }
    }  //Fim for
    printf("\n=================================================================\n");
    printf("Quantidade de pessoas acima de 50 anos: %d\n", idade50);
    printf("Media das alturas das pessoas com idade entre 10 e 20 anos: %.2f\n", totalAltura / idade1020);
    printf("Porcentagem de pessoas com peso inferior a 40Kg: %.1f%%", peso40 * 100 / 5);
    printf("\n=================================================================\n");
    return 0;
}