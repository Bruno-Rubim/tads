#include <stdio.h>

int main (){
	float pago, custo, troco;
	printf("Insira o valor do pagamento: ");
	scanf("%f", &pago);
	printf("Insira o valor total dos produtos: ");
	scanf("%f", &custo);
	troco = pago - custo;
	if (troco > 0){
		printf("Troco: " "%.2f\n", troco);
	} else {
		troco = troco * -1;
		printf("Pagamento insuficiente, dinheiro nescessario: " "%.2f\n",  troco);
	}
	return 0;
}
