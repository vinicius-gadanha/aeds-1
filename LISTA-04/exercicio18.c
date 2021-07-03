#include <stdbool.h>
#include <stdio.h>

float validacao_zero(void) {
    float numero;
    do {
        printf("Digite um numero:");
        scanf("%f", &numero);
        if (numero <= 0) {
            printf("Numero invalido, tente novamente.\n");
        }
    } while (numero <= 0);
    return numero;
}

bool validacao_triangulo(float n1, float n2, float n3) {
    bool flag;
    if (n1 <= (n2 + n3) && n2 <= (n1 + n3) && n3 <= (n1 + n2)) {
        flag = true;
    } else {
        flag = false;
    }
    return flag;
}

int tipo_triangulo(float n1, float n2, float n3) {
    int tipo;
    if (n1 == n2 && n1 == n3) {
        tipo = 1;
    } else if (n1==n2&&n1!=n3 && n1==n3&&n1!=n2 && n2==n3&&n2!=n1) {
        tipo = 2;
    }else{
        tipo = 3;
    }
    return tipo;
}

int main(void) {
    float num1, num2, num3;
    int triangulo;
    num1 = validacao_zero();
    num2 = validacao_zero();
    num3 = validacao_zero();

    if (validacao_triangulo(num1, num2, num3) == true) {
        printf("Esses lados formam um triangulo.\n");
        triangulo = tipo_triangulo(num1,num2,num3);
        if(triangulo == 1){
            printf("Tipo: Equilatero\n");
        }else if(triangulo == 2){
            printf("Tipo: Isosceles\n");
        }else if(triangulo == 3){
            printf("Tipo: Escaleno\n");
        }        
    } else {
        printf("Esses lados nao formam um traingulo.\n");
    }
    return 0;
}