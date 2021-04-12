#include <stdio.h>

int main(void) {
    float salario, aumento;
    printf("Informe seu salario:");
    scanf("%f", &salario);
    if(salario < 500) {
        aumento = (salario * 30) / 100;
        printf("Salario atual: R$%.2f\n", salario);
        printf("Salario com reajuste: R$%.2f\n", (salario + aumento));
    }else if(salario >= 500) {
        printf("De acordo com seu salario voce nao tem reajuste.");
    }else{
        printf("Erro no valor do salario.");
    }
    return 0;
}