#include <stdio.h>

int main()
{
    float gasolina;
    
    printf("Digite a quantidade de litros de gasolina colocada: ");
        scanf("%f", &gasolina);
        
    if (gasolina < 10 ) {
        printf("Chaveiro");   
    } else if (gasolina >= 20) {
        printf("Oleo");
    } else {
        printf("Ducha");
    }
        
return 0;

}