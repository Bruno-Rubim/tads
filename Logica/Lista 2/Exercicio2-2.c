#include <stdio.h>

int main(){
	float compra, result;
	printf("Insira o valor da compra: ");
	scanf("%f", &compra);
	result = compra/5;
	printf("5 x ""%.2f"" = ""%.2f", result, compra);
	return 0;
}
