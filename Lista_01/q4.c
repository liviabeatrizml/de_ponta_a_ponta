#include <stdio.h>

int main(){
    int divisores, i, j;

    printf("\nSEQUENCIA DE NUMEROS PRIMOS DE 1 ATE 100\n");

    for(i = 1; i <= 100; i++){
        divisores = 0;

        for(j = 1; j <= 100; j++){
            if(i % j == 0){
                divisores++;
            }
        }
        
        if(divisores == 2){
            printf("\t- %d\n", i);
            divisores=0;
        }
    }

    return (0);
}