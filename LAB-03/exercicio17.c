#include <stdio.h>

int main(void) {
    int cont = 1, canal = -1, pessoas = 0, total_pessoas = 0;
    int aud_canal4 = 0, aud_canal5 = 0, aud_canal7 = 0, aud_canal12 = 0;
    while (canal != 0) {
        printf("================================================\n");
        printf("       Casa %d\n", cont);
        printf("Canais fornecidos(4, 5, 7, 12)\n");
        printf("Informe o canal assistido:");
        scanf("%d", &canal);
        printf("Informe o numero de pessoas que assistiram:");
        scanf("%d", &pessoas);
        cont++;
        total_pessoas += pessoas;
        if (canal == 4) {
            aud_canal4 += pessoas;
        } else if (canal == 5) {
            aud_canal5 += pessoas;
        } else if (canal == 7) {
            aud_canal7 += pessoas;
        } else if (canal == 12) {
            aud_canal12 += pessoas;
        }

        printf("Deseja sair? Para sair digite'0':\n");
        printf("Se deseja continuar digite'1':");
        scanf("%d", &canal);
    }
    printf("================================================\n");
    printf("    Porcentagem de audiencia de cada canal\n");
    printf("Canal 4:  %.1f%%\n", aud_canal4 * 100.0 / total_pessoas);
    printf("Canal 5:  %.1f%%\n", aud_canal5 * 100.0 / total_pessoas);
    printf("Canal 7:  %.1f%%\n", aud_canal7 * 100.0 / total_pessoas);
    printf("Canal 12: %.1f%%\n", aud_canal12 * 100.0 / total_pessoas);
    printf("================================================\n");
    return 0;
}