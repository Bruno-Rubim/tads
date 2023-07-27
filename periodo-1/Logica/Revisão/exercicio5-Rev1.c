#include <stdio.h>

int main (){
	float pago, custo, troco;
	printf("Insira o valor do pagamento: ");
	scanf("%f", &pago);
	printf("Insira o valor total dos produtos: ");
	scanf("%f", &custo);
	troco = pago - custo;
		printf("Troco: " "%.2f\n", troco);
	return 0;
}
