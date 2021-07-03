#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <math.h>

int potencia(int base, int expoente){
    printf("----------- Inicio Potencia ------------");
    int resposta = 1;
    for(int i=0; i<expoente; i++)
        resposta = resposta * base;
    printf("----------- Final Potencia  ------------");
    return resposta;
}

bool ehPar(int num){
    bool flag;
    if(num%2 == 0)
        flag = true;
    else
        flag = false;
    return flag;
}

void exercicio(int limite){
    for(int i=0; i <= limite; i++){
        if(ehPar(i) == true){
            printf("%d \t", i);
        }
    }
    printf("\n");
}

void menu(){
    printf("==============================\n");
    printf("== PUC Minas                ==\n");
    printf("== AEDS 01                  ==\n");
    printf("== Vinicius Gadanha         ==\n");
    printf("==============================\n");

}

int main(void){
    menu();
    int num;
    printf("Entre com um numero:");
    scanf("%d", &num);

    exercicio(num);
    return 0;
}
