#include <stdio.h>
#include <string.h>
#define MaxItens 10
#define TamItem 10

typedef char tpLista[MaxItens][TamItem];

void criarLista(tpLista lista){
    int i;
    for(i = 0; i < MaxItens; i++){
        lista[i][0] = '\0';
    }
}

void removerEnter(char *string){
    for(int i = 0; i < TamItem; i++){
        if (string[i] == '\n'){
            string[i] = '\0';
        }
    }
}

void exibirLista (tpLista lista){
    puts("");
    if (lista[0][0] == '\0') {
        puts("Lista vazia");
    } else {
        for(int i = 0; i < MaxItens; i++){
            if (lista[i][0] != '\0'){
                puts(lista[i]);
            }
        }
    }
}

void inserirItem(tpLista lista, char *item){
    int i;
    removerEnter(item);
    puts("");
    for(i = 0; i < MaxItens && strlen(lista[i]) != 0; i++);
    if(!(i<MaxItens)){
        printf("Lista Cheia.");
    } else {
        strcpy(lista[i], item);
        printf("\nItem inserido na posicao %d.\n", i + 1);
    }
}


void contarItens(tpLista lista){
    int i;
    for(i = 0; i < MaxItens && strlen(lista[i]) != 0; i++);
    puts("");
    printf("%d Itens na lista \n", i);
}

void retirarItem(tpLista lista, char *item){
    int i, found = 0;
    removerEnter(item);
    for (i=0; i<MaxItens; i++) {
        if (!found){
            found = strcmp(item, lista[i]) == 0;
        }
        if (found && i < MaxItens -1){
            strcpy(lista[i], lista[i+1]);
        }
    }
    if (found){
        lista[MaxItens-1][0] = '\0';
        puts("Item removido");
    } else {
        puts("Item nao encontrado");
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
    puts("4. Contar itens");
    puts("");
    scanf("%d%*c", &resp);
    switch(resp){
        case 0:
            *exit = 1;
            break;
        case 1:
            exibirLista(lista);
            break;
        case 2:
            puts("");
            puts("Digite o item a ser inserido:");
            puts("");
            fgets(item, MaxItens, stdin);
            inserirItem(lista, item);
            break;
        case 3:
            puts("");
            puts("Digite o item a ser removido:");
            puts("");
            fgets(item, MaxItens, stdin);
            retirarItem(lista, item);
            break;
        case 4:
            contarItens(lista);
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