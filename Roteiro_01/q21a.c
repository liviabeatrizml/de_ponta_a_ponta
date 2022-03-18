#include <stdio.h>

int MDC(int num, int num2);

int main(){
    int n, n2;

    printf("MAXIMO DIVISOR COMUM\n");
    printf("Informe dois numeros para saber seu maximo divisor comum:\n-> ");
    scanf("%d",&n);
    printf("-> ");
    scanf("%d",&n2);
    printf("\nO maximo divisor comum entre %d e %d = %d\n\n",n,n2,MDC(n,n2));

    return 0;
}

int MDC(int num, int num2){
    if(num2 == 0){
        return num;
    }else {
        return MDC(num2, num % num2);
    }
}