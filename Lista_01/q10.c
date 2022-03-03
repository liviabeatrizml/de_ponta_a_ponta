#include <stdio.h>

int main(){
    int x, i;
    float j, result = 1.0;

    printf("Digite o de serie que deseja que o pi seja calculado: ");
    scanf("%d", &x);

    printf("\n\t Pi = 4 * (");
    for(i = 1, j = 1.0; i <= x; i++, j+=2.0){
        if((i % 2 == 0) && (i != x)){
            printf(" 1/%.0f +", j);
        } else if(i != x){
            printf(" 1/%.0f -", j);
        } else {
            printf(" 1/%.0f ", j);
        }
    }

    for(i = 2, j = 3.0; i <= x; i++, j+=2.0){
        if(i % 2 == 0){
            result -= 1/j;
        } else {
            result += 1/j;
        }
    }

    printf(")\n\t Pi = 4 * %f", result);
    printf("\n\t Pi = %f", 4 * result);
}