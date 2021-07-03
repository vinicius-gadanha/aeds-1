#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int num_habitantes = 5;

typedef struct Habitante {
    char sexo, cor_olho;
    int idade;
    double altura;
} Habitante;

void caracteristicasHabitante(Habitante *habitante) {
    printf("=========================================\n");
    fflush(stdin);
    printf("[F] - Feminino\n[M] - Masculino\n");
    printf("Informe seu sexo: ");
    gets(&habitante->sexo);
    fflush(stdin);
    printf("[A] - Azuis\n[V] - Verdes\n[C] - Castanhos\n");
    printf("Informe cor do olho:");
    gets(&habitante->cor_olho);
    printf("Informe sua idade:");
    scanf("%d", &habitante->idade);
    printf("Informe sua altura:");
    scanf("%lf", &habitante->altura);
}

int main(void) {
    Habitante habitantes[num_habitantes];

    int i = 0, count_media = 0, soma_idade = 0, maior_idadeB = 0, quantidade_pessoasC = 0, count_homem = 0;
    double media_idadeA, porcentagem_homens = 0;

    printf("Pesquisa:\n");
    for (i = 0; i < num_habitantes; i++) {
        caracteristicasHabitante(&habitantes[i]);
    }

    for (i = 0; i < num_habitantes; i++) {
        printf("===================\n");
        printf("Habitante[%d]\n", i);
        printf("SEXO: %c\n", habitantes[i].sexo);
        printf("Cor Olho: %c\n", habitantes[i].cor_olho);
        printf("Idade: %d\n", habitantes[i].idade);
        printf("Altura: %.2f\n", habitantes[i].altura);
        printf("====================\n");
    }

    for (i = 0; i < num_habitantes; i++) {
        if (habitantes[i].cor_olho == 'C' && habitantes[i].altura > 1.60) {
            count_media += 1;
            soma_idade += habitantes[i].idade;
        }
        if (habitantes[i].idade > maior_idadeB) {
            maior_idadeB = habitantes[i].idade;
        }
        if (habitantes[i].sexo == 'F' && ((habitantes[i].idade >= 20 && habitantes[i].idade <= 45) || (habitantes[i].cor_olho == 'V' && habitantes[i].altura < 1.70))) {
            quantidade_pessoasC += 1;
        }
        if (habitantes[i].sexo == 'M') {
            count_homem += 1;
        }
    }
    if (count_media == 0) {
        media_idadeA = 0;
    } else {
        media_idadeA = (soma_idade * 1.0) / (count_media * 1.0);
    }

    if (count_homem == 0) {
        porcentagem_homens = 0;
    } else {
        porcentagem_homens = (count_homem * 100.0) / (num_habitantes * 1.0);
    }

    printf("Questao a) %.2f\n", media_idadeA);
    printf("Questao b) %d\n", maior_idadeB);
    printf("Questao c) %d\n", quantidade_pessoasC);
    printf("Questao d) %.2f%%\n", porcentagem_homens);

    return 0;
}