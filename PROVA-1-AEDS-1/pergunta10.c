#include <stdio.h>

int main(void) {
    double massa=0, massa_inicial=0, horas=0, minutos=0;
    int  segundos=0;
    int horas_int=0, minutos_int=0, segundos_int=0;
    printf("Valor inicial da massa:");
    scanf("%lf", &massa);
    massa_inicial = massa;
    while(massa > 0.5){
        massa = massa / 2;
        segundos += 50;
        printf("Massa: %.2f\n", massa);
    }//Fim While
    minutos = segundos / 60.0;//Minutos calculados
    horas = minutos / 60.0;//Horas calculadas

    horas_int = segundos / 3600;//Horas inteiras calculada
    minutos_int = (segundos - (horas_int * 3600)) / 60;//Minutos inteiros calculado
    segundos_int = (segundos - (horas_int * 3600)-(minutos_int * 60));//Segundos inteiros calculado
    printf("================================\n");
    printf("Massa inicial: %.1f\n", massa_inicial);
    printf("Tempo em segundos: %d\n", segundos);
    printf("Tempo em minutos: %.2f\n", minutos);
    printf("Tempo em horas: %.2f\n", horas);
    printf("Tempo: %dH:%dm:%ds\n", horas_int, minutos_int, segundos_int);
    printf("================================\n");
    return 0;
}