#include <stdio.h>

int main(){

    int anoNascimento, ano;
    ano = 2026;
    printf("Qual o ano do seu nascimento");
        scanf("%i", &anoNascimento);

    idade = ano - anoNascimento;

    if (idade >= 16 && idade < 18) {
        printf ("Voce pode votar e tem %i", idade);
    }else if (idade >= 18){
        printf("Voce pode dirigir e votar e tem %i", idade);
    }else{
        printf("Voce tem %i anos e por isso nao pode fazer nada");
    }

return 0


}