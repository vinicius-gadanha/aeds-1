#include <stdio.h>

float calcular_novo_salario(int perc, float salario){
    float resultado;
    resultado = (salario * (100 + perc) / 100);
    return resultado;
}

int main(void){
    char opcao;
    float salario, novo_salario;
    do{
        printf("=======================================\n");
        printf("Menu:\n");
        printf("[A] = aumento de 8%% no salario\n");
        printf("[B] = aumento de 11%% no salario\n");
        printf("[C] = aumento de 20%% no salario\n");
        printf("[D] = sair do programa\n");
        //Validação Opção
        do{
          printf("Digite sua escolha:"); 
          scanf(" %c", &opcao); 
          if(opcao!='A'&&opcao!='B'&&opcao!='C'&&opcao!='D'){
              printf("Opcao Invalida...\n");
          }
        }while(opcao!='A'&&opcao!='B'&&opcao!='C'&&opcao!='D');

        if(opcao!='D'){
            printf("Informe seu salario atual:");
            scanf("%f", &salario);

            switch(opcao){
                case 'A':
                    novo_salario = calcular_novo_salario(8, salario);
                    printf("=======================================\n");
                    printf("Salario Antigo: R$ %.2f\n", salario);
                    printf("Novo Salario: R$ %.2f\n", novo_salario);
                    break;
                
                case 'B':
                    novo_salario = calcular_novo_salario(11, salario);
                    printf("=======================================\n");
                    printf("Salario Antigo: R$ %.2f\n", salario);
                    printf("Novo Salario: R$ %.2f\n", novo_salario);
                    break;

                case 'C':
                    novo_salario = calcular_novo_salario(20, salario);
                    printf("=======================================\n");
                    printf("Salario Antigo: R$ %.2f\n", salario);
                    printf("Novo Salario: R$ %.2f\n", novo_salario);
                    break;
            }
        }
    }
    while(opcao!='D');
    printf("Fim do programa");
}