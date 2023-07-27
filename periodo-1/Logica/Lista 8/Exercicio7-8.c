#include <stdio.h>

int main(){
    int v[20], menor = 40000, menorPos, maior = -1, maiorPos;

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
        if (v[i]>maior){
            maior=v[i];
            maiorPos=i;
        }
    }
    printf("Menor valor: v[%d] = %d\n", menorPos, menor);
    printf("Maior valor: v[%d] = %d\n", maiorPos, maior);
    return 0;
}