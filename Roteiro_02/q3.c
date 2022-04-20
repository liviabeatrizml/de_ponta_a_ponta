/**
    Apresente todos os contatos que comecem com uma letra 
    específica. Nesse caso, apresenteo nome e o telefone. */
#include<stdio.h>

void listarContatosPelaInicial(char letra);

int main(){
    char iniciar;

    printf("Digite uma letra para filtrar a busca no pelo contato: ");
    scanf("%c", &iniciar);

    listarContatosPelaInicial(iniciar);
}

void listarContatosPelaInicial(char letra){
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
        
        if(nome[0] == letra){
            printf("(%s) - (%s)\n", nome, telefone);
        }
    }
}