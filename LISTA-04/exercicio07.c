#include <stdio.h>

int soma_divisores(int num) {
    int soma1 = 0, count;

    for (count = 1; count <= num; count++) {
        if ((num % count) == 0) {
            soma1 += count;
        }
    }
    return soma1;
}

int main(void) {
    int num, soma;
    printf("Digite um numero inteiro positivo:");
    scanf("%d", &num);
    soma = soma_divisores(num);
    printf("Numero: %d\n", num);
    printf("Soma dos divisores: %d", soma);
    return 0;
}