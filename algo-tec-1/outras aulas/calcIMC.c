#include <stdio.h>
#include <math.h>

int main()
{
    
    float alt,pes,imc; 
    
    
    printf("Digite sua altura em metros : ");
        scanf("%f", &alt);
        
    printf("Digite seu peso em kg: ");
        scanf("%f", &pes);
        
    imc = pes / (pow(alt,2));
    
    if (imc < 18.5){
        printf("Abaixo do peso");
    }else if (imc >=18.5 && imc < 25){
        printf("Peso normal");
    }else if (imc >=25 && imc <30){
        printf("Acima do Peso");
    }else{
        printf("Obeso");
    }
        
    return 0;
}