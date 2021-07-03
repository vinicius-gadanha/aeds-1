#include <stdio.h>

int main(void) {
    int i = 0, alunos_peso70 = 0;
    float peso[30], media_pesos = 0, maior = 0, menor = 9999, soma = 0;

    for (i = 0; i < 30; i++) {
        printf("Peso Aluno %d: ", i + 1);
        scanf("%f", &peso[i]);
        soma += peso[i];
        if (peso[i] > 70) {
            alunos_peso70 += 1;
        }
        if (peso[i] < menor) {
            menor = peso[i];
        }
        if (peso[i] > maior) {
            maior = peso[i];
        }
    }
    media_pesos = soma / 30;

    printf("a) Total de alunos com peso maior que 70 Kg: %d\n", alunos_peso70);
    printf("b) Media dos pesos: %.2f Kg\n", media_pesos);
    printf("c) Maior peso: %.1f Kg\n", maior);
    printf("d) Menor peso: %.1f Kg\n", menor);

    return 0;
}