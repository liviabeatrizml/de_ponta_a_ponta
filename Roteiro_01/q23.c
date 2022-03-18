#include <stdio.h>
#include <stdlib.h>

int inverte(int n);

int main(){
	int numero;

	printf("Informe um numero: ");
	scanf("%d", &numero);

	inverte(numero);

	return (0);
}

int inverte(int n){
	int sobra = n;

	if (n == 0){
		printf("\n");
		return (1);
	}
	
	printf("%d", sobra % 10);

	return inverte(n/10);
}
