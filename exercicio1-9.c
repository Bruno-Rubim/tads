#include <stdio.h>

int main(){
    
    int tam = 8, m[tam][tam], resp, maior = -99999, maiorI, maiorJ, menor = 99999, menorI, menorJ;

    for (int i = 0; i < tam; ++i){
        for (int j = 0; j < tam; ++j){
            printf("manda um numero: ");
            scanf("%d", &resp);
            m[i][j] = resp;
            if (resp > maior){
                maior = resp;
                maiorI = i;
                maiorJ = j;
            }
            if (resp < menor){
                menor = resp;
                menorI = i;
                menorJ = j;
            }
        }
    }
    for (int i = 0; i < tam; ++i){
		for (int j = 0; j < tam; ++j){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
    printf("Maior: %d[%d][%d]", maior, maiorI, maiorJ);
    printf("Menor: %d[%d][%d]", menor, menorI, menorJ);

    return 0;
}