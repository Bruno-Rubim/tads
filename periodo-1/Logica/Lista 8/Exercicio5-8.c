#include <stdio.h>

int main(){
	int v[20], maior = -1, maiorPos;

    for (int i = 0; i < 20;){
        printf("Insira um número\n");
        scanf("%d", &v[i]);
        if (v[i]>=0){
            i++;
        }
    }
    for (int i = 0; i < 20; ++i){
        if (v[i]>maior){
            maior=v[i];
            maiorPos=i;
        }
    }
    printf("Maior valor: v[%d] = %d\n", maiorPos, maior);
	return 0;
}