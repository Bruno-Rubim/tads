#include <stdio.h>

int main (){
	float num1, num2, num3, num4, med;
	printf("Insira 4 numeros reais (4 restantes): ");
	scanf("%f", &num1);
	printf("Insira 4 numeros reais (3 restantes): ");
	scanf("%f", &num2);
	printf("Insira 4 numeros reais (2 restantes): ");
	scanf("%f", &num3);
	printf("Insira 4 numeros reais (1 restantes): ");
	scanf("%f", &num4);
	med = (num1 + num2 + num3 + num4)/4;
	printf("Media: " "%f\n", med);
	return 0;
}

