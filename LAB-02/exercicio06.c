#include <stdio.h>
#include <math.h>

int main(void) {
    char code;
    float num1, num2;
    printf("Digite um numero:");
    scanf("%f", &num1);
    printf("Digite outro numero:");
    scanf("%f", &num2);
    printf("a) O primeiro numero elevado ao segundo numero\n");
    printf("b) Raiz quadrada de cada uma dos numeros\n");
    printf("c) Raiz cubica de cada um dos numeros\n");
    printf("Digite a, b ou c:");
    scanf(" %c", &code);
    switch(code){
        case 'a':
            printf("%.1f elevado a %.1f = %.1f", num1, num2, pow(num1, num2));
            break;
        case 'b':
            printf("A raiz quadrada de %.1f = %.1f\n", num1, sqrt(num1));
            printf("A raiz quadrada de %.1f = %.1f\n", num2, sqrt(num2));
            break;
        case 'c':
            printf("A raiz cubica de %.1f = %.1f\n", num1, pow(num1, (1.0/3.0)));
            printf("A raiz cubica de %.1f = %.1f\n", num2, pow(num2, (1.0/3.0)));
            break;
        default:
            printf("Opcao invalida!");
            break;
    }       
    return 0;
}