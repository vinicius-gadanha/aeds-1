#include <string.h>

#include <iostream>

using namespace std;

class Aluno {
   private:
    char nome[40];
    int serie, grau;
    static int alunos_cadastrados;

   public:
    void cadastroAluno() {
        cout << "Informe seu nome:";
        fgets(nome, 40, stdin);
        cout << "Informe sua serie:";
        cin >> serie;
        cout << "Informe o grau:";
        cin >> grau;
    }

    void mostrarAluno() {
        cout << "\n\nNome:" << nome;
        cout << "\nSerie:" << serie;
        cout << "\nGrau:" << grau;
    }

    void mostrarQuantidadeAlunos() {
        cout << "\n\nQuantidade de Alunos:" << alunos_cadastrados;
    }

    Aluno() {
        alunos_cadastrados += 1;
    }
};

int Aluno::alunos_cadastrados = 0;

int main(void) {
    Aluno alunos[4];
    int i;

    for (i = 0; i < 4; i++) {
        alunos[i].cadastroAluno();
    }
    for (i = 0; i < 4; i++) {
        alunos[i].mostrarAluno();
    }

    alunos[0].mostrarQuantidadeAlunos();

    return 0;
}
