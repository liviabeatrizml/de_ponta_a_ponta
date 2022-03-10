#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont5, numero, asterisco;

    for (int cont5 = 1; cont5 <= 5; cont5++)
    {
        printf("Informe o %d numero: ", cont5);
        scanf("%d", &numero);

        if (numero <= 1 || numero >= 30)
        {
            printf("Numero fora do intervalo desejado.\n");
            cont5 = cont5 - 1;
        }
        else
        {
            for (asterisco = 1; asterisco <= numero; asterisco++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    return (0);
}

/*Problema 7 Uma aplicacao interessante de computadores e desenhar graficos de
barras. Escreva um programa que leia cinco numeros (cada
um entre 1 e 30). Para cada numero lido, seu programa deve imprimir uma
linha contendo aquele numero de asteriscos adjacentes. Por exemplo, se seu
programa le o numero sete, ele deve imprimir ∗ ∗ ∗ ∗ ∗ ∗ ∗.*/