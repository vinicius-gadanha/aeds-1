#include <stdio.h>
int main(void) {
    int cont1 = 0, cont2 = 0, num = 0, quantidade_primos = 0, cont_divisor = 0;
    printf("==============================================\n");
    for (cont1 = 1; cont1 <= 10; cont1++) {
        cont_divisor = 0;
        printf("Digite um numero inteiro:");
        scanf("%d", &num);
        if (num > 2) {
            for (cont2 = 2; cont2 <= num - 1; cont2++) {
                if (num % cont2 == 0) {
                    cont_divisor += 1;
                }
            }  //Fim for cont2
        } else if (num == 2) {
            cont_divisor = 0;
        } else {
            cont_divisor = 1;
        }
        if (cont_divisor == 0) {
            quantidade_primos += 1;
            printf("Numero(%d): PRIMO.\n", num);
        } else {
            printf("Numero(%d): NAO PRIMO\n", num);
        }
    }  //Fim for cont1
    printf("==============================================\n");
    printf("Quantidade de numeros primos digitados: %d\n", quantidade_primos);
    printf("==============================================\n");
    return 0;
}