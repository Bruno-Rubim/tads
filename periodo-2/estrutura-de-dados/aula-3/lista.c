#include <stdio.h>
#include <string.h>
#define MaxItens 10
#define TamItem 10

typedef char tpLista[MaxItens][TamItem];

void criarLista(tpLista lista){
    int i;
    for(i = 0; i < MaxItens && strlen(lista[i]) != 0; i++){
        lista[i][0] = '\0';
    }
}

void inserirItem(tpLista lista, char *item){
    int i;
    for(i = 0; i < MaxItens && strlen(lista[i]) != 0; i++);
    if(!(i<MaxItens)){
        printf("Lista Cheia.");
    } else {
        strcpy(lista[i], item);
        printf("Lista Cheia.");
    }
}

void exibirLista (tpLista lista){
    for(int i = 0; i < MaxItens; i++){
        for(int j = 0; j < TamItem; j++){
            printf("%c", lista[i][j]);
        }
        printf("\n");
    }
}

void contarItens(tpLista lista){
    int i;
    for(i = 0; i < MaxItens && strlen(lista[i]) != 0; i++);
    printf("%d Itens na lista", i);
}

void retirarItem(tpLista lista, char *item){
    int i;
    for(i = 0; i < MaxItens && !(strcmp(lista[i], item)) && strlen(lista[i]); i++);
    if (!(i < MaxItens)){
        printf("Item não encontrado\n");
    } else { 
        printf("Item encontrado, removendo ...\n");
        if (i < MaxItens - 1){
            strcpy(lista[i], lista[i + 1]);
        }
        lista[i][0] = '\0';
    }
}

void menu(int *exit, tpLista lista){
    int resp = 0;
    char item[TamItem];
    puts("");
    puts("Menu: ");
    puts("0. Sair");
    puts("1. Exibir lista");
    puts("2. Inserir item na lista");
    puts("3. Remover item da lista");
    puts("");
    scanf("%d", &resp);
    puts("");
    switch(resp){
        case 0:
            exit = 1;
            break;
        case 1:
            exibirLista(lista);
            break;
        case 2:
            puts("Digite o item a ser inserido:");
            gets(item);
            inserirItem(lista, &item);
            break;
        case 3:
            puts("Digite o item a ser removido:");
            gets(item);
            retirarItem(lista, &item);
            break;
        default:
            puts("Opcao invalida");
            break;
    }
}

int main (){

    tpLista l1;
    criarLista(l1);
    puts("Lista criada");

    int exit = 0;
    while (!exit) {
        menu(&exit, l1);
    }

    return 0;
}