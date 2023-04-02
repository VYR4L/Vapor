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


    for(i = 0 ; i < x ; i++){
        total = total + valorcompra;
    };

    printf("Obrigado por realizar a compra na nossa loja, espero ver você novamente.\n");
    printf("Compra realizada por funionario : %s \n",funcionario);
    printf("O valor total da compra é : %.2f \n",total);
    printf("Os jogos comprados foram : \n");
    for(i = 0 ; i < x ; i++){
        printf("%c \n",nomejogo);
    };
}
