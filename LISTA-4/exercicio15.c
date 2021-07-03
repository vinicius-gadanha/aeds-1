#include <stdbool.h>
#include <stdio.h>

bool ehPrimo(int num) {
    bool flag;
    int count, count2 = 0;
    for (count = 2; count < num; count++) {
        if (num % count == 0) {
            count2++;
        }
    }

    if (count2 == 0) {
        flag = true;
    } else {
        flag = false;
    }
    return flag;
}

int main(void) {
    int cont;
    printf("Numeros Primos:");
    for (cont = 1; cont <= 1000; cont++) {
        if (ehPrimo(cont) == true) {
            printf("%d - ", cont);
        }
    }
    return 0;
}