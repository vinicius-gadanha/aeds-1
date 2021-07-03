#include <stdio.h>

float serie(float denom, int n){
    float resp=0;
    if(denom<=n){
        resp = 1/denom + serie(denom+1, n);
    }
    return resp;
}


int main(void){
    int num;
    float resposta;
    do{
        printf("Digite um numero:");
        scanf("%d", &num);
        if(num<=0){
            printf("Digite um valor inteiro e maior do que zero.\n");
        }
    }while(num<=0);
    resposta = serie(1, num);
    printf("%.3f", resposta);

    return 0;
}