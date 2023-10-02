#include <stdio.h>
#include <stdlib.h>

typedef struct Elemento {
    int dado;
    struct Elemento* prox;
} Elemento;

typedef struct {
    Elemento* inicio;
    Elemento* fim;
} Fila;

Fila criaFila(){
    Fila f;
    f.inicio = NULL;
    f.fim = NULL;
    return f;
}

void imprimeFila(Fila fila){
    Elemento* ap;
    if (fila.inicio){
        puts("Fila: ");
        ap = fila.inicio;
        while(ap != NULL){
            printf("%d - ", ap->dado);
            ap = ap->prox;
        }
        puts("Fim da fila");
    } else {
        puts("Fila vazia!");
    }

    puts("");
}

Fila insereFila(Fila fila, int e){
    Elemento* novo;
    novo = malloc(sizeof(Elemento));
    novo->dado = e;
    novo->prox = NULL;
    if(fila.inicio){
        fila.fim->prox = novo;
        fila.fim = novo;
    } else {
        fila.inicio = novo;
        fila.fim = novo;
    }
    printf("Inserindo %d ...\n", e);
    printf("Nova ");
    imprimeFila(fila);
    return fila;
}

Fila retiraFila(Fila fila, int* e){
    Elemento* ap;
    if(fila.inicio){
        *e = fila.inicio->dado;
        ap = fila.inicio;
        fila.inicio = fila.inicio->prox;
        free(ap);
        if(!fila.inicio){
            fila.fim = NULL;
        }
    } else {
        *e = -1;
        puts("Fila vazia");
    }
    printf("Retirando...\n\n");
    printf("Nova ");
    imprimeFila(fila);
    return fila;
}

void menu(Fila fila){
    int resp = 1;
    int garbage;

    while (resp){
        puts("Insira um número correspondendo a uma ação: ");
        puts("0 sair");
        puts("1 Exibir fila");
        puts("2 Inserir elemento");
        puts("3 Remover elemento");
        scanf("%d", &resp);
        puts("");
        switch(resp){
        case 0:
            puts("Adeus o/");
            break;
        case 1:
            imprimeFila(fila);
            break;
        case 2:
            printf("Insira o elemento: ");
            scanf("%d", &resp);
            fila = insereFila(fila, resp);
            resp = 2;
            break;
        case 3:
            fila = retiraFila(fila, &garbage);
            break;
        default:
            puts("Comando não reconhecido");
            break;
        }
    }
}

int main(){
    Fila f1 = criaFila();

    puts("Olá! Bem vindo ao simulador de gerenciador de filas!");
    menu(f1);

    return 0;
}