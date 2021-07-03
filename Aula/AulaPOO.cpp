#include <iostream>
#include <string.h>

using namespace std;

class Aluno{
    private:
        //Atributos
        int mat;
        char nome[40];
        double nota;
    public:
        //Métodos
        void cadastrarAluno(){
            cout<<"Digite uma matricula: ";
            cin>>mat;
            cout<<"Digite um nome: ";
            cin>>nome;
            cout<<"Digite uma nota: ";
            cin>>nota;
        }
        void mostrarAluno(){
            cout<<"\nMatricula aluno:"<<mat;
            cout<<"\nNome:"<<nome;
            cout<<"\nNota:"<<nota;
            cout<<"\n=================================\n";
        }
        //Método Construtor
        Aluno(){
            mat = 1;
            strcpy(nome, "Vinicim");
            nota = 78;
        }
        Aluno(int m, char name[40], float nt){
            mat = m;
            strcpy(nome, name);
            nota = nt;
        }

};

int main(){
    Aluno aluno1, aluno2, aluno3, aluno4(23, "Roberto", 78.5);
    aluno1.cadastrarAluno();
    aluno2.cadastrarAluno();
    cout<<"Cadastro de Aluno:";
    aluno1.mostrarAluno();
    aluno2.mostrarAluno();
    aluno3.mostrarAluno();
    return 0;
}