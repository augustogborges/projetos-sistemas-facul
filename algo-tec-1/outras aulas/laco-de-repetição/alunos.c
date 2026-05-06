#include <stdio.h>

int main(){
    int i;
    float nota,fraco,nerd;
    fraco=99999;
    nerd=0;
    for(i=1;i<=5;i++){
        printf("Digite a %ia nota: ", i);
            scanf("%f", &nota);
        if(nota < fraco){
            fraco = nota;
        }
        if(nota > nerd){
            nerd = nota;
        }
    }
    printf("Mais fraco é %.2f \nMais inteligente é %.2f ", fraco,nerd);
    
    return 0;
}