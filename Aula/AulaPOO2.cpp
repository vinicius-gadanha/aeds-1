#include <string.h>

#include <iostream>

using namespace std;

class Pessoa {
   protected:
    //Atributos
    int mat;
    char nome[40];

   public:
    //Métodos
    virtual void cadastrarPessoa() {}
    virtual void mostrarPessoa() {}
};

class Aluno : public Pessoa {
   private:
    double nota;

   public:
    void cadastrarPessoa() {
        cout << "Digite uma matricula: ";
        cin >> mat;
        cout << "Digite um nome: ";
        cin >> nome;
        cout << "Digite uma nota:";
        cin >> nota;
    }
    void mostrarPessoa() {
        cout << "\nMatricula aluno:\n"
             << mat;
        cout << "Nome:\n"
             << nome;
        cout << "Nota:\n"
             << nota;
    }
};

class Professor : public Pessoa {
   private:
    double salario;

   public:
    void cadastrarPessoa() {
        cout << "Digite uma matricula: ";
        cin >> mat;
        cout << "Digite um nome: ";
        cin >> nome;
        cout << "Digite o salario:";
        cin >> salario;
    }
    void mostrarPessoa() {
        cout << "\nMatricula Professor:\n"
             << mat;
        cout << "Nome:\n"
             << nome;
        cout << "Salario:\n"
             << salario;
    }
};

int main() {
    Aluno aluno1;
    Professor prof;
    cout << "Cadastrar aluno:\n";
    aluno1.cadastrarPessoa();
    aluno1.mostrarPessoa();
    cout << "Cadastrar Professor:\n";
    prof.cadastrarPessoa();
    prof.mostrarPessoa();
    return 0;
}
