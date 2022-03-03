#include <stdio.h>
#include <math.h>

float hipotenusa();

int main(){
    float hipo;

    printf(" Informa o valor dos catetos (em cm) para calcular a hipotenusa:\n Cateto A: ");
    hipo = hipotenusa();

    printf(" A hipotenusa do triangulo eh de %.1f cm.", hipo);
    
    return(0);
}

float hipotenusa(){
    float catA, catB;

    scanf("%f", &catA);
    printf(" Cateto B: ");
    scanf("%f", &catB);

    return sqrt((pow(catA, 2) + pow(catB, 2)));
}