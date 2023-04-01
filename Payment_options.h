#ifndef PAYMENT_OPTIONS_H_INCLUDED
#define PAYMENT_OPTIONS_H_INCLUDED
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

float aVista(float gasto);
float parcelado(float gasto);
float informaValor();
void opcoesPagamento();
void opcaoInvalida();
int menuPagamento();

#endif