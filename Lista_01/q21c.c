#include <stdio.h>

int Fibonacci(int num);

int main(){
    int n;

    printf("\nSEQUENCIA DE FIBONACCI\n");
    printf("Informe o enesimo termo que deseja na sequencia\n-> ");
    scanf("%d",&n);
    printf("\nO %d termo da sequencia eh %d\n\n",n,Fibonacci(n));

    return 0;
}

int Fibonacci(int num){
    if(num == 1){
        return 0;
    }else if(num == 2){
        return 1;
    }else{
        return (Fibonacci(num-1) + Fibonacci(num-2));
    }
}