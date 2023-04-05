#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "Stock.h"
#include "User.h"

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

    relata = malloc(n * sizeof(struct relatorio));

    if(!relata){
        printf("Não foi possível alocar");
    }


    for(int i = 0 ; i < n ; i++){
        total = total + relata[i].valorcompra;
    }

    printf("Obrigado por realizar a compra na nossa loja, espero ver você novamente.\n");
    printf("Compra realizada por funionario : %s \n",relata[m].funcionario);
    printf("O valor total da compra é : %.2f \n",total);
    printf("Os jogos comprados foram : \n");
    for(int i = 0 ; i < n ; i++){
        printf("%c \n", relatorioStock[i]);
    }
}
