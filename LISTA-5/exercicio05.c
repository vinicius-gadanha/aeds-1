#include <stdio.h>

int fat(int n) {
    int resp = 0;
    if (n == 0) {
        resp = 1;
    } else {
        resp = n * fat(n - 1);
    }
    return resp;
}

float cosseno(float num, int denom, int count, int n) {
    float resp = 0;
    if (count < n) {
        resp = num / fat(denom) + cosseno(num * -1, denom + 2, count + 1, n);
    }
    return resp;
}

int main(void) {
    int num;
    float resultado;
    do {
        printf("Digite um numero:");
        scanf("%d", &num);
        if (num <= 0) {
            printf("Digite um valor inteiro e maior do que zero.\n");
        }
    } while (num <= 0);
    resultado = cosseno(1, 0, 0, num);
    printf("%.3f", resultado);

    return 0;
}