#include <stdio.h>
#include <stdlib.h>

#define false 0
#define true 1


struct Elemento {
    int dado;
    struct Elemento* prox;
};
typedef struct Elemento *Pilha;

Pilha criaPilha(){
    return NULL;
}

void imprimePilha(Pilha p){
    Pilha ap = p;
    printf("Pilha: ");
    while(ap != NULL){
        printf("%d -> ", ap->dado);
        ap = ap->prox;
    }
    puts("");
}

Pilha empilhaElemento(Pilha p, int e){
    Pilha novo;
    novo = malloc(sizeof(struct Elemento));
    novo->dado = e;
    novo->prox = p;
    return(novo);
}

Pilha desempilhaElemento(Pilha p, int *e){ 
    Pilha ap;
    if (p){
        *e = p->dado;
        ap = p;
        p = p->prox;
        free(ap);
    } else {
        *e = -1;
        puts("Pilha vazia.");
    }
    return p;
}

void menu(Pilha p){
    int resp = 1;
    while (resp){
        puts("");
        puts("0 sair");
        puts("1 Empilhar");
        puts("2 Desempilhar");
        puts("3 Visualizar pilha");
        scanf("%d", &resp);
        puts("");
        switch(resp){
            case 0: 
                resp = 0;
                break;
            case 1: 
                puts("Insira o numero a ser empilhado:");
                scanf("%d", &resp);
                p = empilhaElemento(p, resp);
                break;
            case 2: 
                p = desempilhaElemento(p);
                break;
            case 3: 
                imprimePilha(p);
                break;
            default:
                puts("Comando desconhecido.");
                break;
        }
    } 
}

int main () {
    Pilha p1 = criaPilha();

    menu(p1);

    return 0;
}