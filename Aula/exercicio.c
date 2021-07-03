#include <stdio.h>
#include <stdlib.h>

double umSobreImpar(int n){
    double resposta = 1/(3 + 2*(n-1));
    return resposta; 
}

double somaUmSobreImpar(int n){
    double resp = 0;
    for(int i=0; i<n; i++)
        resp = resp + umSobreImpar(i);
    return resp;
}

void exercicio(){
    int n;
    printf("Informe a quantidade de termos: \n");
    scanf("%d", &n);
    double valor = somaUmSobreImpar(n);
    printf("O valor da soma da serie: %f", valor);
}

int main(void){
    exercicio();
    return 0;
}