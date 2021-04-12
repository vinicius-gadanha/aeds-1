#include <stdio.h>

int main(void) {
    int cont;
    float valor, vista, prazo;
    char code;
    for (cont = 1; cont <= 15; cont += 1) {
        printf("\n========================================================\n");
        printf("Digite o valor da compra %d:", cont);
        scanf("%f", &valor);
        printf("A vista(V) ou a prazo(P):");
        scanf(" %c", &code);
        switch (code) {
            case 'V':
                printf("R$ %.2f adicionado a vista.", valor);
                vista += valor;
                break;
            case 'P':
                printf("R$ %.2f adicionado a prazo.", valor);
                prazo += valor;
                break;
            default:
                printf("Caractere invalido. Digite V ou P.");
        }

    }  //Fim do for
    printf("\n========================================================\n");
    printf("O valor total das compras a vista:   R$ %.2f\n", vista);
    printf("O valor total das compras a prazo:   R$ %.2f\n", prazo);
    printf("O valor total das compras efetuadas: R$ %.2f\n", vista + prazo);
    printf("O valor da primeira prestacao:       R$ %.2f", prazo / 3);
    printf("\n========================================================\n");
    return 0;
}