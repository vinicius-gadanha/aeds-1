#include <math.h>
#include <stdio.h>

float calcular_y(float x1) {
    float y1;
    if (x1 <= 1) {
        y1 = 1;
    } else if (x1 > 1 && x1 <= 2) {
        y1 = 2;
    } else if (x1 > 2 && x1 <= 3) {
        y1 = pow(x1, 2);
    } else if (x1 > 3) {
        y1 = pow(x1, 3);
    }
    return y1;
}

int main(void) {
    float x, y;
    printf("Digite o valor de x:");
    scanf("%f", &x);
    y = calcular_y(x);
    printf("Valor de y: %.1f", y);
    return 0;
}