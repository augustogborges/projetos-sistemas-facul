#include <stdio.h>

int main () {

    char tipo;
    float quant;


    printf("Digite o tipo de pão: ");
        scanf("%c", &tipo);

    printf("Digite a quantidade de pão: ");
        scanf("%f", &quant);

    if (tipo == 's' || tipo == 'S') {
        printf("O valor a ser pago é de R$%.2f", quant*3);
    } else if (tipo == 'd' || tipo == 'D') {
        printf("O valor a ser pago é de R$%.2f", quant*5);
    } else{ 
        printf("Não existe esse sabor");
    
    }
    
return 0;
}