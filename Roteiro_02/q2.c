/**
 * Lista todos os contatos da agenda por nome e telefone*/
#include<stdio.h>

void listarContatos();

int main(){
    listarContatos();
}

void listarContatos(){
    int id;
    char nome[80];
    char profissao[32];
    char telefone[16];

    FILE *file = fopen("agenda.dat", "r");
    if(!file){
        printf("Impossível abrir o arquivo\n");
    }

    while(!feof(file)){
        fscanf(file, "%d %s %s %s", &id, nome, profissao, telefone);
        printf("%d - %s: %s\n", id, nome, telefone);
    }
}