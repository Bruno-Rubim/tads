#include <stdio.h>

int main () {
	float total, comiss;
	printf("Insira o valor do total de vendas: ");
	scanf("%f", &total);
	comiss = total/10;
	printf("Comissao: ""%f", comiss);
	return 0;
}
