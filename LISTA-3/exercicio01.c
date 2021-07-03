#include <stdio.h>

int main(void) {
    int i=0, qtde=0;
    double soma=0, num=0, media=0;
    for(i=1; i<=6; i++){
        printf("Digite um numero:");
        scanf("%lf", &num);
        soma += num;
        if(num == 10){
            qtde += 1;
        }
    }//Fim for
    media = soma / 6;
    printf("Resultado = %.1f\n", media);
    printf("Quantidade = %d", qtde);
    return 0;
}