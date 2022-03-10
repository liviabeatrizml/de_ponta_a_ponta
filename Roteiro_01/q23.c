#include <stdio.h>
#include <stdlib.h>

int inverte(int n);

int main()
{
	int numero;

	printf("Informe um numero: ");
	scanf("%d", &numero);

	int ret = inverte(numero);
	//printf("Numero invertido: %d", ret);

	return (0);
}

int inverte(int n)
{
	int sobra, cont = 0;

	if (n >= 0)
	{
		while (n != 0)
		{
			sobra = n % 10;
			printf("%d", sobra);
			n = n / 10;
		}
		printf("\n");
		return n;
	}
	else if (n < 1)
	{
		return (inverte(n * (-1)));
		printf("\n");
	}
}

// Problema 23 Funcao para inverter um numero. Exemplo: f (1234) = 4321