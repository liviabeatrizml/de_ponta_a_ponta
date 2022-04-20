/** 
    Edite o nome de um contato, passando como parâmetro o Id desse 
    contato e da nova string que deve substituir o campo nome;   */

#include <stdio.h>

void editarNome(int idX);

int main(){
    int id;

    printf("Informe o ID do contato que deseja modificar: ");
    scanf("%d", &id);

    editarNome(id);
}

void editarNome(int idX){
    FILE *arq1 = fopen("agenda_aux.dat", "w");

    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    FILE *arq2 = fopen("agenda.dat", "r");

    if (!arq2){
        printf("Impossível abrir o arquivo.\n");
    }

    while (!feof(arq2)){
        fscanf(arq2, "%d %s %s %s", &id, nome, profissao, telefone);

        if (id == idX){
            printf("Digite o novo nome para o contato: ");
            scanf("%s", nome);

            fprintf(arq1, "%d %s %s %s\n", id, nome, profissao, telefone);
        }

        if (id != idX){
            fprintf(arq1, "%d %s %s %s\n", id, nome, profissao, telefone);
        }
    }

    fclose(arq1);
    fclose(arq2);
    remove("agenda.dat");
    rename("agenda_aux.dat", "agenda.dat");
}