#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dia, mes, ano, diaDaSemana;

    while (dia > 2 && mes > 3)
    {

        do
        {
            printf("--> Digite um DIA (ex:07):\n");
            printf("          ");
            scanf("%i", &dia);

            if (dia < 1 || dia > 31)
            {
                system("clear");
                printf("DIA ERRADO, TENTE NOVAMENTE!\n\n");
            }
        } while (dia < 1 || dia > 31);

        system("clear");

        do
        {
            printf("--> Digite um MÊS (ex:12):\n");
            printf("        %i/", dia);
            scanf("%i", &mes);

            if (mes < 1 || mes > 12)
            {
                system("clear");
                printf("MÊS ERRADO, TENTE NOVAMENTE!\n\n");
            }
        } while (mes < 1 || mes > 12);

        system("clear");

        do
        {
            printf("--> Digite um ANO (ex:1999):\n");
            printf("        %i/%i/", dia, mes);
            scanf("%i", &ano);

            if (ano < 1 || ano > 2022)
            {
                system("clear");
                printf("ANO ERRADO, TENTE NOVAMENTE!\n\n");
            }
        } while (ano < 1 || ano > 2022);

        system("clear");

        if(dia > 2 && mes > 3) {
            printf("   APENAS DATAS INFERIORES \n        A 02/03/2022\n\n");
        }
    }

    printf("\n\n--> DATA ESCOLHIDA: %i/%i/%i\n\n", dia, mes, ano);

    diaDaSemana = (dia + 2 * mes + ((3 * mes + 3 * 1) / 5) + ano + ano / 4 - ano / 100 + ano / 400 + 2) % 7;

    if (diaDaSemana == 1)
    {
        printf("--> DIA DA SEMANA: DOMINGO\n\n\n\n");
    }

    if (diaDaSemana == 2)
    {
        printf("--> DIA DA SEMANA: SEGUNDA\n\n\n\n");
    }

    if (diaDaSemana == 3)
    {
        printf("--> DIA DA SEMANA: TERÇA\n\n\n\n");
    }

    if (diaDaSemana == 4)
    {
        printf("--> DIA DA SEMANA: QUARTA\n\n\n\n");
    }

    if (diaDaSemana == 5)
    {
        printf("--> DIA DA SEMANA: QUINTA\n\n\n\n");
    }

    if (diaDaSemana == 6)
    {
        printf("--> DIA DA SEMANA: SEXTA\n\n\n\n");
    }

    if (diaDaSemana == 0)
    {
        printf("--> DIA DA SEMANA: SÁBADO\n\n\n\n");
    }

    return (0);
}