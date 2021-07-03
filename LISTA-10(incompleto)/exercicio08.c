#include <stdio.h>

int main(void) {
    int dia, mes, ano, inteira_hs;
    char mes_extenso[100];

    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);
    printf("Informe o ano: ");
    scanf("%d", &ano);
    printf("Data informada: %d/%d/%d.\n", dia, mes, ano);

    switch (mes) {
        case 1:
            printf("Data informada: %d/JANEIRO/%d.\n", dia, ano);
            break;

        case 2:
            printf("Data informada: %d/FEVEREIRO/%d.\n", dia, ano);
            break;

        case 3:
            printf("Data informada: %d/MARÇO/%d.\n", dia, ano);
            break;

        case 4:
            printf("Data informada: %d/ABRIL/%d.\n", dia, ano);
            break;

        case 5:
            printf("Data informada: %d/MAIO/%d.\n", dia, ano);
            break;

        case 6:
            printf("Data informada: %d/JUNHO/%d.\n", dia, ano);
            break;

        case 7:
            printf("Data informada: %d/JULHO/%d.\n", dia, ano);
            break;

        case 8:
            printf("Data informada: %d/AGOSTO/%d.\n", dia, ano);
            break;

        case 9:
            printf("Data informada: %d/SETEMBRO/%d.\n", dia, ano);
            break;

        case 10:
            printf("Data informada: %d/OUTUBRO/%d.\n", dia, ano);
            break;

        case 11:
            printf("Data informada: %d/NOVEMBRO/%d.\n", dia, ano);
            break;

        case 12:
            printf("Data informada: %d/DEZEMBRO/%d.\n", dia, ano);
            break;

        default:
            printf("O mês informado não confere.\n");
    }
    return 0;
}