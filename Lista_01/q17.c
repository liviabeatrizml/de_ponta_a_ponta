#include <stdio.h>
#include <stdlib.h>

int primeiroTempo(int horas, int minutos, int segundos)
{
    int primeiro;

    if (horas > 12)
    {
        horas = 12;
        primeiro = (horas * 3600);
    }
    else
    {
        horas = horas;
        primeiro = (horas * 3600) + (minutos * 60) + segundos;
    }

    return (primeiro);
}

int segundoTempo(int horas, int minutos, int segundos)
{
    int segundo;

    segundo = (horas * 3600) + (minutos * 60) + segundos;
    return (segundo);
}

int main()
{

    int horas = 0, minutos = 0, segundos = 0, primeiro = 0, segundo = 0, horasRestantes = 0, minutosRestantes = 0, segundosRestantes = 0;

    do
    {
        printf("\n\n--> Informe a quantidade de horas: ");
        scanf("%i", &horas);

        if (horas < 1 || horas > 24)
        {
            system("clear");
            printf("\n   ERROR: FORMATO DE APENAS 24 HORAS\n");
            printf("            Tente novamente!\n");
        }

    } while (horas < 1 || horas > 24);

    system("clear");

    if (horas < 24)
    {
        do
        {
            printf("\n\n\n--> Informe a quantidade de minutos: ");
            scanf("%i", &minutos);

            if (minutos < 1 || minutos > 24)
            {
                system("clear");
                printf("\n   ERROR: FORMATO DE APENAS 60 MINUTOS\n");
                printf("             Tente novamente!\n");
            }
        } while (minutos < 1 || minutos > 60);

        system("clear");

        do
        {
            printf("\n\n\n--> Informe a quantidade de segundos: ");
            scanf("%i", &segundos);

            if (segundos < 1 || segundos > 60)
            {
                system("clear");
                printf("\n   ERROR: FORMATO DE APENAS 60 SEGUNDOS\n");
                printf("             Tente novamente!\n");
            }

        } while (segundos < 1 || segundos > 60);

        system("clear");
    }

    primeiro = primeiroTempo(horas, minutos, segundos);

    if (horas > 12)
    {
        horasRestantes = horas - 12;
        horas = horas - horasRestantes;
        minutosRestantes = minutos;
        segundosRestantes = segundos;
        minutos = 0;
        segundos = 0;
    }

    segundo = segundoTempo(horasRestantes, minutosRestantes, segundosRestantes);

    printf("\n\n\n--> PRIMEIRO TEMPO: %ih%imin%is equivale à %i segundos.\n", horas, minutos, segundos, primeiro);
    printf("--> SEGUNDO TEMPO: %ih%imin%is equivale à %i segundos.\n\n\n\n\n", horasRestantes, minutosRestantes, segundosRestantes, segundo);

    return (0);
}