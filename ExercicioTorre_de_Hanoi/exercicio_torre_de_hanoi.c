#include <math.h>
#include <stdio.h>

void move_disco(int d, char ori, char dest, char aux) {
    if (d == 1) {
        printf("Mover disco %d de %c para %c\n", d, ori, dest);
    } else {
        move_disco(d - 1, ori, aux, dest);
        printf("Mover disco %d de %c para %c\n", d, ori, dest);
        move_disco(d - 1, aux, dest, ori);
    }
}

int main(void) {
    int discos, num_movimentos;
    printf("Informe a quantidade de discos:");
    scanf("%d", &discos);

    move_disco(discos, 'A', 'C', 'B');

    num_movimentos = pow(2, discos) - 1;
    printf("Numero de movimentos feitos: %d", num_movimentos);

    return 0;
}