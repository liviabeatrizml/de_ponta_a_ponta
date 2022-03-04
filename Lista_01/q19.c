#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, delta, quadraticaPositiva, quadraticaNegativa;

    printf("Informe o valor de a: ");
    scanf("%d", &a);
    printf("Informe o valor de b: ");
    scanf("%d", &b);
    printf("Informe o valor de c: ");
    scanf("%d", &c);

    // a) O teste para saber se essa funcao tem raizes reais;
    delta = (b * b) - (4 * a * c);
    printf("Delta = %d", delta);
    if (delta == 0)
    {
        printf("A funcao tem uma raiz real.");
    }
    else if (delta > 0)
    {
        printf("A funcao tem duas raizes reais.");
    }
    else
    {
        printf("A funcao nao possui raizes reais.");
    }

    // b) O valor das raizes reais.
    quadraticaPositiva = (-b + sqrt(delta)) / (2 * a);
    quadraticaNegativa = (-b - sqrt(delta)) / (2 * a);
    printf("\nO valor das raizes reais sao x1 = %d e x2 = %d", quadraticaPositiva, quadraticaNegativa);
    return (0);
}

// Problema 19 Escreva dois programas que recebem como parametro tres
// inteiros representando os coeficientes de uma funcao do segundo grau e exe-
// cute:
// a) O teste para saber se essa funcao tem raizes reais;
// b) O valor das raizes reais.
// ax²+bx+c=0