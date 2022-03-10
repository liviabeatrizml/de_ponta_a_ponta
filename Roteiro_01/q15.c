#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont1, numero, cont2, lado1, lado2;

    printf("Informe a dimensao do lado 1: ");
    scanf("%d", &lado1);

    printf("Informe a dimensao do lado 2: ");
    scanf("%d", &lado2);

    for (int cont1 = 1; cont1 <= lado1; cont1++)
    {
            for (cont2 = 1; cont2 <= lado2; cont2++)
            {
                printf("*");
            }
            printf("\n");
    }
    return (0);
}

// Problema 15 Escreva uma funcao que exibe um retangulo solido de asteriscos
// cujos lados sao especificados nos parametros inteiros lado1 e lado2. Por
// exemplo, se os lados sao 4 e 5, a funcao exibe o seguinte:
//∗ ∗ ∗ ∗ ∗
//∗ ∗ ∗ ∗ ∗
//∗ ∗ ∗ ∗ ∗
//∗ ∗ ∗ ∗ ∗