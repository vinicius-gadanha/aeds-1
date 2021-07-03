#include <stdio.h>

int mdc(int maior, int menor, int q, int r) {
    int resp = 0, count;
    count = r;
    if (count > 0) {
        maior = menor;
        menor = count;
        q = maior / menor;
        r = maior - (menor * q);
        resp = mdc(maior, menor, q, r);
    } else {
        resp = menor;
    }

    return resp;
}

int main(void) {
    int num1, num2, resposta, q, r, maior, menor;
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

    if (num1 > num2) {
        maior = num1;
        menor = num2;
    } else {
        menor = num1;
        maior = num2;
    }

    q = maior / menor;
    r = maior - (menor * q);
    resposta = mdc(maior, menor, q, r);

    printf("Maximo Divisor Comun(%d, %d) = %d\n", menor, maior, resposta);

    return 0;
}