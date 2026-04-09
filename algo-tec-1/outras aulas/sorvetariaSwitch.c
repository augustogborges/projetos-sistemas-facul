#include <stdio.h>

int main() {
    char tipo, casquinha, caldaquente, chocolate, frutasdaEstacao;
    int quant;
    float valor;

    printf("Digite o sabor de sorvete: ");
    scanf(" %c", &tipo);

    printf("Digite a quantidade de bolas: ");
    scanf("%i", &quant);

    valor = quant * 1.5;

    switch (tipo) {
        case 'M':
        case 'm':
            printf("Voce quer casquinha? (y/n): ");
            scanf(" %c", &casquinha);

            if (casquinha == 'y' || casquinha == 'Y') {
                printf("O valor da conta ficara %.2f e voce esta comprando sorvete de Morango com casquinha", valor + 3);
            } else {
                printf("O valor da conta ficara %.2f e voce esta comprando sorvete de Morango", valor);
            }
            break;

        case 'C':
        case 'c':
            printf("Voce quer calda quente? (y/n): ");
            scanf(" %c", &caldaquente);

            if (caldaquente == 'y' || caldaquente == 'Y') {
                printf("O valor da conta ficara %.2f e voce esta comprando sorvete de Creme com calda quente", valor + 2.5);
            } else {
                printf("O valor da conta ficara %.2f e voce esta comprando sorvete de Creme", valor);
            }
            break;

        case 'F':
        case 'f':
            printf("Voce quer chocolate com granulado? (y/n): ");
            scanf(" %c", &chocolate);

            if (chocolate == 'y' || chocolate == 'Y') {
                printf("O valor da conta ficara %.2f e voce esta comprando sorvete de Flocos com chocolate e granulado", valor + 2);
            } else {
                printf("O valor da conta ficara %.2f e voce esta comprando sorvete de Flocos", valor);
            }
            break;

        case 'A':
        case 'a':
            printf("Voce quer frutas da estacao? (y/n): ");
            scanf(" %c", &frutasdaEstacao);

            if (frutasdaEstacao == 'y' || frutasdaEstacao == 'Y') {
                printf("O valor da conta ficara %.2f e voce esta comprando sorvete de Ameixa com frutas da estacao", valor + 5);
            } else {
                printf("O valor da conta ficara %.2f e voce esta comprando sorvete de Ameixa", valor);
            }
            break;

        default:
            printf("Nao existe esse sorvete");
            break;
    }

    return 0;
}