#include <stdio.h>

int main(void) {
    int ant = 1, pos = 1, n, prox, i;
    printf("Digite o numero de termos:");
    scanf("%d", &n);
    if (n == 1) {
        printf("\nSequencia -> %d", ant);
    } else if (n == 2) {
        printf("\nSequencia -> %d - %d - ", ant, pos);
    } else {
        printf("\nSequencia -> %d - %d - ", ant, pos);
        for (i = 3; i <= n; i++) {
            prox = ant + pos;
            ant = pos;
            pos = prox;
            printf("%d -", prox);
        }
    }
    return 0;
}