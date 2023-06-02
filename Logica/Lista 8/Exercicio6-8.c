#include <stdio.h>

int main(){
    int v[20], menor = 40000, menorPos;

    for (int i = 0; i < 20;){
        printf("Insira um número\n");
        scanf("%d", &v[i]);
        if (v[i]>=0){
            i++;
        }
    }
    for (int i = 0; i < 20; ++i){
        if (v[i]<menor){
            menor=v[i];
            menorPos=i;
        }
    }
    printf("Menor valor: v[%d] = %d\n", menorPos, menor);
    return 0;
}