#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *arquivo = fopen("teste.txt", "w");
    char *texto[100];

    printf("Digite uma frase:");
    gets(&texto);
    fputs(texto, arquivo);
    printf("Frase digitada: %s", texto);
    fclose(arquivo);

    return 0;
}