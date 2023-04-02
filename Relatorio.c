#include <stdlib.h>
#include <stdio.h>
#include "Stock.h"
#include "User.h"
struct relatorio{

    float valorcompra;
    char funcionario[100];
    char nomejogo[];

};

int relato(){

    int i;
    float total;
    struct relatorio *relata = NULL;


    relata = malloc(n * sizeof(struct relatorio));

    if(!relata){
        printf("Não foi possível alocar");
    }


    for(i = 0 ; i < n ; i++){
        total = total + relata[i].valorcompra;
    };

    printf("Obrigado por realizar a compra na nossa loja, espero ver você novamente.\n");
    printf("Compra realizada por funionario : %s \n",relata[i].funcionario);
    printf("O valor total da compra é : %.2f \n",total);
    printf("Os jogos comprados foram : \n");
    for(i = 0 ; i < n ; i++){
        printf("%c \n", *relata[i].nomejogo);
    };
}
