#include <stdio.h>
#include <stdlib.h>

struct Elemento{
    int dado;
    struct Elemento *esqerda;
    struct Elemento *direita;
}

typedef struct Elemento* Arvore;

Arvore criaArvore(){
    return NULL;
}

void insereArvore(Arvore *arvore, int valor){
    if((*a) == NULL){
        (*a) = (Arvore)malloc(sizeof(Elemento));
        (*a)->dado = valor;
        (*a)->esqerda = NULL;
        (*a)->direita = NULL;
    } else if (valor < (*a)->dado){
        insereArvore(&((*a)->esqerda), valor);
    } else if (valor > (*a)->dado){
        insereArvore(&((*a)->direita), valor);
    } else {
        puts("Valor repetido, inserção cancelada");
    }
}

void buscaArvore(Arvore ){
    if (a == NULL) {
        
    }
}

int main(){
    return 0;
}