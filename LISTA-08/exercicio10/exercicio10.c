#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int num, soma = 0;
    printf("Entre com o numero a ser explorado: \n");
    scanf("%d", &num);
    for (int i = 1; i <= (num / 2); i++) {
        if (num % i == 0) {
            printf("Dividor %d\n", i);
            soma += i;
        }
    }
    printf("Dividor %d\n", num);
    soma += num;

    FILE *fp = fopen("teste10.txt", "wa");
    if (fp == NULL) {
        printf("Erro na abertura do arquivo.\n");
        return -1;
    }
    fprintf(fp, "A soma dos divisores eh %d\n", soma);
    fclose(fp);

    return 0;
}