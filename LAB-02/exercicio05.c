#include <stdio.h>

int main() {
    int code;
    float n1, n2, media;
    printf("Digite um numero:");
    scanf("%f", &n1);
    printf("Digite outro numero:");
    scanf("%f", &n2);
    printf("(1) - Media entre os numeros digitados");
    printf("\n(2) - Diferenca do maior pelo menor");
    printf("\n(3) - Produtos entre os numeros digitados");
    printf("\n(4) - Divisao do primeiro pelo segundo");
    printf("\nDigite 1/2/3/4:");
    scanf("%d", &code);
    switch (code) {
        case 1:
            media = (n1 + n2) / 2;
            printf("A media entre os numeros digitados é:%.2f", media);
            break;
        case 2:
            if (n1 > n2) {
                printf("%.1f - %.1f = %.1f", n1, n2, n1 - n2);
            } else if (n2 > n1) {
                printf("%.1f - %.1f = %.1f", n2, n1, n2 - n1);
            }
            break;
        case 3:
            printf("%.1f X %.1f = %.1f", n1, n2, n1 * n2);
            break;
        case 4:
            if (n2 != 0) {
                printf("%.1f / %.1f = %.1f", n1, n2, n1 / n2);
                break;
            } else {
                printf("O segundo numero deve ser diferente de zero(0)");
            }
        default:
            printf("Código Inválido");
    }
    return 0;
}