#include <stdio.h>

int main (){
	float total, totdesc, totacr;
	printf("Insira o valor da compra: ");
	scanf("%f", &total);
	totdesc = total * 0.9;
	totacr = total * 1.05;
	printf("Total com desconto: " "%.2f\n", totdesc);
	printf("Total com acrescimo: " "%.2f\n", totacr);
	return 0;
}
