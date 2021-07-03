#include <stdio.h>

float exercicio(int n1, int n2) {
    float resultado;
    if (n1 % n2 == 0) {
        resultado = 0;
    } else {
        int count;
        count = n2;
        for (count; count <= n1; count++) {
            if (n1 % count == 0) {
                return count;
            }
        }
    }

    return resultado;
}

int main(void) {
    int num1, num2;
    printf("Digite um numero:");
    scanf("%d", &num1);
    printf("Digite outro numero:");
    scanf("%d", &num2);
    printf("O proximo divisor é %.1f", exercicio(num1, num2));
    return 0;
}