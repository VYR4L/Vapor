#include<stdlib.h>
#include<stdio.h>

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

int main(){
    int n=0, i=0;
    struct library *stock = NULL;
    struct library *ptrS = NULL;

    printf("Digite a quantity de produtos que deseja cadastrar: ");
    scanf("%d", &n);

    // Aloca memória para o array "stock"
    stock = malloc(n * sizeof(struct library));

    // Verifica se houve erro na alocação de memória
    if(stock == NULL){
        printf("Não foi possível alocar o estoque");
        exit(1);
    }
    // Realoca a memória do array "stock" com base na entrada do usuário
    ptrS = realloc(stock, n * sizeof(struct library));
    for(i = 0; i < n; i++){
        printf("Digite o noame do produto: ");
        scanf(" %c", &stock[i].name);
        fflush(stdin);

        printf("Digite o tipo de mídia: ");
        scanf(" %c", &stock[i].MediaType);
        fflush(stdin);

        printf("Digite a quantidade: ");
        scanf("%d", &stock[i].quantity);
        fflush(stdin);

        printf("Digite o preço: ");
        scanf("%f", &stock[i].price);
        fflush(stdin);

        printf("Digite a tag: ");
        scanf(" %c", &stock[i].tag);
        fflush(stdin);

        printf("Digite a metaC: ");
        scanf("%d", &stock[i].metaC);
        fflush(stdin);

        printf("Digite a desenvolvedora: ");
        scanf(" %c", &stock[i].developer);
        fflush(stdin);

        printf("Digite a data: ");
        scanf(" %c", &stock[i].data);
        fflush(stdin);

        printf("Digite os requisitos: ");
        for(int j=0; j<5; j++){
            if(j == 0){
                printf("Sistema Operacional:");
            }
            else if(j == 1){
                printf("processador:");
            }
            else if(j == 2){
                printf("Memória ram:");
            }
            else if(j == 3){
                printf("Placa de vídeo:");
            }
            else if(j == 4){
                printf("Armazenameno Interno:");
            }
            scanf("%s", stock[i].requirements[j]);
        }
        fflush(stdin);
    }
    free(stock);
}
