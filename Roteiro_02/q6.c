#include <stdio.h>

void apagar(int id);

int main()
{
    //for está dando problema
    for (int i = 1; i <= 6; i++)
    {
        apagar(i);
    }
}

void apagar(int idA)
{
    FILE *f1 = fopen("agenda_aux.dat", "w" );

    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    FILE *f2 = fopen("agenda.dat", "r");

    if (!f2)
    {
        printf("Impossível abrir o arquivo\n");
    }

    while (!feof(f2))
    {
        fscanf(f2, "%d %s %s %s", &id, nome, profissao, telefone);
        printf("(%d)  (%s)  (%s)\n", id, nome, telefone);
        if (id != idA)
        {
            fprintf(f1, "%d %s %s %s", id, nome, profissao, telefone);
        }
    }
    fclose(f1);
    fclose(f2);
    remove("agenda.dat");
    rename("agenda_aux.dat", "agenda.dat");
}