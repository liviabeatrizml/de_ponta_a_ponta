#include <stdio.h>

int Soma(int numero);

int main(){    
    int number;

    printf("Digite um numero que deseja fazer a soma dos digitos:\n-> ");
    scanf("%d",&number);
    printf("\nA soma dos digitos do numero %d = %d\n\n",number,Soma(number));

    return 0;
}  

int Soma(int numero){
    int soma = 0;

    while (numero != 0) {
        soma = soma + (numero % 10);
        numero  = numero / 10;
    }

    return soma;
}