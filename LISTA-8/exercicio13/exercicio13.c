#include <stdio.h>
#include <string.h>

void cadastrar(FILE *database) {
    int i, quantidade_alunos;
    char telefone[20], matricula[30], nome[150];

    printf("Digite a quantidade de alunos a serem cadastrados: ");
    scanf("%d", &quantidade_alunos);

    setbuf(stdin, NULL);

    for (i = 0; i < quantidade_alunos; ++i) {
        printf("Digite o nome do aluno: ");
        fgets(nome, 150, stdin);
        printf("\nDigite o telefone do aluno (somente numeros): ");
        fgets(telefone, 20, stdin);
        printf("\nDigite a matricula do aluno (somente numeros): ");
        fgets(matricula, 30, stdin);
        printf("\n\n");

        nome[strlen(nome) - 1] = '\0';
        telefone[strlen(telefone) - 1] = '\0';
        matricula[strlen(matricula) - 1] = '\0';

        fprintf(database, "Nome: %s\nTelefone: %s\nMatricula: %s\n", nome, telefone, matricula);
    }
}

void ler(FILE *database) {
    char telefone[20], matricula[30], nome[150];
    while (fgets(nome, 150, database) != NULL) {
        fgets(telefone, 20, database);
        fgets(matricula, 30, database);

        printf("%s%s%s\n", nome, telefone, matricula);
    }
}

int main(void) {
    int opcao;

    FILE *database = fopen("database.txt", "a+");
    // r+ write     a+ append

    if (database == NULL) {
        return -1;
    }

    do {
        printf("Escolha uma opção:\n");
        printf("1 - Cadastrar dados\n2 - Ler dados\n\n");
        scanf("%d", &opcao);
    } while (opcao != 1 && opcao != 2);

    if (opcao == 1) {
        cadastrar(database);
    } else {
        ler(database);
    }

    fclose(database);

    return 0;
}