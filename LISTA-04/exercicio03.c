#include <stdio.h>

void ordenar(double n1, double n2, double n3) {
    double maior, medio, menor;
    if (n1 >= n2 && n1 >= n3) {
        maior = n1;
        if (n2 >= n3) {
            medio = n2;
            menor = n3;
        } else {
            medio = n3;
            menor = n2;
        }
    }

    if (n2 >= n1 && n2 >= n3) {
        maior = n2;
        if (n1 >= n3) {
            medio = n1;
            menor = n3;
        } else {
            medio = n3;
            menor = n1;
        }
    }

    if (n3 >= n2 && n3 >= n1) {
        maior = n3;
        if (n2 >= n1) {
            medio = n2;
            menor = n1;
        } else {
            medio = n1;
            menor = n2;
        }
    }
    printf("Ordem crescente dos numeros:\n %.2f\n %.2f\n %.2f\n", menor, medio, maior);
}

int main(void) {
    double num1, num2, num3;
    printf("Digite um numero:");
    scanf("%lf", &num1);
    printf("Digite outro numero:");
    scanf("%lf", &num2);
    printf("Digite mais um numero:");
    scanf("%lf", &num3);
    ordenar(num1, num2, num3);
    printf("Fim do programa");
    return 0;
}