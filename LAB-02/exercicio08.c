#include <stdio.h>
int main(void) {
    float salario, aumento;
    printf("Informe seu salario:");
    scanf("%f", &salario);
    if (salario <= 300) {
        aumento = (salario * 35) / 100;
    } else if (salario > 300) {
        aumento = (salario * 15) / 100;
    } else {
        printf("Erro no valor do salário.");
    }
    printf("Salario Atual: R$%.2f\n", salario);
    printf("Salario com reajuste: R$%.2f", (salario + aumento));
    return 0;
}