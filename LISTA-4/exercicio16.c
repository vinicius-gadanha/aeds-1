#include <stdio.h>

int calcular_mdc(int n1, int n2) {
    int resto;
    do {
        resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    } while (resto != 0);
    return n1;
}

int main(void) {
    int num1, num2, mdc;
    printf("Digite um numero:");
    scanf("%d", &num1);
    printf("Digite outro numero:");
    scanf("%d", &num2);
    mdc = calcular_mdc(num1, num2);
    printf("MDC(%d, %d) = %d\n", num1, num2, mdc);
}