#include <stdio.h>
#include <ctype.h>
#include "Stock.h"
#include "User.h"
#include "Payment_options.h"
#include "Relatorio.h"


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
