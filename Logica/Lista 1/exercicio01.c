#include <stdio.h>

int main (){
	int a, b, sum, sub, mult;
	float div;
	printf("Insira um numero inteiro: ");
	scanf("%d", &a);
	printf("Insira mais um numero inteiro: ");
	scanf("%d", &b);
	sum = a + b;
	sub = a - b;
	mult = a * b;
	div = a / b;
	printf("Adicao:" "%d\n", sum);
	printf("Subtracao:" "%d\n", sub);
	printf("Multiplicacao:" "%d\n", mult);
	printf("Divisao:" "%f\n", div);
	return 0;
}
