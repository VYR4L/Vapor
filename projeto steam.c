#include <stdio.h>

int main() {
    float valor, valor_desconto, valor_parcela;

    printf("Informe o valor da compra: ");
    scanf("%f", &valor);

    valor_desconto = valor * 0.9; // Calcula o valor com desconto de 10%
    valor_parcela = valor / 2; // Calcula o valor de cada parcela

    printf("\nOpcoes de pagamento:\n");
    printf("1. A vista (com 10%% de desconto): R$ %.2f\n", valor_desconto);
    printf("2. Parcelado em 2 vezes de R$ %.2f\n", valor_parcela);


    int opcao;
    printf("\nDigite a opcao desejada (1 ou 2): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("\nPagamento a vista selecionado. O valor total com desconto e: R$ %.2f\n", valor_desconto);
            break;
        case 2:
            printf("\nPagamento parcelado em 2 vezes selecionado. Cada parcela tem o valor de R$ %.2f\n", valor_parcela);
            break;
        default:
            printf("\nOpcao invalida.\n");
    }

    return 0;
}

