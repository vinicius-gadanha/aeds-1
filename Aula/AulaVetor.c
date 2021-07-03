#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j, n, soma;

    printf("Quantas notas deseja digitar?");
    scanf("%d", &n);
    float nota[n];

    //Entrada de dados
    for (i = 0; i < n; i++) {
        printf("Digite uma nota: ");
        scanf("%f", &nota[i]);
    }  //Fim do For

    //Processamento de dados
    for (i = 0; i < n; i++) {
        soma += nota[i];
        if (nota[i] > 15) {
            printf("Indice da nota mior que 15: %d\n", i);
        }
    }  //Fim do For
    printf("Soma das notas: %.2f\n", soma);

    //Saída de dados
    for (j = 0; j < n; j++) {
        printf("Nota %d: %.2f\n", j + 1, nota[j]);
    }  //Fim do For

    return 0;
}