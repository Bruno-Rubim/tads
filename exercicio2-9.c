#include <stdio.h>

int main(){
    int tam = 3, linha;
    float m[tam][tam], resp;

    for (int i = 0; i < tam; ++i){
        for (int j = 0; j < tam; ++j){
            printf("manda um numero: ");
            scanf("%f", &resp);
            m[i][j] = resp;
        }
    }
    printf("manda um numero pra linha: ");
    scanf("%d", &linha);
    for (int j = 0; j < tam; ++j){
        printf("%.1f ", m[linha][j]);
	}
    return 0;
}