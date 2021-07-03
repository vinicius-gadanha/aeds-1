#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    FILE *arquivo;
    int num = 0, count = 0;
    char letra;

    arquivo = fopen("teste.txt", "w");
    printf("Digite a quantidade de letras que deseja inserir:");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("Digite uma letra:");
        scanf(" %c", &letra);
        fputc(letra, arquivo);
    }
    fclose(arquivo);

    arquivo = fopen("teste.txt", "r");
    while ((letra = fgetc(arquivo)) != EOF) {
        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
            printf("Letra %c: vogal.\n", letra);
            count++;
        } else {
            printf("Letra %c: consoante.\n", letra);
        }
    }

    printf("Numero de vogais: %d", count);
    fclose(arquivo);
    return 0;
}