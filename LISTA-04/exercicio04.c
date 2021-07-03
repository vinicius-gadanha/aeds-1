#include <stdio.h>

char analise(double nota1) {
    char conceito;
    if (nota1 >= 90) {
        conceito = 'A';
    } else if (nota1 < 90 && nota1 >= 80) {
        conceito = 'B';
    } else if (nota1 < 80 && nota1 >= 70) {
        conceito = 'C';
    } else if (nota1 < 70 && nota1 >= 60) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }
    return conceito;
}

int main(void) {
    char nome[30], conceito;
    double nota;
    printf("Digite seu nome:");
    scanf("%s", nome);
    printf("Digite o valor da sua nota:");
    scanf("%lf", &nota);
    conceito = analise(nota);
    printf("O aluno %s obteve nota %.1f e tem o conceito %c", nome, nota, conceito);

    return 0;
}