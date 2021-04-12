#include <stdio.h>

int main(void) {
    char opcao = 'C', sexo;
    int cont = 1, olho = 0, cabelo = 0, idade = 0, idade_total = 0, masculino = 0, feminino = 0, contoc = 0;
    double altura = 0, peso = 0, altura_total = 0, peso_total = 0;
    while (opcao != 'S') {
        printf("========================================================================\n");
        printf("                           Pessoa %d\n", cont);
        printf("Informe seus dados:\n");
        printf("Sexo [M] masculinos ou [F] feminino:");
        scanf(" %c", &sexo);
        printf("Cor dos olhos:\n[1]-Azuis\n[2]-Verdes\n[3]-Castanhos\n");
        printf("Digite o numero da cor do seu olho:");
        scanf("%d", &olho);
        printf("Cor dos cabelos:\n[1]-Loiros\n[2]-Castanhos\n[3]-Preto\n");
        printf("Digite o numero da cor do seu cabelo:");
        scanf("%d", &cabelo);
        printf("Idade:");
        scanf("%d", &idade);
        printf("Altura(m)");
        scanf("%lf", &altura);
        printf("Peso(Kg):");
        scanf("%lf", &peso);
        printf("========================================================================\n");

        cont++;
        idade_total += idade;
        peso_total += peso;
        altura_total += altura;

        if (sexo == 'M') {
            masculino += 1;
        } else if (sexo == 'F') {
            feminino += 1;
        }

        if (olho == 2 && cabelo == 1) {
            contoc += 1;
        }

        printf("Deseja continuar? Se sim digite 'C', se deseja sair digite 'S':");
        scanf(" %c", &opcao);
    }  //Fim while
    printf("========================================================================\n");
    printf("Media da idade:  %.2f\n", idade_total / cont * 1.00);
    printf("Media do peso:   %.2f\n", peso_total / cont);
    printf("Media da altura: %.2f\n", altura_total / cont);

    printf("masculino: %d feminino %d total:%d\n", masculino, feminino, cont);

    printf("Porcentagem sexo masculino: %.1f%%\n", masculino * 100.0 / cont - 1);
    printf("Porcentagem sexo feminino:  %.1f%%\n", feminino * 100.0 / cont - 1);
    printf("Quantidade de pessoas que possuem olhos verdes e cabelo loiro: %d\n", contoc);
    printf("========================================================================\n");
    return 0;
}