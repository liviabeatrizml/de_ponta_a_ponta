#include <stdio.h>

int Fatorial(int num);

int main(){
    int n;

    printf("\nFATORIAL\n");
    printf("Informe o numero para calcular o fatorial!\n-> ");
    scanf("%d",&n);
        if(n < 0){
            printf("NUMERO INVALIDO");
        }else{
            printf("\nO fatorial do numero %d! = %d\n\n",n,Fatorial(n));
        }

    return 0;
}

int Fatorial(int num){
    if(num <= 1){
        return 1;
    }else {
        return (num * Fatorial(num-1));
    }
}