#include<stdlib.h>
#include<stdio.h>

 int n = 0, totals;

int totales(){
    totals = n;
};

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

void mostraEstoque(struct library *stock){
    for(int i = 0; i < n; i++){
        printf("%d. Digite o nome do produto: %s\n",i+1 , stock[i].name);
        printf("%d. Tipo de midia: %s\n",i+1 , stock[i].MediaType);
        printf("%d. Quantidade: %d\n",i+1 , stock[i].quantity);
        printf("%d. Preco: %f\n",i+1 , stock[i].price);
        printf("%d. Tags: %s\n",i+1 , stock[i].tag);
        printf("%d. MetaC: %f\n",i+1 , stock[i].metaC);
        printf("%d. Desenvolvedora: %s\n",i+1 , stock[i].developer);
        printf("%d. Data: %s\n",i+1 , stock[i].data);
        for(int j=0; j<5; j++){
            if(j == 0){
                printf("%d. Sistema Operacional: %s\n",i+1 , stock[i].requirements[j]);
            }
            else if(j == 1){
                printf("%d. Pprocessador: %s\n",i+1 , stock[i].requirements[j]);
            }
            else if(j == 2){
                printf("%d. Memoria ram: %s\n",i+1 , stock[i].requirements[j]);
            }
            else if(j == 3){
                printf("%d. Placa de video: %s\n",i+1 , stock[i].requirements[j]);
            }
            else if(j == 4){
                printf("%d. Armazenameno Interno: %s\n",i+1 , stock[i].requirements[j]);
            }
        }
    }
}

void removeJogo(struct library **stock){
    int removeN=0;
    printf("Digite o numero do jogo que deseja excluir do estoque: ");
    scanf("%d", &removeN);

    if (removeN < 1 || removeN > n) {
        printf("Numero invalido.\n");
        return;
    }

    for (int i = removeN-1; i < n-1; i++) {
        stock[i] = stock[i+1];
    }
    n -= 1;
    struct library *new_stock = realloc(*stock, n * sizeof(struct library *));
    if (new_stock == NULL) {
        printf("Nao foi possivel alocar");
    }
    *stock = new_stock;
    printf("Jogo removido com sucesso.\n");
}

void cadastraJogo(struct library **stock){
    *stock = realloc(*stock, n * sizeof(struct library *));
    for(int i = 0; i < n; i++){
        printf("Digite o nome do produto: ");
        scanf(" %s", (*stock)[i].name);
        fflush(stdin);

        printf("Digite o tipo de midia: ");
        scanf(" %s", (*stock)[i].MediaType);
        fflush(stdin);

        printf("Digite a quantidade: ");
        scanf("%d", &(*stock)[i].quantity);
        fflush(stdin);

        printf("Digite o preco: ");
        scanf("%f", &(*stock)[i].price);
        fflush(stdin);

        printf("Digite as tags: ");
        scanf(" %s", (*stock)[i].tag);
        fflush(stdin);

        printf("Digite a metaC: ");
        scanf("%f", &(*stock)[i].metaC);
        fflush(stdin);

        printf("Digite a desenvolvedora: ");
        scanf(" %s", (*stock)[i].developer);
        fflush(stdin);

        printf("Digite a data: ");
        scanf(" %s", (*stock)[i].data);
        fflush(stdin);

        printf("Digite os requisitos: \n");
        for(int j=0; j<5; j++){
            char requisito[50];
            if(j == 0){
                printf("Sistema Operacional: ");
            }
            else if(j == 1){
                printf("Processador: ");
            }
            else if(j == 2){
                printf("Memoria ram: ");
            }
            else if(j == 3){
                printf("Placa de video: ");
            }
            else if(j == 4){
                printf("Armazenamento Interno: ");
            }
            fgets(requisito, 50, stdin);
            sscanf(requisito, "%s", (*stock)[i].requirements[j]);
        }
    }
}



void cadastraEstoque(){
    int confirmacao;
    struct library *stock = NULL;

    printf("Digite a quantidade de produtos que deseja cadastrar: ");
    scanf("%d", &n);

    stock = malloc(n * sizeof(struct library *));
    if(!stock){
        printf("Nao foi possivel alocar o estoque");
        exit(1);
    }

    printf("Digite a operacao que deseja realizar: ");
    printf("(1-Cadastrar;\n2-Remover Jogo Cadastrado;\n3-Mostrar o Estoque;\n4-Sair.) ");
    scanf("%d", &confirmacao);
    while(confirmacao != 4) {
        if (confirmacao == 1) {
            cadastraJogo(&stock);
            printf("Digite a operacao que deseja realizar: ");
            printf("(1-Cadastrar;\n2-Remover Jogo Cadastrado;\n3-Mostrar o Estoque;\n4-Sair.) ");
            scanf("%d", &confirmacao);
        }
        else if (confirmacao == 2) {
            mostraEstoque(stock);
            removeJogo(&stock);
            printf("Digite a operacao que deseja realizar: ");
            printf("(1-Cadastrar;\n2-Remover Jogo Cadastrado;\n3-Mostrar o Estoque;\n4-Sair.) ");
            scanf("%d", &confirmacao);
        }
        else if (confirmacao == 3) {
            mostraEstoque(stock);
            printf("Digite a operacao que deseja realizar: ");
            printf("(1-Cadastrar;\n2-Remover Jogo Cadastrado;\n3-Mostrar o Estoque;\n4-Sair.) ");
            scanf("%d", &confirmacao);
        }
        else if(confirmacao == 4){
            confirmacao = 4;
        }
        else {
            printf("Opcao invalida\n");
            printf("Digite a operacao que deseja realizar: ");
            scanf("%d", &confirmacao);
        }
    }
    free(stock);
}
