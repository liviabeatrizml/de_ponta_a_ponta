#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int numero, i, soma = 0, somaQuadrados = 0;

    printf("--> Escolha um número: ");
    scanf("%i", &numero);

    for(i = 1; i <= numero; i++) {
        soma += i;
        somaQuadrados += sqrt(i);
    }

    printf("\n--> Soma: %i\n\n", soma);
    printf("\n--> Soma dos quadrados: %i\n\n\n\n", somaQuadrados);

    return (0);
}