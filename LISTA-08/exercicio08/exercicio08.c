#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *arquivo;
    char texto[100];
    int count = 0;
    arquivo = fopen("teste.txt", "r");
    if (arquivo == NULL) {
        printf("Arquivo nao encontrado.");
        return -1;
    }
    printf("\n\n");

    while (fgets(texto, 100, arquivo) != NULL) {
        printf("%s", texto);
        count++;
    }
    fclose(arquivo);
    printf("\n\n");
    printf("Quantidade de linhas na tela: %d", count);

    return 0;
}