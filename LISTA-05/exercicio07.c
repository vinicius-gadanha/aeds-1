#include <stdio.h>

int soma(int count, int num) {
    int resp = 0;
    if (count >= num) {
        resp = num;
    } else {
        resp = num + soma(count + 1, num - 1);
    }
    return resp;
}

int main(void) {
    int num, resposta;
    do {
        printf("Digite um numero:");
        scanf("%d", &num);
        if (num <= 0) {
            printf("Digite um valor inteiro e maior do que zero.\n");
        }
    } while (num <= 0);
    resposta = soma(0, num);
    printf("%d", resposta);

    return 0;
}