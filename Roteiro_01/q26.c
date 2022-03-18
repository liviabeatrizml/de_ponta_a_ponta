#include <stdio.h>

int Ackermann(m, n);

int main(){
    int m, n, Acker;

    printf(" Digite os valores para resolver a funcao Ackermann: \n M = ");
    scanf("%d", &m);
    printf(" N = ");
    scanf("%d", &n);

    Acker = Ackermann(m, n);

    printf("\n *O valor da funcao Ackermann eh de %d.", Acker);

    return (0);
}

int Ackermann(m, n){
    if(m == 0){
        return (n+1);
    } else if(m > 0 && n == 0){
        return Ackermann(--m, 1);
    } else {
        return Ackermann(--m, Ackermann(m, --n));
    }
}