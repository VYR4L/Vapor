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
    for(int i = 0 ; i < totales() ; i++){
        printf("%c \n", relatorioStock[i]);
    }
}





int main(){
    char decisao;
    printf("BEM VINDO A VAPOR!\nO QUE DESEJA FAZER?\n");
    printf("a. Cadastro de Produtos;\nb. Cadastro de Usuarios;\nc. Tela de Vendas;\nd. Emitir Relatorios.");
    scanf("%c", &decisao);
    decisao = tolower(decisao);
    if(decisao == 'a'){
        cadastraEstoque();
    }
    else if(decisao == 'b'){
        cadastraUsuario();
    }
    else if(decisao == 'c'){
        menuPagamento();
    }
    else if(decisao == 'd'){
        relato();
    }
    else{
        printf("Opcao invalida!");
    }
}
