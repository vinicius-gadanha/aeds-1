#include <stdio.h>

double calcular_peso(char sexo, double alt) {
    double peso_ideal;
    if (sexo == 'M') {
        peso_ideal = 72.7 * alt - 58;
    } else if (sexo == 'F') {
        peso_ideal = 62.1 * alt - 44.7;
    }
    return peso_ideal;
}

int main(void) {
    double altura, peso;
    char sexo;
    do {
        printf("Informe seu sexo:\n");
        printf("[M]-Masculino\n[F]-Feminino\n");
        printf("Digite M ou F:");
        scanf(" %c", &sexo);
        if (sexo != 'M' && sexo != 'F') {
            printf("Sexo invalido, tente novamente\n");
        }
    } while (sexo != 'M' && sexo != 'F');
    printf("Digite sua altura(m):");
    scanf("%lf", &altura);
    peso = calcular_peso(sexo, altura);
    printf("Peso ideal: %.2f\n", peso);
    printf("Fim do programa");

    return 0;
}