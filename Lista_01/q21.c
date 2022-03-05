#include <stdio.h>

int MDC(int num, int num2);
int Fatorial(int num);
int Fibonacci(int num);
int isPrime(int num, int contador);

int main(){
    int n, n2, opcao;

    printf("QUAL OPERACAO VOCE DESEJA REALIZAR?\n1 - MAXIMO DIVISOR COMUM\n2 - FATORIAL\n3 - FIBONACCI\n4 - PRIMO\n-> ");
    scanf("%d",&opcao);

    switch (opcao){
    case 1:
        printf("\nMAXIMO DIVISOR COMUM\n");
        printf("Informe dois numeros para saber seu maximo divisor comum:\n-> ");
        scanf("%d",&n);
        printf("-> ");
        scanf("%d",&n2);
        printf("\nO maximo divisor comum entre %d e %d = %d\n\n",n,n2,MDC(n,n2));
        break;

    case 2:
        printf("\nFATORIAL\n");
        printf("Informe o numero para calcular o fatorial!\n-> ");
        scanf("%d",&n);
        if(n < 0){
            printf("NUMERO INVALIDO");
        }else{
            printf("\nO fatorial do numero %d! = %d\n\n",n,Fatorial(n));
        }
        break;
    case 3:
        printf("\nSEQUENCIA DE FIBONACCI\n");
        printf("Informe o enesimo termo que deseja na sequencia\n-> ");
        scanf("%d",&n);
        printf("\nO %d termo da sequencia eh %d\n\n",n,Fibonacci(n));
        break;    
    case 4:
        printf("\nNUMERO PRIMO\n");
        printf("Informe um numero para saber se ele eh primo:\n-> ");
        scanf("%d",&n);

        if(isPrime(n, 2)){
            printf("\nO numero %d eh primo\n\n",n);
        } else {
            printf("\nO numero %d NAO eh primo\n\n",n);
        }
        break;
    default:
        printf("OPCAO INVALIDA!");
        break;
    }
    return 0;
}

int MDC(int num, int num2){
    if(num2 == 0){
        return num;
    }else {
        return MDC(num2, num % num2);
    }
}

int Fatorial(int num){
    if(num <= 1){
        return 1;
    }else {
        return (num * Fatorial(num-1));
    }
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