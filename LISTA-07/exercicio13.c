#include <math.h>
#include <stdio.h>

int raizes(float a, float b, float c, float *x1, float *x2) {
    float delta;
    int root_number;
    delta = (pow(b, 2) - 4 * a * c);
    if (delta < 0) {
        root_number = 0;
        *x1 = 0;
        printf("Nao tem raiz real");
    } else if (delta == 0) {
        root_number = 1;
        *x1 = -(b) / (2 * a);
        printf("x = %.1f\n", *x1);
    } else if (delta > 0) {
        root_number = 2;
        *x1 = (-(b) + delta) / (2 * a);
        *x2 = (-(b)-delta) / (2 * a);
        printf("x1 = %.1f\n", *x1);
        printf("x2 = %.1f\n", *x2);
    }

    return root_number;
}

int main(void) {
    float a, b, c, *x1, *x2, delta;
    int root_number;
    printf("===================================\n");
    printf("Equacao de Segundo Grau:\n");
    printf("ax^2 + bx + c = 0\n");
    printf("===================================\n");
    printf("Digite o valor de a:");
    scanf("%f", &a);
    printf("Digite o valor de b:");
    scanf("%f", &b);
    printf("Digite o valor de c:");
    scanf("%f", &c);
    printf("%.1fx^2 + %.1fx + %.1f = 0\n", a, b, c);
    printf("===================================\n");
    root_number = raizes(a, b, c, &x1, &x2);
    printf("Numero de raizes reais: %d\n", root_number);
    printf("===================================\n");
    return 0;
}