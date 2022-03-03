#include <stdio.h>
#include <stdlib.h>

int main()
{

    int quantidade, i, soma = 0;
    float media;

    printf("--> Quantos números você quer ler para realizar a média?\n");
    printf("    Digite: ");
    scanf("%i", &quantidade);
    system("clear");

    int vetor[quantidade];

    for(i = 0; i < quantidade; i++) {
        printf("--> %iª Valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    system("clear");

    for(i = 0; i < quantidade; i++) {
        if(i+1 < quantidade) {
            printf("%i + ", vetor[i]);
        } else {
            printf("%i = ", vetor[i]);
        }
    }

    for(i = 0; i < quantidade; i++) {
        soma = soma + vetor[i];
    }

    printf("%i\n\n", soma);
    printf("       %i / %i\n\n", soma, quantidade);

    media = (float)soma/quantidade;

    printf("  --> Média: %.2f\n\n\n\n\n", media);

    return (0);
}