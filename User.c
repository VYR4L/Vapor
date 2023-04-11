#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int m = 0;
int valorM(){
    m;
};
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

void cadastraUsuario(){
    int i;
    int a = 1, b = 1;
    char confirm[20];
    struct cadastro *usuario = NULL;

    printf("Digite a quantidade de Usuarios que deseja Cadastrar: ");
    scanf("%d", &m);

    usuario = malloc(m * sizeof(struct cadastro));

    if(usuario == NULL){
        printf("Não foi possível alocar o estoque");
        exit(1);
    }

    for(i = 0; i < m; i++){
        printf("Digite o nome da Pessoa: ");
        scanf("%s", usuario[i].name);
        fflush(stdin);

        printf("Digite o apelido que ira utilizar: ");
        scanf("%s", usuario[i].apelido);
        fflush(stdin);

        while(a != 0){
            printf("Cadastre a senha do Usuario: ");
            scanf("%s", usuario[i].senha);
            fflush(stdin);
            printf("Confirme sua senha: ");
            scanf("%s", confirm);
            a = strcmp(usuario[i].senha,confirm);
        }

        while(b != 0){
            printf("Digite o email do Usuario: ");
            scanf("%s", usuario[i].email);
            fflush(stdin);
            printf("Confirme o Email: ");
            scanf("%s", confirm);
            b = strcmp(usuario[i].email,confirm);
        }

        printf("Digite o telefone do Usuario: ");
        scanf("%d", &usuario[i].tel);
        fflush(stdin);

        printf("Digite a cidade do Usuario: ");
        scanf("%s", usuario[i].local);
        fflush(stdin);

        printf("Digite a data de nascimento do Usuario: ");
        scanf("%d", &usuario[i].nasci);
        fflush(stdin);

        printf("Digite o sexo do Usuario: ");
        scanf("%s", usuario[i].sexo);
        fflush(stdin);

        system("cls");
    }
    free(usuario);
}
