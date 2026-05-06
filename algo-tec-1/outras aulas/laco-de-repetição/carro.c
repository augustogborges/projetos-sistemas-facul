#include <stdio.h>

int main(){
    int i;
    float consumo,km;
    km = 0;
    for(i=1;i<=5;i++){
        printf("Digite a media do %ia carro: ", i);
            scanf("%f", &km);
        if(nota < km){
            km = nota;
        }
    }
    printf("Mais km é %.2f ", km);
    
    return 0;
}