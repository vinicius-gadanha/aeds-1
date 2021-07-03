#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

#define MAX_VIEWERS 1000

typedef struct Viewer
{
    int vote, age, gender;
}
Viewer;

void show_most_voted_by_women(Viewer viewers[MAX_VIEWERS], int total_viewers);
void mean_age_of_male_viewers(Viewer viewers[MAX_VIEWERS], int total_viewers, int show);
void percentage_of_young_viewers(Viewer viewers[MAX_VIEWERS], int total_viewers, int show);

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    Viewer viewers[MAX_VIEWERS];
    int option, age, gender, total_viewers = 0;

    while (true)
    {
        printf("1 - Domingão do Faustão\n");
        printf("2 - Luciano Huck\n");
        printf("3 - The Voice Brasil\n");
        printf("4 - Sair\n");
        printf("\nSelecione uma opção: ");

        scanf("%d", &option);
        while (option != 1 && option != 2 && option != 3 && option != 4)
        {
            printf("\nOpção Inválida! Digite novamente: ");
            scanf("%d", &option);
        }

        if (option == 4)
        {
            printf("\n\nEncerrando o programa");
            fflush(stdout); sleep(1); printf(" .");
            fflush(stdout); sleep(1); printf(" .");
            fflush(stdout); sleep(1); printf(" .\n");
            fflush(stdout); sleep(1);
            break;
        }
        else
        {
            Viewer viewer;
            printf("\nDigite a sua idade (entre 0 e 120): ");
            scanf("%d", &age);
            while (age < 0 || age > 120)
            {
                printf("\nIdade Inválida! Digite novamente: ");
                scanf("%d", &age);
            }

            printf("\nDigite o seu sexo (1 - Feminino e 2 - Masculino): ");
            scanf("%d", &gender);
            while (gender != 1 && gender != 2)
            {
                printf("\nSexo Inválido! Digite novamente: ");
                scanf("%d", &gender);
            }
            printf("\n");
            viewer.vote = option, viewer.age = age, viewer.gender = gender;
            viewers[total_viewers++] = viewer;
        }
    }

    show_most_voted_by_women(viewers, total_viewers);
    mean_age_of_male_viewers(viewers, total_viewers, 3);
    percentage_of_young_viewers(viewers, total_viewers, 1);

    return 0;
}

void show_most_voted_by_women(Viewer viewers[MAX_VIEWERS], int total_viewers)
{
    int i, viewers_by_show[3] = {0, 0, 0};
    for (i = 0; i < total_viewers; i++)
    {
        Viewer v = viewers[i];
        if (v.gender == 1)
        {
            viewers_by_show[v.vote - 1]++;
        }
    }
    if (viewers_by_show[0] > viewers_by_show[1] && viewers_by_show[0] > viewers_by_show[2])
        printf("\n\nPrograma de TV com maior numero de telespectadoras: Domingão do Faustão\n");
    else if (viewers_by_show[1] > viewers_by_show[0] && viewers_by_show[1] > viewers_by_show[2])
        printf("\n\nPrograma de TV com maior numero de telespectadoras: Luciano Huck\n");
    else if (viewers_by_show[2] > viewers_by_show[0] && viewers_by_show[2] > viewers_by_show[1])
        printf("\n\nPrograma de TV com maior numero de telespectadoras: The Voice Brasil\n");
    else if (viewers_by_show[0] == viewers_by_show[1] && viewers_by_show[0] > viewers_by_show[2])
        printf("\n\nProgramas de TV com maior numero de telespectadoras: Domingão do Faustão e Luciano Huck\n");
    else if (viewers_by_show[0] == viewers_by_show[2] && viewers_by_show[0] > viewers_by_show[1])
        printf("\n\nProgramas de TV com maior numero de telespectadoras: Domingão do Faustão e The Voice Brasil\n");
    else if (viewers_by_show[1] == viewers_by_show[2] && viewers_by_show[1] > viewers_by_show[0])
        printf("\n\nProgramas de TV com maior numero de telespectadoras: Luciano Huck e The Voice Brasil\n");
    else
        printf("\n\nTodos os programas de TV possuem a mesma quantidade de telespectadoras.\n");
}

void mean_age_of_male_viewers(Viewer viewers[MAX_VIEWERS], int total_viewers, int show)
{
    int i, acc = 0, votes = 0;
    for (i = 0; i < total_viewers; i++)
    {
        Viewer v = viewers[i];
        if (v.vote == show && v.gender == 2)
        {
            votes++, acc += v.age;
        }
    }
    if (votes == 0)
    {
        printf("\n\nNão houve votos masculinos no programa The Voice Brasil.\n");
    }
    else
    {
        double mean_age = ((double) acc) / votes;
        printf("\n\nMédia das idades dos telespectadores homens do programa The Voice Brasil: %G\n.", mean_age);
    }
}

void percentage_of_young_viewers(Viewer viewers[MAX_VIEWERS], int total_viewers, int show)
{
    int i, young_viewers_by_show = 0, total_viewers_by_show = 0;
    for (i = 0; i < total_viewers; i++)
    {
        Viewer v = viewers[i];
        if (v.vote == show)
        {
            if (v.age >= 18 && v.age <= 28)
            {
                young_viewers_by_show++;
            }
            total_viewers_by_show++;
        }
    }
    if (total_viewers_by_show == 0)
    {
        printf("\n\nNão há telespectadores do programa Domingão do Faustão.\n");
    }
    else
    {
        double percentage = young_viewers_by_show * 100.0 / total_viewers_by_show;
        printf("\n\nPorcentagem dos telespectadores do programa Domingão do Faustão com idade entre 18 e 28 anos: %G%%.\n", percentage);
    }
}
