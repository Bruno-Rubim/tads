#include <stdio.h>

int main () {
	float cot, dolar, real;
	printf("Insira o valor em dolares: ");
	scanf("%f", &dolar);
	printf("Insira o valor da cotacao: ");
	scanf("%f", &cot);
	real = dolar * cot;
	printf("R$:""%f"" Reais\n", real);
	return 0;
}
