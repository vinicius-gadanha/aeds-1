#include <stdbool.h>
#include <stdio.h>

bool verificacao_divisivel(int n1, int n2) {
    bool flag;
    int divisao_int = 0;
    float divisao = 0, resultado = 0;
    divisao_int = n1 / n2;
    divisao = n1 * 1.0 / n2 * 1.0;
    resultado = divisao_int - divisao;
    if (resultado == 0) {
        flag = true;
    } else {
        flag = false;
    }
    return flag;
}

int main(void) {
    int num1, num2;
    printf("Digite um numero:");
    scanf("%d", &num1);
    printf("Digite outro numero:");
    scanf("%d", &num2);
    if (verificacao_divisivel(num1, num2) == true) {
        printf("%d e divisivel por %d\n", num1, num2);
    } else {
        printf("Nao divisivel.\n");
    }
    return 0;
}