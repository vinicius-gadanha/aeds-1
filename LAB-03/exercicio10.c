#include <stdio.h>

int main(void) {
    int cont_times = 0, cont_jogadores, idade = 0, idade18 = 0, idade_total = 0;
    float peso = 0, peso80 = 0, altura = 0, altura_total = 0;
    float time1 = 0, time2 = 0, time3 = 0, time4 = 0, time5 = 0;

    for (cont_times = 1; cont_times <= 5; cont_times++) {
        printf("***************************************************\n");
        printf("                   Time %d\n", cont_times);

        for (cont_jogadores = 1; cont_jogadores <= 11; cont_jogadores++) {
            printf("=======================================\n");
            printf("              Jogador %d\n", cont_jogadores);
            printf("Informe sua idade:    ");
            scanf("%d", &idade);
            printf("Informe seu peso(Kg): ");
            scanf("%f", &peso);
            printf("Informe sua altura(m):");
            scanf("%f", &altura);
            idade_total += idade;
            altura_total += altura;
            if (idade < 18) {
                idade18 += 1;
            }
            if (peso > 80) {
                peso80 += 1;
            }
        }  //Fim for(JOGADORES)

        if (cont_times == 1) {
            time1 = idade_total / 11;
        } else if (cont_times == 2) {
            time2 = idade_total / 11;
        } else if (cont_times == 3) {
            time3 = idade_total / 11;
        } else if (cont_times == 4) {
            time4 = idade_total / 11;
        } else if (cont_times == 5) {
            time5 = idade_total / 11;
        }
        idade_total = 0;
    }  //Fim for(TIMES)

    printf("***************************************************\n");
    printf("Quantidade de jogadores menores de 18 anos: %d\n", idade18);
    printf("=======================================\n");
    printf("Media das idades dos jogadores:\n");
    printf("Time 1: %.1f\n", time1);
    printf("Time 2: %.1f\n", time2);
    printf("Time 3: %.1f\n", time3);
    printf("Time 4: %.1f\n", time4);
    printf("Time 5: %.1f\n", time5);
    printf("=======================================\n");
    printf("Media da altura de todos os jogadores: %.1f\n", altura_total / 55);
    printf("=======================================\n");
    printf("Porcentagem de jogadores com mais de 80Kg entre todos os jogadores:\n");
    printf("%.2f%%\n", peso80 * 100 / 55);
    printf("=======================================\n");
    return 0;
}