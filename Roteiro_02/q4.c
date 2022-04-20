/**
    Acesse um contato através de um índice; */

#include<stdio.h>

void listarContatosPeloID(int indice);

int main(){
    int indice;

    printf("Digite o ID para filtrar a busca no pelo contato: ");
    scanf("%d", &indice);

    listarContatosPeloID(indice);
}

void listarContatosPeloID(int indice){
    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];
    
    FILE *arq = fopen("agenda.dat", "r");
    if(!arq){
        printf("Impossível abrir o arquivo\n");
    }

    while(!feof(arq)){
        fscanf(arq, "%d %s %s %s", &id, nome, profissao, telefone);
        
        if(id == indice){
            printf("(%d) - (%s)\n", id, telefone);
        }
    }
}