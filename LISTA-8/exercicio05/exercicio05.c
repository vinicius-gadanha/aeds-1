#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *arquivo = fopen("teste.txt", "w");
    for (int i = 1; i <= 10; i++) {
        fprintf(arquivo, "%d\n", i);
        printf("Adicionou o numero %d no arquivo(teste.txt)\n", i);
    }
    fclose(arquivo);
    return 0;
}