#include <stdio.h>
#include <stdlib.h>

typedef struct Data{
 int dia, mes, ano;
}Data;

typedef struct Aluno{
 int mat;
 char nome[40], endereco[60];
 Data dataNascimento;
 float nota;
}Aluno;

void CadastrarAluno(Aluno *alu);
void MostrarAluno(Aluno aluno);

int main()
{
    Aluno aluno;

    CadastrarAluno(&aluno);
    MostrarAluno(aluno);
    return 0;
}

void CadastrarAluno(Aluno *alu){

    printf("Digite a matricula: ");
    scanf("%d",&(*alu).mat);
    fflush(stdin);
    printf("Digite o nome: ");
    gets(alu->nome);
    fflush(stdin);
    printf("Digite o endereco: ");
    gets(alu->endereco);
    printf("Digite a data de nascimento: ");
    printf("\nDia: ");
    scanf("%d",&alu->dataNascimento.dia);
    printf("\nMes: ");
    scanf("%d",&alu->dataNascimento.mes);
    printf("\nAno: ");
    scanf("%d",&alu->dataNascimento.ano);
    printf("Digite a nota: ");
    scanf("%f",&alu->nota);

}

void MostrarAluno(Aluno aluno){
    printf("\nMatricula:%d ", aluno.mat);
    printf("\nNome: %s", aluno.nome);
    printf("\nData de nascimento: %d/%d/%d",aluno.dataNascimento.dia, aluno.dataNascimento.mes, aluno.dataNascimento.ano);

}
