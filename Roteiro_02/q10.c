#include <stdio.h>
#include <string.h>

void exportaContato(int id);

int main()
{
    int id;

    printf("Informe o ID que deseja exportar: ");
    scanf("%d", &id);
    exportaContato(id);
}

void exportaContato(int idA)
{
    // sobscreve o agenda.dat no agenda_aux.dat
    FILE *f1 = fopen("nome.txt", "w");

    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    // abre agenda.dat como leitura
    FILE *f2 = fopen("agenda.dat", "r");

    if (!f2)
    {
        printf("Impossível abrir o arquivo.\n");
    }

    // enquanto o final do arquivo f1 (agenda_aux.dat) for diferente de f2 (agenda.dat)
    while (!feof(f2))
    {
        // TERMINAL
        // Efetua leitura formatada em um arquivo (o que aparece no agenda_aux.dat)
        fscanf(f2, "%d %s %s %s", &id, nome, profissao, telefone);

        if (id == idA)
        {
            // Efetua impressão formatada em um arquivo
            // o que vai aparecer no novo arquivo formatado (agenda_aux.dat)
            fprintf(f1, "%d %s %s %s\n", id, nome, profissao, telefone);
            strcat(nome, ".txt");
            fclose(f1);
            rename("nome.txt", nome);

        }
    }
    fclose(f2);
    // remove("agenda.dat");
}