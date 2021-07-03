#include <stdio.h>

double calcular_sequencia(int number) {
    float count;
    float seq = 0;
    float soma = 0;
    for (count = 1; count <= number; count++) {
        seq = 1 / count;
        soma += seq;
    }
    return soma;
}

int main(void) {
    int num;
    float soma_seq;
    printf("Digite um numero inteiro maior ou igual a 1:");
    scanf("%d", &num);
    soma_seq = calcular_sequencia(num);
    printf("Soma da sequencia: %.2f", soma_seq);
    return 0;
}