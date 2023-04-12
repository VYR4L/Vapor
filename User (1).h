#ifndef USERS_H_DEFINED
#define USERS_H_DEFINED

#include<stdlib.h>
#include<stdio.h>
#include<string.h>



struct cadastro{
    char name[100];
    char apelido[50];
    char senha[20];
    char email[50];
    int tel;
    char local[50];
    int nasci;
    char sexo[20];
};
struct cadastro *usuario = NULL;
void cadastraUsuario();
int valorM();
#endif
