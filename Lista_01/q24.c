#include <stdio.h>

int Somatorio(int num);

int main(){
    int n;

    printf("\nSOMATORIO DE VALORES DE 1 ATE N\nInforme o valor de N:\n-> ");
    scanf("%d",&n);

    if(n <= 0){
        printf("Numero invalido\n");
    }else{
        printf("Resultado do somatorio dos valores de 1 ate %d = %d\n\n",n,Somatorio(n));  
    }

    return 0;
}

int Somatorio(int num){
    if(num == 1){
        return 1;
    }else {
        return num + (Somatorio(num - 1));
    }
}