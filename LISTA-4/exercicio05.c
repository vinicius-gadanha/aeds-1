#include <stdio.h>

void bissexto(int ano) {
    if ((ano % 4) == 0 && (ano % 100) != 0 || (ano % 400) == 0) {
        printf("O ano %d: bissexto\n", ano);
    } else {
        printf("O ano %d: nao bissexto\n", ano);
    }
}

int main(void) {
    int ano;
    printf("Digite o ano em que nasceu:");
    scanf("%d", &ano);
    bissexto(ano);
    printf("Fim do programa");
    return 0;
}