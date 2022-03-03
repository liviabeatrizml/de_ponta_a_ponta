#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont1, numero, cont2, lado1, lado2;
    char simbolo;

    printf("Informe a dimensao do lado 1: ");
    scanf("%d", &lado1);

    printf("Informe a dimensao do lado 2: ");
    scanf("%d", &lado2);

    printf("Informe o simbolo que deseja: ");
    scanf(" %c", &simbolo);

    for (cont1 = 1; cont1 <= lado1; cont1++){
            for (cont2 = 1; cont2 <= lado2; cont2++){
                printf(" %c",simbolo);
            }
            printf("\n");
    }
    return (0);
}