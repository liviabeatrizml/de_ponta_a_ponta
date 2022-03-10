#include <stdio.h>

int main(){
    int codProduto, quantProduto;
    float total = 0, auxTotal = 0;

    printf("Numero do produto | Preço de varejo\n");
    printf("        1         |     3,00       \n");
    printf("        2         |     4,00       \n");
    printf("        3         |     2,80       \n");
    printf("        4         |     1,95       \n");
    printf("        5         |     5,00       \n");

    for (codProduto = 1; codProduto <= 5; codProduto++){
        printf("Informe a quantidade vendida do produto %d: ", codProduto);
        scanf("%d", &quantProduto);

        switch (codProduto){
        case (1):
            total = quantProduto * 3;
            auxTotal = auxTotal + total;
            break;
        case (2):
            total = quantProduto * 4;
            auxTotal = auxTotal + total;
            break;
        case (3):
            total = quantProduto * 2.8;
            auxTotal = auxTotal + total;
            break;
        case (4):
            total = quantProduto * 1.95 ;
            auxTotal = auxTotal + total;
            break;
        case (5):
            total = quantProduto * 5;
            auxTotal = auxTotal + total;
            break;    
        }
        printf("Total foi de: %.2f\n", total);
    }
    printf("O total durante a semana foi de: R$%.2f\n\n",auxTotal);
    
    return 0;
}