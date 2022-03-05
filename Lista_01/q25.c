#include <stdio.h>
#include <stdlib.h>

int f(int m, int n);

int main()
{

    int m, n, resultado;

    printf("\n\n--> Digite um valor para M: ");
    scanf("%i", &m);

    printf("--> Digite um valor para N: ");
    scanf("%i", &n);

    system("clear");

    resultado = f(m, n);

    printf("\n\n--> f(%i,%i) = %i\n\n\n\n\n", m, n, resultado);

    return (0);
}

int f(int m, int n)
{
    if(n == 1) {
        return(m + 1);
    } else if(m == 1) {
        return(n + 1);
    } else if((m > 1) && (n > 1)) {
        return(f(m, n - 1) + f(m - 1, n));
    }
}