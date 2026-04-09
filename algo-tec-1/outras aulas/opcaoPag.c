#include <stdio.h>
#include <math.h>

int main()
{
    
    float valor;
    int cod;
    
    
    printf("Digite a forma de pagamento  : \n");
    printf("1- CHEQUE OU DINHEIRO\n2- A VISTA NO CARTAO \n3- EM DUAS VEZES NO CARTAO \n4- EM TRES VEZES NO CARTAO\nOPÇÃO: ");        
        scanf("%i", &cod);
        
    printf("digite o valor do produto: R$");
        scanf("%f", &valor);

    
    if (cod == 1){
        printf("Voce vai pagar com 10%% de desconto, ou seja R$%.2f", valor*0.9);
    }else if (cod == 2){
        printf("Voce vai pagar com 5%% de desconto, ou seja R$%.2f", valor*0.95);
    }else if (cod == 3){
        printf("Voce vai pagar R$%.2f", valor);
    }else if (cod == 4){
        printf("Voce vai pagar juros, portanto o valor vai ser R$%.2f", valor*1.1);
    }else{
        printf("Opção invalida de pagamento");
    }    
    return 0;
}