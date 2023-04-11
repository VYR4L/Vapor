#include <stdio.h>
#include <ctype.h>
#include "Stock.h"
#include "User.h"
#include "Payment_options.h"
#include "Relatorio.h"

struct relatorio{
    float valorcompra;
    char funcionario[100];
};

void carrinho(){
    float precoCarrinho=0;
    int digito=0, quantidade=0;
    scanf("%d", &quantidade);
    for(int i =0; i <= quantidade; i++) {
        printf("Digite o indicie do jogo que deseja adicionar ao carrinho:\n");
        scanf("%d", &digito);
        precoCarrinho += stock[digito-1].price;
    }
}

void relato(){
    float total;
    struct relatorio *relata = NULL;
    char relatorioStock[50];
    strcpy(relatorioStock, stock->name);
    char relatorioUser[100];
    strcpy(relatorioUser, usuario->name);

    relata = (struct relatorio *) malloc(totales() * sizeof(struct relatorio));

    if(!relata){
        printf("Não foi possível alocar");
    }
    for(int i = 0 ; i < totales() ; i++){
        total = total + relata[i].valorcompra;
    }

    printf("Obrigado por realizar a compra na nossa loja, espero ver você novamente.\n");
    printf("Compra realizada por funionario : %s \n",relata[valorM()].funcionario);
    printf("O valor total da compra é : %.2f \n",total);
    printf("Os jogos comprados foram : \n");
    for(int i = 0 ; i < totales(); i++){
        printf("%c \n", relatorioStock[i]);
    }
}

int main(){
    char decisao;
    printf("Bem vindo a Vapor!\nPor favor escolha uma opção.\n");
    printf("a. Cadastro de Produtos;\nb. Cadastro de Usuarios;\nc. Tela de Vendas;\nd. Emitir Relatorios.\n");
    scanf("%c", &decisao);
    decisao = tolower(decisao);
    while(decisao != 'e') {
        if (decisao == 'a') {
            cadastraEstoque();
        } else if (decisao == 'b') {
            cadastraUsuario();
        } else if (decisao == 'c') {
            for(int i = 0 ; i <= totales() ; i++) {
                printf("%d %s preco: %.2f\n", i+1, stock[i].name, stock[i].price);
            }
                carrinho();
                menuPagamento();
        } else if (decisao == 'd') {
            relato();
        } else {
            printf("Opcao invalida!\n");
        }
        printf("a. Cadastro de Produtos;\nb. Cadastro de Usuarios;\nc. Tela de Vendas;\nd. Emitir Relatorios.\n");
        scanf("%c", &decisao);
        decisao = tolower(decisao);
    }
}
