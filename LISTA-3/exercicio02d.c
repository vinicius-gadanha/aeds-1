#include <stdio.h>

int main(void) {
    int a = 0, qtde = a, m;
    for (a = 0; a <= 5; a++) {
        m = qtde + 10;
        if (a > 3) {
            m = m - 5;
        }
    }  //Fim for
    printf("m = %d\na = %d\nqtde = %d", m, a, qtde);
    return 0;
}