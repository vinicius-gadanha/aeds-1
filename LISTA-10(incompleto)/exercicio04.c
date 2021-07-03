#include <stdio.h>

int main(void) {
    int i = 0, temp_inferior = 0;
    float temperatura[30], menor, maior, soma = 0, media = 0;

    for (i = 0; i < 30; i++) {
        printf("Temperatudo DIA %d: ", i + 1);
        scanf("%f", &temperatura[i]);
        soma += temperatura[i];
    }

    media = soma / 30;
    menor = temperatura[0];
    maior = temperatura[0];
    for (i = 0; i < 30; i++) {
        if (temperatura[i] < menor) {
            menor = temperatura[i];
        }
        if (temperatura[i] > maior) {
            maior = temperatura[i];
        }
        if (temperatura[i] < media) {
            temp_inferior += 1;
        }
    }

    printf("a) Menor temperatura: %.1f | Maior temperatura: %.1f\n", menor, maior);
    printf("b) Temperatura media: %.2f\n", media);
    printf("c) Quantidade de dias que a temperatura inferior a media(%.2f): %d", media, temp_inferior);

    return 0;
}