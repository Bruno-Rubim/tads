#include <stdio.h>

int main(){
	int valor, max = -100000, min = 1000000000, med, j = 0;

	for (int i = 1; i <= 30; i++){
		printf("Insira um número: ");
		scanf("%d", &valor);
		if (valor > max){
			max = valor;
		}
		if (valor < min){
			min = valor;
		}
		if (valor > 5.9) {
			med += valor;
			j++;
		}
	}
	printf("\nMaximo: %d", max);
	printf("\nMinimo: %d", min);
	printf("\nMédia: %d", med/j);

	return 0;
}
