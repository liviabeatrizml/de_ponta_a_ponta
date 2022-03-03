#include <stdio.h>

int main(){
    int i, x;
    int fat = 1;

    printf("Digite um numero para descobrir o fatorial dele: ");
    scanf("%d", &x);

    for(i = x; i > 0; i--){
        fat *= i;
    }

    printf("O fatorial de %d eh igual a %d.\n", x, fat);
}