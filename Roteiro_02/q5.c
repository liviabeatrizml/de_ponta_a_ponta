#include <stdio.h>

void listarProfissoes(char);

int main()
{
    for (int i = 65; i <= 90; i++)
    {
        listarProfissoes(i);
    }
}

void listarProfissoes(char c)
{
    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    FILE *file = fopen("agenda.dat", "r");
    if (!file)
    {
        printf("Impossível abrir o arquivo.\n");
    }

    while (!feof(file))
    {
        fscanf(file, "%d %s %s %s\n", &id, nome, profissao, telefone);
        if(profissao[0] == c)
        printf("(%d)  (%s)  (%s)  (%s)\n", id, nome, profissao, telefone);
    }
}