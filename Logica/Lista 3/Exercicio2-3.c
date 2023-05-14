#include <stdio.h>
#include <math.h>

int main() {
	int num, mult;
	
	printf("Digite um numero natural \n");
	scanf("%d", &num);
	mult = num % 3;
	if (mult == 0) {
		printf("Multiplo de 3");
	} else {
		printf("Nao e multiplo de 3");
	}
	
	return 0;
}
