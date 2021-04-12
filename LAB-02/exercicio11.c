#include <stdio.h>

int main(void) {
    float salario, aumento;
    printf("Informe seu salario: ");
    scanf("%f", &salario);
    if (salario <= 300) {
        aumento = (salario * 15) / 100;
    } else if (salario > 300 && salario < 600) {
        aumento = (salario * 10) / 100;
    } else if (salario >= 600 && salario <= 900) {
        aumento = (salario * 5) / 100;
    } else if (salario > 900) {
        aumento = 0;
    }
    printf("Salario Atual: R$%.2f\n", salario);
    printf("Novo Salario: R$%.2f", salario + aumento);
}