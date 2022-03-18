#include <stdio.h>

int isPrime(int num, int contador);

int main(){
    int n;

    printf("\nNUMERO PRIMO\n");
    printf("Informe um numero para saber se ele eh primo:\n-> ");
    scanf("%d",&n);
    
        if(isPrime(n, 2)){
            printf("\nO numero %d eh primo\n\n",n);
        } else {
            printf("\nO numero %d NAO eh primo\n\n",n);
        }
        
    return 0;
}

int isPrime(int num, int contador){
    if(num == 2){
        return 1;
    } else if(num % contador == 0){
        return 0;
    } else if(contador == num-1){        
        return 1;
    }
    return isPrime(num, contador + 1);
  
}