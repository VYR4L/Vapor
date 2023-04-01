#ifndef STOCK_H_INCLUDED
#define STOCK_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

void mostra_estoque(struct library *stock, int n);
void remove_jogo(struct library **stock, int n);
void cadastra_jogo(struct library **stock, int n);
#endif