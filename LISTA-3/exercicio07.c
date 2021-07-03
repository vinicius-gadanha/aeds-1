#include <stdio.h>

int main(void){
    int n=3, i;
    int val = 3;
    for (i=5; i>=0; i--)
    {
        if(i> 0 && i<=2){
            val += n;
        }   
        else if(n == 3){
             n--;
        }  
        else{
           val = n + 1; 
        }
    }//Fim for
    printf("\n %d", val);

    return 0;
}
//val = -1 : Resultado = 3
//val =  0 : Resultado = 3
//val =  2 : Resultado = 3
//val =  3 : Resultado = 3