#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



float parcelado(float gasto) {
    int qntParcelas;
    float valorParcela;
    float juros;
    int validaQntParcela = 0;

    printf("\nVoce poderá parcelar de 1 a 12 parcelas\n");
    printf("(Lembrando que ate 5 parcelas os juros não serão inclusos)\n");

    while(validaQntParcela == 0) {
        printf("\nDigite a quantidade de parcelas: ");
        scanf("%d", &qntParcelas);

        if(qntParcelas >= 1 && qntParcelas <= 5) {
            valorParcela = gasto / qntParcelas; // Calcula o valor de cada parcela sem juros

            printf("\nPagamento parcelado em %d vezes selecionado.", qntParcelas);
            printf("\nValor total da compra sem juros: R$%.2f\n", gasto);
            printf("Valor de cada parcela sem juros: R$%.2f\n", valorParcela);

            validaQntParcela = 1; //Sai do loop
        } else if (qntParcelas >= 6 && qntParcelas <= 12) {
            juros = gasto * 0.03 * qntParcelas;

            float valorParcela = (gasto + juros) / qntParcelas;

            printf("\nPagamento parcelado em %d vezes selecionado", qntParcelas);
            printf("\nValor total da compra com juros: R$%.2f\n", gasto + juros);
            printf("Valor de cada parcela com juros: R$%.2f\n", valorParcela);

            validaQntParcela = 1; //Sai do loop
        } else {
            printf("\nEscolha uma quantidade de parcelas entre 1 a 12");
            validaQntParcela = 0; //Continua no loop
        }
    }
}

float informaValor() {
    float gasto;
    char entrada[100];

    while (1) {
        printf("Informe o valor total gasto na compra: R$");
        fgets(entrada, 100, stdin);

        // Remove o caractere de nova linha da entrada
        entrada[strcspn(entrada, "\n")] = 0;

        // Verifica se a entrada contém apenas dígitos e ponto decimal
        int i, ponto = 0;
        for (i = 0; entrada[i] != '\0'; i++) {
            if (!isdigit(entrada[i])) {
                if (entrada[i] == '.' && ponto == 0) {
                    ponto = 1;
                } else {
                    printf("Valor invalido. Tente novamente.\n");
                    break;
                }
            }
        }

        if (entrada[i] == '\0') {
            // A entrada contém apenas dígitos e ponto decimal
            gasto = atof(entrada);
            break;
        }
    }

    return gasto;
}

void opcoesPagamento(){
    printf("\nOpcoes de pagamento:\n");
    printf("1 - A vista (10%% de desconto)\n");
    printf("2 - Parcelado\n");
}

void opcaoInvalida(){
    printf("Opcao invalida.\n");
}

float aVista(float gasto) {
    float aVista;
    printf("%f", gasto);
    aVista = gasto - (gasto * 10 / 100); // Calcula o valor com desconto de 10%
    printf("\nPagamento a vista selecionado. O valor total com desconto sera: R$ %.2f\n", aVista);
    return aVista;
}
int menuPagamento() {
    setlocale(LC_ALL, "Portuguese");

    float gasto = informaValor();

    opcoesPagamento();

    int opcao;


    while (1) {
        printf("\nDigite a opcao desejada: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            aVista(gasto);
            break;
        } else if (opcao == 2) {
            parcelado(gasto);
            break;
        } else {
            printf("Opcao invalida. Tente novamente.\n");
        }
    }

    return 0;
}
