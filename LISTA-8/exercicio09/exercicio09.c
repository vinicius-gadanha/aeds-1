#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *arquivo1, *arquivo2, *arquivo_final;
    arquivo1 = fopen("teste1.txt", "r");
    arquivo2 = fopen("teste2.txt", "r");
    arquivo_final = fopen("teste_final.txt", "w");
    char *texto1[100], *texto2[100];

    while (fgets(texto1, 100, arquivo1) != NULL) {
        fputs(texto1, arquivo_final);
    }
    while (fgets(texto2, 100, arquivo2) != NULL) {
        fputs(texto2, arquivo_final);
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo_final);

    return 0;
}