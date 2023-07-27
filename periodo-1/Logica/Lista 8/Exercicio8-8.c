#include <stdio.h>

int main(){
    int vet[10], inv[10];

    for (int i = 0; i < 10; i++){
        printf("Insira um número\n");
        scanf("%d", &vet[i]);
        inv[9-i] = vet[i];
    }
    for (int i = 0; i < 10; ++i){
        printf("%d ", vet[i]);
    }
    printf("\n");
    for (int i = 0; i < 10; ++i){
        printf("%d ", inv[i]);
    }
    return 0;
}