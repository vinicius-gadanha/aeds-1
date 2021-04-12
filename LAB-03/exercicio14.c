#include <stdio.h>

int main(void) {
    int cont = 0, idade = 0, opiniao = 0, total_idade3 = 0;
    int quantidade_opiniao1 = 0, quantidade_opiniao2 = 0, quantidade_opiniao3 = 0;

    for (cont = 1; cont <= 15; cont++) {
        printf("===================================================\n");
        printf("                Espectador %d\n", cont);
        printf("Informe sua idade:");
        scanf("%d", &idade);
        printf("Informe sua opiniao do filme:\n");
        printf("1-Regular\n2-Bom\n3-Otimo\n");
        printf("Informe o numero correspondente a sua opiniao:");
        scanf("%d", &opiniao);
        if (opiniao == 1) {
            quantidade_opiniao1 += 1;
        } else if (opiniao == 2) {
            quantidade_opiniao2 += 1;
        } else if (opiniao == 3) {
            quantidade_opiniao3 += 1;
            total_idade3 += idade;
        }
    }  //Fim for cont
    printf("===================================================\n");
    printf("            Opiniao dos espectadores\n");
    printf("Regualar: %d pessoas\n", quantidade_opiniao1);
    printf("Bom:      %d pessoas\n", quantidade_opiniao2);
    printf("Otimo:    %d pessoas\n", quantidade_opiniao3);
    printf("===================================================\n");
    printf("Media das idades das pessoas que responderam otimo:");
    printf("%.2f\n", total_idade3 / quantidade_opiniao3 * 1.0);
    printf("Porcentagem de pessoas que responderam bom, entre todos os espectadores analizados:");
    printf("%.2f%%\n", quantidade_opiniao2 * 100.0 / 15);
    printf("===================================================\n");
    return 0;
}