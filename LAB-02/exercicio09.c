#include <stdio.h>
int main(void) {
    float salario, credito;
    printf("Informe seu salario medio:");
    scanf("%f", &salario);
    if (salario > 400) {
        credito = (salario * 30) / 100;
    } else if (salario <= 400 && salario > 300) {
        credito = (salario * 25) / 100;
    } else if (salario <= 300 && salario > 200) {
        credito = (salario * 20) / 100;
    } else if (salario <= 200) {
        credito = (salario * 10) / 100;
    } else {
        printf("Erro no valor do saldo medio.");
    }
    printf("Salario medio: R$%.2f\n", salario);
    printf("Credito especial: R$%.2f", credito);
    return 0;
}