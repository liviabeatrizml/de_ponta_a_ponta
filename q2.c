#include <stdio.h>

int main(){
    int i;
    float convert;

    printf(" Temperatura em Cellcius\t Temperatura em Fahrenheit\n");
    
    for(i = 30; i <= 50; i++){
        convert = (i * 1.8) + 32;

        printf("\t  %d C \t\t\t\t   %.1f F \n", i, convert);
    };
}