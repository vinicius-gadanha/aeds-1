#include<stdio.h>
#include<stdlib.h>

//Passagem por referencia

void soma (int *n){
    *n = *n + 10;
    printf("O valor de n: %p\n e o conteudo aponta %d\n", n, *n);
}

int main(void){
    int num = 40;
    printf("O valor de num: %d e o end de num %p\n", num, &num);
    soma(&num);
    printf("O valor de num: %d e o end de num %p\n", num, &num);

    int *p = &num;
    *p = 500;
    (*p)++;
    printf("O valor de num: %d <-> %d\n", *p, num);

    int *q;
    q = *p;
    printf("O valor de num: %d <-> %d\n", *q, num);

    printf("%p %p %p\n", &num, p, q);

    printf("%p %p %p\n", &num, &p, &q);

    return 0;
}