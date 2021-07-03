#include <stdio.h>

int main() {
    int vetor[6], i;
    for (i = 0; i < 6; i++) {
        vetor[i] = i + 2;
    }
    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[2]);
    printf("%d\n", vetor[4]);
    return 0;
}