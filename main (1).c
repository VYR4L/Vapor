#include <stdio.h>
#include <ctype.h>
#include "Stock.h"
#include "User.h"
#include "Payment_options.h"

struct library* estoque;
struct library* teste(){
    estoque = estocales();
    return estoque;
}
float x=0;
struct relatorio{
    float valorcompra;
    char funcionario[100];
};

int digito=0;
float precoCarrinho=0;
float carrinho(){
    int quantidade=0;
    scanf("%d", &quantidade);
    for(int i =0; i <= quantidade; i++) {
        printf("\nDigite o indice do jogo que deseja adicionar ao carrinho:\n");
        scanf("%d", &digito);
        precoCarrinho += estoque[i].price;
    }
    return precoCarrinho;
}

int main(){

    char decisao;
    float preco;

    printf("BEM VINDO A VAPOR!\nO QUE DESEJA FAZER?\n");
    printf("\na. Cadastro de Produtos;\nb. Cadastro de Usuarios;\nc. Tela de Vendas;\nd. Emitir Relatorios.\ne. sair");
    scanf("%c", &decisao);
    decisao = tolower(decisao);
    while(decisao != 'e') {
        if (decisao == 'a') {
            cadastraEstoque();

        }
        else if (decisao == 'b') {
            cadastraUsuario();

        }
        else if (decisao == 'c') {
            printf("Digita o preco total do carrinho: ");
            scanf("%f", &preco);
            opcoesPagamento();
            int opcaoPagamento = 0;
            scanf("%d", &opcaoPagamento);

            if(opcaoPagamento == 1) {
                aVista(preco);
            }
            else if (opcaoPagamento == 2) {
                parcelado(preco);
            }
            else {
                printf("Opcao invalida\n");
            }

            }
            else if (decisao == 'd') {
                relatoEstoque();
            }
            else {
                printf("Opcao invalida!");
                //system("cls");
        }
        printf("a. Cadastro de Produtos;\nb. Cadastro de Usuarios;\nc. Tela de Vendas;\nd. Emitir Relatorios.\ne. sair\n");
        scanf("%c", &decisao);
    }
}