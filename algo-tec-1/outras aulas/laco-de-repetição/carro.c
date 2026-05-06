#include <stdio.h>

int main(){
    int i;
    float consumo, km;
    consumo = 0;
    for(i = 1; i <= 5; i++){
        printf("Digite a media do %i carro: ", i);
        scanf("%f", &km);

        if(km > consumo){
            consumo = km;
        }
    }

    printf("Maior km é %.2f\n", consumo);

    return 0;
}