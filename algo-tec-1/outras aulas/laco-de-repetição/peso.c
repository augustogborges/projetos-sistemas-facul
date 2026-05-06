#include <stdio.h>

int main(){
    int i;
    float peso,Magro;
    Magro=99999;
    for(i=1;i<=5;i++){
        printf("Digite o %ia peso: ", i);
            scanf("%f", &peso);
        if(peso < Magro){
            Magro = peso;
        }
    }
    printf("Magro %.2f",Magro);
    
    return 0;
}