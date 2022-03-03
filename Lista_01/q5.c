#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, i, soma = 0, somaQuadrados = 0, somaCubos = 0;

    printf("--> Escolha um número: ");
    scanf("%i", &numero);

    printf("\n+---------------------------+\n");

    for(i = 1; i <= numero; i++) {
        soma += i;
        somaQuadrados += i * i;
        somaCubos += i * i * i;
    }

    printf("\n    Soma: %i\n", soma);
    printf("    Soma dos quadrados: %i\n", somaQuadrados);
    printf("    Soma dos cubos: %i\n\n\n\n", somaCubos);

    return (0);
}