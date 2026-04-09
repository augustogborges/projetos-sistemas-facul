#include <stdio.h>

int main()
{
    float a,b;
    float r;
    char escolha;
    
    
    printf("Digite a operação que voce vai fazer? (+,-,*,/)");
        scanf("%c", &escolha);
        
    printf("Digite o primeiro numero: ");
        scanf("%f", &a);
        
    printf("Digite o segundo numero: ");
        scanf("%f", &b);
        
        
    switch(escolha){
        case '+':
            r = a+b;
            printf("Soma de %.2f e %.2f = %.2f", a,b,r);
        break;    
        
        case '-':
            r = a-b;
            printf("Subtração de %.2f e %.2f = %.2f", a,b,r);
        break;         
        
        case '*':
            r = a*b;
            printf("Multiplicação de %.2f e %.2f = %.2f", a,b,r);
        break;   

        case '/':
            r = a/b;
            printf("Divisao de %.2f e %.2f = %.2f", a,b,r);
        break;    
    }
    
    return 0;
}