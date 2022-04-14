/**
 * Apagar todos os contatos da agenda*/
#include<stdio.h>

void excluir();

int main(){
    int i;
    for (i = 0; i <= 50; i++){
        excluir(i);
    }
    printf("TODOS OS CONTATOS APAGADOS!");
    
}

void excluir(){
    FILE *f1 = fopen("agenda_aux.dat", "w");

    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    FILE *f2 = fopen("agenda.dat", "r");

    if(!f2){
        printf("Impossível abrir o arquivo\n");
    }

    while(!feof(f2)){
        fscanf(f2, "%d %s %s %s", &id, nome, profissao, telefone);
    }
    fclose(f1);
    fclose(f2);
    remove("agenda.dat");
    rename("agenda_aux.dat", "agenda.dat");
}