#include <stdio.h>
#include <stdlib.h>

int validacao(int dia, int mes, int ano);

int main(){
    int condicao, dia, mes, ano, somaVariaveis, chaveMes, chaveAno, diaSemana, variante = 0;

    do{
        printf("Dia: ");
        scanf("%d", &dia);
        printf("Mes: ");
        scanf("%d", &mes);
        printf("Ano: ");
        scanf("%d", &ano);

        condicao = validacao(dia, mes, ano);

    } while (condicao != 1);

    switch (mes){
        case 1:
        case 10:
            chaveMes = 1;
            break;
        case 2:
        case 3:
        case 11:
            chaveMes = 4;
            break;    
        case 4:
        case 7:
            chaveMes = 0;
            break;
        case 5:
            chaveMes = 2;
            break;
        case 6:
            chaveMes = 5;
            break;
        case 8:
            chaveMes = 3;
            break;
        case 9:
        case 12:
            chaveMes = 6;  
            break;
    }

    chaveAno = ((((ano%100)/4)+((ano%100)%7))%7);
    variante = (1900/100)-(ano/100);
    somaVariaveis = (dia + chaveMes + (chaveAno+ variante));

    printf("O dia %d/%d/%d caiu em um", dia, mes, ano);

    diaSemana = (somaVariaveis - ((somaVariaveis/7)*7));

    switch (diaSemana){
        case 1:
            printf(" DOMINGO \n");
            break;
        case 2:
            printf(" SEGUNDA-FEIRA \n");
            break;
        case 3:
            printf(" TERCA-FEIRA \n");
            break;
        case 4:
            printf(" QUARTA-FEIRA \n");
            break;
        case 5:
            printf(" QUINTA-FEIRA \n");
            break;
        case 6:
            printf(" SEXTA-FEIRA \n");
            break;
        case 0:
            printf(" SABADO \n");
            break;
    }
    return (0);
}

int validacao(dia, mes, ano){
    if((dia < 1 && dia > 31) && ((mes < 1 && mes > 12)) && ano < 1){
        printf("\n\t Data incorreta!!! Insira novamente\n\n");

        return (0);
    } else if(ano % 4 != 0 && mes == 2){
        if(dia > 28){
            printf("\n\t Data incorreta!!! Insira novamente\n\n");

            return (0);
        }
    }

    return (1);
}

/* CHAVE DOS DIAS

    1 = Domingo
    2 = Segunda-feira
    3 = Terça-feira
    4 = Quarta-feira
    5 = Quinta-feira
    6 = Sexta-feira
    0 = Sábado

                    */

/* CHAVE DOS MÊS

    Janeiro = 1
    Fevereiro = 4
    Março = 4
    Abril = 0
    Maio = 2
    Junho = 5
    Julho = 0
    Agosto = 3 
    Setembro = 6
    Outubro = 1
    Novembro = 4
    Dezembro = 6

                    */