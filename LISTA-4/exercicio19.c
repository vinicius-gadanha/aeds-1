#include <stdio.h>

void calcular_fatorial(int n) {
    int count = 0, fatorial = 1;
    count = n;
    printf("%d! =", n);
    for (count; count >= 1; count--) {
        printf(" %d ", count);
        fatorial *= count;
    }
    printf(" = %d", fatorial);
}

int main(void) {
    int num = 0;
    do {
        printf("Digite um numero:");
        scanf("%d", &num);
        if (num <= 0) {
            printf("Digite um numero positivo.\n");
        }
    } while (num <= 0);

    calcular_fatorial(num);

    return 0;
}