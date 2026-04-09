#include <stdio.h>

int main () {

char sigla;

    printf("Digite a sigla: ");
        scanf("%c", &sigla);

    if (sigla == 'f' || sigla == 'F')
        printf("Macha");

    else if (sigla == 'm' || sigla == 'M')
        printf("Macho");

    else 
        printf("Nada");


return 0;
}