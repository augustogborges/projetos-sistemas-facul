#include <stdio.h>

int main(){
    int i, aprovado;
    float nota;
    aprovado = 0;

    for(i = 1; i <= 5; i++){
        printf("Digite a nota do %i aluno: ", i);
        scanf("%f", &nota);

        if(nota >= 60){
            aprovado++;
        }
    }

    printf("A quantidade de alunos aprovados eh: %i\n", aprovado);

    return 0;
}