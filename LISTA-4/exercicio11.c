#include <stdio.h>

int calcular_soma(int n1) {
    int soma1 = 0, count = 0;
    for (count = 1; count <= n1; count++) {
        soma1 += count;
    }
    return soma1;
}

int main(void) {
    int num = 0, soma = 0;
    printf("Digite um numero inteiro e positivo:");
    scanf("%d", &num);
    soma = calcular_soma(num);
    printf("Valor soma: %d", soma);
    return 0;
}