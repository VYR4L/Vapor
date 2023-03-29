#include<stdlib.h>
#include<stdio.h>

struct biblioteca{
    char nome;
    char tipoMidia;
    int quantidade;
    float preco;
    char tag;
    int metaC;
    char desenvolvedora;
    char data;
    char requerimentos[50][5];
};

int main(){
    int n=0, i=0;
    struct biblioteca *stock = NULL;
    struct biblioteca *ptrS = NULL;

    printf("Digite a quantidade de produtos que deseja cadastrar: ");
    scanf("%d", &n);

    // Aloca memória para o array "stock"
    stock = malloc(n * sizeof(struct biblioteca));

    // Verifica se houve erro na alocação de memória
    if(stock == NULL){
        printf("Não foi possível alocar o estoque");
        exit(1);
    }
    // Realoca a memória do array "stock" com base na entrada do usuário
    ptrS = realloc(stock, n * sizeof(struct biblioteca));
    for(i = 0; i < n; i++){
        
    }
    free(stock)
}