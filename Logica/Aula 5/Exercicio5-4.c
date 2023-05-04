#include <stdio.h>
#include <ctype.h>

int main (){
	int pag;
	float valor, valorDes;
	printf("Insira o valor da compra: ");
	scanf("%f", &valor);
	printf("\n1.Pagamento à vista - 15%% de desconto sobre o valor total da compra.\n2.Pagamento com cheque pré-datado para 30 dias - 10%% de desconto sobre o valor total da compra.\n3.Pagamento parcelado em 3 vezes - 5%% de desconto sobre o valor total da compra.\n4.Pagamento parcelado em 6 vezes - não tem desconto.\n5.Pagamento parcelado em 12 vezes - 8%% de acréscimo sobre o valor total da compra.\n\nInsira o numero do tipo de pagamento: ");
	scanf("%d", &pag);
	switch(pag){
		case 1:
		valorDes = valor*0.85;
		printf("\nValor total R$: %.2f\nValor à ser pago R$: %.2f\nValor do desconto %.2f", valor, valorDes, valor - valorDes);
		break;
		case 2:
		valorDes = valor*0.9;
		printf("\nValor total R$: %.2f\nValor à ser pago R$: %.2f\nValor do desconto %.2f", valor, valorDes, valor - valorDes);
		break;
		case 3:
		valorDes = valor*0.95;
		printf("\nValor total R$: %.2f\nValor à ser pago R$: %.2f\nEm 3 parcelas de R$: %.2f\nValor do desconto %.2f", valor, valorDes, valorDes/3, valor - valorDes);
		break;
		case 4:
		valorDes = 0;
		printf("\nValor total R$: %.2f\nValor à ser pago R$: %.2f\nEm 6 parcelas de R$: %.2f\nValor do desconto %.2f", valor, valorDes, valorDes/6, valor - valorDes);
		break;
		case 5:
		valorDes = valor*1.08;
		printf("\nValor total R$: %.2f\nValor à ser pago R$: %.2f\nEm 12 parcelas de R$: %.2f\nValor do acréscimo %.2f", valor, valorDes, valorDes/12, (valor - valorDes)*-1);
		break;
		default:
		printf("\nErro.");
		break;
	}
	
	return 0;
}
