#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, i;
    for (i = 1; i <= 100; i++)
    {
        if (i % 7 == 0)
        {
            soma = soma + i;
        }
    }
    printf("Soma de todos os multiplos de 7 partindo de 1 ate 100 eh %d \n", soma);
    return (0);
}

//Problema 3 Escreva um programa para calcular e imprimir a soma de todos
//os multiplos de 7 partindo de 1 ate 100.