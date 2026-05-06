#include <stdio.h>

int main(){
    int i;
    float nota,km,nerd;
    km=99999;
    nerd=0;
    for(i=1;i<=5;i++){
        printf("Digite a %ia nota: ", i);
            scanf("%f", &nota);
        if(nota < km){
            km = nota;
        }
        if(nota > nerd){
            nerd = nota;
        }
    }
    printf("Mais km é %.2f \nMais inteligente é %.2f ", km,nerd);
    
    return 0;
}