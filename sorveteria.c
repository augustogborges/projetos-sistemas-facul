#include <stdio.h>

int main () {

    char tipo;
    int quant;
    
    printf("Digite o sabor de sorvete: ");
        scanf("%c", &tipo);
        
    fflush(stdin);
    
    printf("Digite a quantidade de bolas: ");
        scanf("%i", &quant);
    
    if (tipo == 'M' || tipo == 'm'){
        printf("O valor da conta ficará %.2f e voce esta comprando sorvete de Morango" , quant*1.5);
    } else if (tipo == 'C' || tipo == 'c') {
        printf("O valor da conta ficará %.2f e voce esta comprando sorvete de Creme", quant*1.5);
    } else if (tipo == 'F' || tipo == 'f') {
        printf("O valor da conta ficará %.2f e voce esta comprando sorvete de Flocos" , quant*1.5);
    } else if (tipo == 'A' || tipo == 'a'){
        printf("O valor da conta ficará %.2f e voce esta comprando sorvete de Ameixa" , quant*1.5);
    } else{
        printf("Não existe esse sorvete ");
    }
}