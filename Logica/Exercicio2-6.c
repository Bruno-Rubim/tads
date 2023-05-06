#include <stdio.h>

int main(){
	int i = 0, termoAtual = 1, termoAnterior = 0;
    while (i < 15){
        printf("\n%d", termoAtual);
		termoAtual += termoAnterior;
		termoAnterior = termoAtual - termoAnterior ;
        i++;
    }
    

	return 0;
}
