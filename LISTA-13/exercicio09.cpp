#include <string.h>

#include <iostream>

using namespace std;

class Empresa {
   public:
    char nome[40], adress[40], estado[40], cidade[40];
    int cep, telefone;

    Empresa() {
        cep = 0;
        memset(nome, 0, sizeof(nome));
        memset(adress, 0, sizeof(adress));
        memset(estado, 0, sizeof(estado));
        memset(cidade, 0, sizeof(cidade));
    }

    Empresa(char nomeParameter[40], char adressParameter[40], char estadoParameter[40], char cidadeParameter[40], double cepPriceParameter) {
        strcpy(nome, nomeParameter);
        strcpy(adress, adressParameter);
        strcpy(cidade, cidadeParameter);
        strcpy(estado, estadoParameter);
        cep = cepPriceParameter;
    }

    void get() {
        fflush(stdin);
        cout << "\n\nNome:";
        fgets(nome, 40, stdin);
        fflush(stdin);
        cout << "Endereco:";
        fgets(adress, 40, stdin);
        fflush(stdin);
        cout << "Estado:";
        fgets(estado, 40, stdin);
        fflush(stdin);
        cout << "Cidade:";
        fgets(cidade, 40, stdin);
        fflush(stdin);
        cout << "CEP:";
        cin >> cep;
        cout << "Telefone:";
        cin >> telefone;
    }

    void print() {
        cout << "\n\nNome: " << nome;
        cout << "\nEndereco: " << adress;
        cout << "\nEstado: " << estado;
        cout << "\nCidade: " << cidade;
        cout << "\nCEP: " << cep;
        cout << "\nTelefone: " << telefone;
    }
};

class Restaurante : public Empresa {
   public:
    char comida[40];
    double precoMedio;

    Restaurante() {
        get();
        fflush(stdin);
        cout << "\nComida:";
        fgets(comida, 40, stdin);
        cout << "Preco Medio:";
        cin >> precoMedio;
        print();
        cout << "\nComida: " << comida;
        cout << "\nPreco Medio: R$" << precoMedio;
    }
};

int main(void) {
    Restaurante restaurante1;
    return 0;
}
