/*
Implementar um programa que gerencia uma lista encadeada ordenada com alocação dinâmica.
Cada elemento da lista deve conter um número inteiro.
Os elementos devem ser inseridos em ordem crescente. Por exemplo, de for inserida a sequência 5, 3, 9, 4, ao imprimir o conteúdo da lista, deve aparecer 3, 4, 5, 9.
O programa deve oferecer ao usuário as operações:
- Inserir elemento na lista;
- Retirar elemento da lista;
- Imprimir o conteúdo da lista;
- Buscar um elemento informado está na lista, retornando o endereço do elemento se ele existir na lista, ou NULL se não existir;
- Contar o número de elementos da lista.

*/

#include <stdio.h>
#include <stdlib.h>

struct Elemento {
    int dado;
    struct Elemento *prox;
};

typedef struct Elemento Nodo;

typedef Nodo *Lista;

Lista inserirDado(Lista lista, int novoDado){
    Lista novoElemento, atual = lista, anterior = lista;

    novoElemento = malloc(sizeof(struct Elemento));
    novoElemento->dado = novoDado;

    while (atual != NULL && atual->dado < novoDado) {
        anterior = atual;
        atual = atual->prox;
    }
    
    novoElemento->prox = atual;
    
    if (atual == lista) {
        lista = novoElemento;
    } else {
        anterior->prox = novoElemento;
    }
    return lista;
}

Lista removerDado(Lista lista, int dadoComp) {
    Lista atual = lista, anterior = lista;

    while (atual->dado != dadoComp && atual->prox != NULL) {
        anterior = atual;
        atual = atual->prox;
    }

    if (atual == anterior) {
        lista = atual->prox;
    } else if (atual->prox == NULL){
        puts("Não encontrado");
    } else {
        anterior->prox = atual->prox;
    }
    return lista;
}

void imprimirLista(Lista lista){
    Lista atual = lista;
    while(atual != NULL){
        printf("%d -> ", atual->dado);
        atual = atual->prox;
    }
    puts("NULL");
}

void buscarDado(Lista lista, int dadoComp){
    Lista atual = lista;

    while (atual != NULL && atual->dado != dadoComp) {
        atual = atual->prox;
    }

    if (atual == NULL){
        puts("");
        puts("NULL");
    } else {
        printf("%p -> %d\n", atual, atual->dado);
    }
}

int contarElementos(Lista lista){
    int i = 0;
    Lista atual = lista;
    while(atual != NULL){
        atual = atual->prox;
        i++;
    }
    return i;
}

void menu(Lista lista){
    int resp = 1;
    while(resp != 0){
        puts("");
        puts("--Menu--");
        puts("0 Encerrrar");
        puts("1 Inserir Dado");
        puts("2 Remover Dado");
        puts("3 Buscar Dado");
        puts("4 Contar Elementos");
        puts("5 Imprimir Lista");
        scanf("%d", &resp);
        switch(resp){
            case 0:
                puts("Encerrando");
                break;
            case 1: 
                puts("");
                puts("Dado a ser inserido:");
                scanf("%d", &resp);
                    lista = inserirDado(lista, resp);
                break;
            case 2: 
                puts("");
                puts("Dado a ser removido:");
                scanf("%d", &resp);
                    lista = removerDado(lista, resp);
                printf("%d removido. Lista atual:\n", resp);
                imprimirLista(lista);
                break;
            case 3: 
                puts("");
                puts("Dado a ser buscado:");
                scanf("%d", &resp);
                    buscarDado(lista, resp);
                break;
            case 4: 
                puts("");
                printf("%d Elementos na lista\n", contarElementos(lista));
                break;
            case 5: 
                puts("");
                imprimirLista(lista);
                break;
        }
    }
}

int main () {
    Lista lista1 = NULL;

    menu(lista1);

    return 0;
}