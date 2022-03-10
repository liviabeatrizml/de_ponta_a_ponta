#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero, cateto1, cateto2, hipotenusa, somaQuadrados, quadradoHipotenusa;

    printf("Informe um valor como parametro: ");
    scanf("%d", &numero);

    printf("Triplos pitagoricos de 1 a %d: \n", numero);

    for (hipotenusa = 1; hipotenusa <= numero; hipotenusa++)
    {
        for (cateto1 = 1; cateto1 <= numero; cateto1++)
        {
            for (cateto2 = 1; cateto2 <= numero; cateto2++)
            {
                somaQuadrados = cateto1 * cateto1 + cateto2 * cateto2;
                quadradoHipotenusa = hipotenusa * hipotenusa;

                if (somaQuadrados == quadradoHipotenusa)
                {
                    printf("%d, %d e %d\n", cateto1, cateto2, hipotenusa);
                }
            }
        }
    }
    return (0);
}

// Problema 11 Um triangulo retangulo pode ter lados inteiros. O conjunto
// de tres valores inteiros para os lados de um triangulo retangulo e chamado
// de triplo pitagorico. Esses tres lados devem satisfazer a relacao de que a
// soma dos quadrados de dois dos lados e igual ao quadrado da hipotenusa.
// Encontre todos os triplos pitagoricos para cateto1, cateto2 e a hipotenusa,
// todos com ate o valor de n, indicado como parametro.