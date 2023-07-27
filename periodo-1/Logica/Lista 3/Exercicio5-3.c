#include <stdio.h>
#include <math.h>

int main() {
	float num;
	
	printf("Digite um numero inteiro\n");
	scanf("%f", &num);
	if (num > 10 && num < 100) {
		printf("Número está entre 10 e 100 – intervalo permitido");
	} else {
		printf("Número não está entre 10 e 100 – intervalo não permitido");
	}
	
	return 0;
}
