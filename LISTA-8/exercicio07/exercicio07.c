#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *arquivo = fopen("teste.txt", "w");
    char *texto[100];
    int cont = 0;

    printf("Digite uma frase: ");
    gets(&texto);
    fputs(texto, arquivo);
    printf("Frase digitada: %s\n", texto);
    fclose(arquivo);

    arquivo = fopen("teste.txt", "r");
    while ((*texto = fgetc(arquivo)) != EOF) {
        if (*texto == 'a') {
            cont++;
        }
    }
    printf("Quantidade de caracteres 'a': %d\n", cont);

    fclose(arquivo);

    return 0;
}