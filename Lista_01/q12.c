#include <stdio.h>

int main(){
    int i, indiceNums, sequencia;

    for(i = 1; i <= 100; i++){
        char *romanos[] = {"I", "IV", "V", "IX", "X", "XL", "L", "XC", "C"};
        int numeros[] = {1, 4, 5, 9, 10, 40, 50, 90, 100};

        indiceNums = (sizeof(numeros)/sizeof(0)) -1;    
        sequencia = i;

        while(sequencia > 0){                          
            if(sequencia >= numeros[indiceNums]){       
                printf("%s", romanos[indiceNums]);
                sequencia -= numeros[indiceNums]; 
            } else {
                indiceNums--;                           
            }
        }
        printf(" ");
    }

    return (0);
}

