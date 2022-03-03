#include <stdio.h>

int main(){
    float i;

    printf(" Temperatura em Cellcius \t Temperatura em Fahrenheit\n");

    for(i = 30; i <= 50; i++){
        printf("\t %.0f C \t\t\t\t  %.1f F \n", i, (i * 1.8) + 32);
    }

}