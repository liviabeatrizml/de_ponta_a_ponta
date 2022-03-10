#include <stdio.h>
#include <stdlib.h>

int main() {

    int i, j = 0;

    for (i = -1; i <= 127; i++){

        if(j < 10) {
            printf(" %c ", i);
            j += 1;
        }

        if(j == 10) {
            j = 0;
            printf("\n");
        }
    }

    printf("\n\n\n\n");

    return (0);
}