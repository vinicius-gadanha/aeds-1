#include <stdio.h>

int subtracao(int num1, int num2, int count) {
    int resp = 0;
    if (num1 < num2) {
        resp = count;
    } else {
        resp = subtracao(num1 - num2, num2, count + 1);
    }
    return resp;
}

int main(void) {
    int num1, num2, resposta;
    do {
        printf("Digite um numero:");
        scanf("%d", &num1);
        if (num1 <= 0) {
            printf("Digite um valor inteiro e maior do que zero.\n");
        }
    } while (num1 <= 0);
    do {
        printf("Digite outro numero:");
        scanf("%d", &num2);
        if (num2 <= 0) {
            printf("Digite um valor inteiro e maior do que zero.\n");
        }
    } while (num2 <= 0);

    resposta = subtracao(num1, num2, 0);
    printf("%d", resposta);

    return 0;
}