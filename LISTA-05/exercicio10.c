#include <stdio.h>

int fibonacci(int n) {
    int resp = 0;
    if (n <= 1) {
        if (n == 0) {
            resp = 0;

        } else if (n == 1) {
            resp = 1;
        }
    } else {
        resp = fibonacci(n - 1) + fibonacci(n - 2);
    }
    return resp;
}

int main(void) {
    int num, resposta;
    do {
        printf("Digite um numero:");
        scanf("%d", &num);
        if (num < 0) {
            printf("Digite um valor inteiro e maior ou igual a zero.\n");
        }
    } while (num < 0);
    resposta = fibonacci(num);
    printf("\n%d", resposta);
    return 0;
}