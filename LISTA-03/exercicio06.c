#include <stdio.h>

int main(void){
    int x, y, R;
    printf("Digite valor de 'x':");
    scanf("%d", &x);
    printf("Digite valor de 'y':");
    scanf("%d", &y);
    while(y!=0){
        R = (x % y);
        printf("================\n");
        printf("[Inicio]\nx=%d\ny=%d\nR=%d\n", x, y, R);
        x = y;
        y = R;
        printf("================\n");
        printf("[Final]\nx=%d\ny=%d\nR=%d\n", x, y, R);
    }//Fim while
    printf("%d", x);
    return 0;
}