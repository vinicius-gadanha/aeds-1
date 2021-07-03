#include <stdio.h>

int multiplica(int num1, int num2){
    int s=0;
    if(num2==1){
        s += num1;
        
    }else{
        s = num1 + multiplica(num1, num2 - 1);
    }
    return s;
}



int main(void){
    int num1, num2, soma=0;
    do{
        printf("Digite um numero:");
        scanf("%d", &num1);
        if(num1<=0){
            printf("Digite um valor inteiro e maior do que zero.\n");
        }
    }while(num1<=0);
    do{
        printf("Digite outro numero:");
        scanf("%d", &num2);
        if(num2<=0){
            printf("Digite um valor inteiro e maior do que zero.\n");
        }
    }while(num2<=0);
    soma = multiplica(num1, num2);
    printf("%d x %d = %d", num1, num2, soma);
    return 0;
}