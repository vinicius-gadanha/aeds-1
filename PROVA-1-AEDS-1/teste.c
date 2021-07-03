#include <stdio.h>

int main(void){
    int cont=1, num=0, soma=0;
    while(cont<=5){
        printf("Digite um numero:");
        scanf("%d", &num);
        soma += num;
        cont++;
    }
    printf("%d", soma);
    return 0;
}