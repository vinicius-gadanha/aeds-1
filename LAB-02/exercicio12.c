#include <stdio.h>

int main(void) {
    float salario, bonus, imposto;
    printf("Informe seu salario bruto:");
    scanf("%f", &salario);
    imposto = (salario * 7) / 100;
    if(salario <= 350) {
        bonus = 100;
    } else if(salario > 350 && salario < 600) {
        bonus = 75;
    } else if(salario >= 600 && salario <= 900) {
        bonus = 50;
    } else if(salario > 900) {
        bonus = 35;
    }
    printf("Salario Bruto: R$%.2f\n", salario);
    printf("Gratificacao: R$%.2f\n", bonus);
    printf("Imposto: R$%.2f\n", imposto);
    printf("Salario Final: R$%.2f", salario + bonus - imposto);
    return 0;
}