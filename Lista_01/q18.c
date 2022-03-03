#include <stdio.h>

int isPerfect(int numero);

int main(){
    int num;

    printf(" Digite um numero e descubra se ele eh PERFEITO: ");
    scanf("%d", &num);

    isPerfect(num);
}

int isPerfect(int numero){
    int i, soma = 0;

    for(i = 1; i < numero; i++){
        if(numero % i == 0){
            soma += i;
        }
    }

    soma == numero ? printf(" * O numero eh PERFEITO") : printf(" * O numero NAO eh perfeito");
}