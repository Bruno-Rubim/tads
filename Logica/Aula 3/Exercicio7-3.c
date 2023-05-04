#include <stdio.h>
#include <math.h>

int main() {
	float lado1, lado2, lado3;
	
	printf("Digite os 3 lados do triangulo\n");
	scanf("%f", &lado1);
	scanf("%f", &lado2);
	scanf("%f", &lado3);
	if (lado1 == lado2) {
		if (lado2 == lado3) {
			printf("Equilatero\n");
		} else {
			printf("Isosceles\n");
		}
	} else 	if (lado2 == lado3) {
		printf("Isosceles\n");
	} else 	if (lado1 == lado3) {
		printf("Isosceles\n");
	} else {
		printf("Escaleno\n");
	}
				
	return 0;
}
