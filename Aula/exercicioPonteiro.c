/* Faça um programa que leia 2 valores inteiros e chame uma função que receba estas  2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o valor de A. */

#include <stdio.h>
#include<stdlib.h>

void troca_valor (int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main(void){
    int a, b;
    printf("Digite um numero(a):");
    scanf("%d", &a);
    printf("Digite outro numero(b):");
    scanf("%d", &b);
    printf("Valor de A: %d\nValor de B: %d\n", a, b);
    troca_valor(&a, &b);
    printf("Valores Trocados\n");
    printf("Valor de A: %d\nValor de B: %d\n", a, b);


    return 0;
}