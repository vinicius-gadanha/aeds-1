#include <stdio.h>

int main(void) {
    int cont, idade, faixa1, faixa2, faixa3, faixa4, faixa5;
    float porcent1, porcent2;
    faixa1 = 0;
    faixa2 = 0;
    faixa3 = 0;
    faixa4 = 0;
    faixa5 = 0;

    for (cont = 1; cont <= 8; cont += 1) {
        printf("Digite a idade da pessoa %d:", cont);
        scanf("%d", &idade);
        if (idade >= 0 && idade <= 15) {
            faixa1 += 1;
        } else if (idade >= 16 && idade <= 30) {
            faixa2 += 1;
        } else if (idade >= 31 && idade <= 45) {
            faixa3 += 1;
        } else if (idade >= 46 && idade <= 60) {
            faixa4 += 1;
        } else if (idade >= 61) {
            faixa5 += 1;
        } else {
            printf("Valor da idade inválido.");
        }
    }  //Fim for
    printf("Quantidade de pessoas em cada faixa etaria:\n");
    printf("Faixa etaria 1(ate 15 anos):        %d\n", faixa1);
    printf("Faixa etaria 2(entre 16 e 30 anos): %d\n", faixa2);
    printf("Faixa etaria 3(entre 31 e 45 anos): %d\n", faixa3);
    printf("Faixa etaria 4(entre 46 e 60 anos): %d\n", faixa4);
    printf("Faixa etaria 5(acima de 60 anos):   %d\n", faixa5);

    porcent1 = (faixa1 * 100.0 / 8);
    porcent2 = (faixa5 * 100.0 / 8);
    printf("Porcentagem de pessoas na primeira faixa etaria com relacao ao total de pessoas:\n");
    printf("%.1f%%", porcent1);
    printf("\nPorcentagem de pessoas na ultima faixa etaria com relacao ao total de pessoas:\n");
    printf("%.1f%%", porcent2);
    return 0;
}