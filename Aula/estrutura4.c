#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
 int dia, mes, ano;
}Data;

typedef struct Aluno{
 int mat;
 char nome[40], endereco[60];
 Data dataNascimento;
 float nota[3];
}Aluno;

int main()
{
    Aluno alu;

    printf("Digite a matricula: ");
    scanf("%d",&alu.mat);
    fflush(stdin);
    printf("Digite o nome: ");
    gets(alu.nome);
    fflush(stdin);
    printf("Digite o endereco: ");
    gets(alu.endereco);
    printf("Digite a data de nascimento: ");
    printf("\nDia: ");
    scanf("%d",&alu.dataNascimento.dia);
    printf("\nMes: ");
    scanf("%d",&alu.dataNascimento.mes);
    printf("\nAno: ");
    scanf("%d",&alu.dataNascimento.ano);
    printf("Digite a nota: ");
    scanf("%f",&alu.nota);

    printf("\nMatricula:%d ", alu.mat);
    printf("\nNome: %s", alu.nome);
    printf("\nData de nascimento: %d/%d/%d",alu.dataNascimento.dia, alu.dataNascimento.mes, alu.dataNascimento.ano);

    return 0;
}
