#include <stdio.h>

int valorY(int x1, int x2);

int main(){
    int y, x1, x2;

    printf(" Digite o valor de x1 e x2: \n - X1 = ");
    scanf("%d", &x1);
    printf(" - X2 = ");
    scanf("%d", &x2);

    y = valorY(x1, x2);

    printf("\n O valor Y eh de %d.\n", y);

    return (0);
}

int valorY(int x1, int x2){         //Quando x2 for igual 1, x1 irá somar com ele mesmo quantas vezes foi necessário para se chegar no 1
    if(x2 == 0){   
        return (0);
    } else if(x2 == 1){
        return (x1);
    }

    return x1 + valorY(x1, x2-1); 
}