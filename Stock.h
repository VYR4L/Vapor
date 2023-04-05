#ifndef STOCK_H_INCLUDED
#define STOCK_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

int n;
struct library{
    char name[50];
    char MediaType[8];
    int quantity;
    float price;
    char tag[100];
    float metaC;
    char developer[50];
    char data[50];
    char requirements[5][50];
};

struct library *stock = NULL;

void mostraEstoque(struct library *stock, int n);
void removeJogo(struct library **stock, int n);
void cadastraJogo(struct library **stock, int n);
void cadastraEstoque();
#endif
