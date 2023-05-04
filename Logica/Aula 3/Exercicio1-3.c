#include <stdio.h>

int main() {
	int num;
	
	printf("Digite um numero natural \n");
	scanf("%d", &num);
	if (num < 0) {
		printf("Numero negativo");
	} else if (num > 0) {
		printf("Numero positivo");
	} else {
		printf("Numero nulo");
	}
	
	return 0;
}
