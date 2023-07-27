#include <stdio.h>

int main (){
	float base, alt, area;
	printf("Insira o valor da base: ");
	scanf("%f", &base);
	printf("Insira o valor da altura: ");
	scanf("%f", &alt);
	area = alt * base;
	printf("Area: " "%.2f\n", area);
	return 0;
}

