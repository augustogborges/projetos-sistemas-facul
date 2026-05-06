#include <stdio.h>

int main(){
    int i;
    float nota,maisCara;
    maisCara=0;
    for(i=1;i<=10;i++){
        printf("Digite o valor da %ia venda: R$", i);
            scanf("%f", &nota);
        if(nota > maisCara){
            maisCara = nota;
        }
    }
    printf("%.2f", maisCara);
    
    return 0;
}