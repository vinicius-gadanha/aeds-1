#include <stdio.h>

int main(void) {
    int opcao=0, idade=0, sexo=0, cont=1;
    int contf_faustao=0, contf_hulk=0, contf_thevoice=0;
    int idade_thevoice=0, contf_thevoice2=0;
    int cont_faustao_18_25=0, cont_faustao=0;
    float media=0;

    while(opcao != 4){
        printf("===================================================\n");
        printf("            Telespectador %d\n", cont);
        printf("[1]-Domingao do Faustao\n[2]-Luciaono Hulk\n[3]-The Voice Brasil\n[4]-Sair\n");
        printf("Informe o numero da opcao:");
        scanf("%d", &opcao);
        if(opcao == 4){
            printf("Saindo...\n");
            break;
        }
        if(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4){
            printf("Opcao invalida, por favor tente novamente.\n");
        }//Fim(validação da opção)
        else{
            cont++;
            do{
                printf("Informe sua idade:");
                scanf("%d", &idade);
                if(!(idade>=0 && idade<=150)){
                    printf("Idade invalida, tente novamente\n");
                }
            }while(!(idade>=0 && idade<=150));//Fim do-while(validação da idade)

            do{
                printf("Informe seu sexo:\n[1]-Feminino\n[2]-Masculino\n");
                printf("Informe o numero do sexo:");
                scanf("%d", &sexo);
                if((sexo != 1 && sexo != 2)){
                    printf("Sexo invalido, tente novamente\n");
                }
            }while(sexo != 1 && sexo != 2);//Fim do-while(validação do sexo)
            
            //Contagem de votos femininos em relação aos programas
            if(opcao == 1 && sexo == 1){
                contf_faustao += 1;
            }else if(opcao == 2 && sexo == 1){
                contf_hulk +=1;
            }else if(opcao == 3 && sexo == 1){
                contf_thevoice += 1;
            }
            
            //Contagem dos votos para o The Voice Brasil e a soma da idade desses participantes
            if(opcao == 3 && sexo == 2){
                idade_thevoice += idade;
                contf_thevoice2 += 1;
            }

            //Contagem de telespectadores do Domingão do Faustão com idade entre 18  e 28 anos
            if(opcao == 1 && idade>= 18 && idade<= 28){
                cont_faustao_18_25 += 1;
            }
            //Contagem dos telespectadores do Domingão do Faustão
            if(opcao == 1){
                cont_faustao += 1;

            //Contagem total do numero dos telespectadores
            
            }
        }
    }//Fim while
    //Numero 1
    printf("===================================================\n");
    if(contf_faustao > contf_thevoice && contf_faustao > contf_hulk){
        printf("1-Domingao do faustao\n");
    }
    else if(contf_thevoice > contf_faustao && contf_thevoice > contf_hulk){
        printf("1-The Voice Brasil\n");
    }
    else if( contf_hulk > contf_faustao && contf_hulk > contf_thevoice){
        printf("1-Luciano Hulk\n");
    }
    else if(contf_faustao == contf_thevoice && contf_faustao > contf_hulk){
        printf("1-Domingao do faustao e The Voice Brasil\n");
    }
    else if(contf_faustao == contf_hulk && contf_faustao > contf_thevoice){
        printf("1-Domingao do faustao e Luciano Hulk\n");
    }
    else if(contf_thevoice == contf_hulk && contf_thevoice > contf_faustao){
        printf("1-The Voice Brasil e Luciano Hulk\n");
    }else{
        printf("1-Os tres programas tem a mesma qunatidade de votos femininos.\n");
    }

    //Numero 2
    printf("===================================================\n");
    if(contf_thevoice2 == 0){
        printf("2-Nao foi possivel calcular a media\n");
    }else{
        media = idade_thevoice / contf_thevoice2;
        printf("2-Media: %.2f\n", media);
    }
    //Numero 3
    printf("===================================================\n");
    printf("3-Porcentagem: %.1f%%\n", cont_faustao_18_25 * 100.0 / cont_faustao);
    printf("===================================================\n");
    printf("Programa Finalizado.");
    return 0;
}