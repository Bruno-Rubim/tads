#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main() {
	char sex;
	float wght, hght, imc;
	
	printf("Digite o sexo M/F\n");
	scanf("%c", &sex);
	sex = tolower(sex);
	printf("Digite o peso em kg\n");
	scanf("%f", &wght);
	printf("Digite a altura em metros\n");
	scanf("%f", &hght);
	imc = wght/(hght*hght);
	if (sex == 'M') {
		if (imc < 20) {
			printf("Abaixo do peso\n");
		} else if (imc < 25) {
			printf("Normal\n");
		} else if (imc < 30) {
			printf("Obesidade leve\n");
		} else if (imc < 40) {
			printf("Obesidade moderada\n");
		} else {
			printf("Obesidade mórbida\n");
		}
	} else {
		if (imc < 19) {
			printf("Abaixo do peso\n");
		} else if (imc < 24) {
			printf("Normal\n");
		} else if (imc < 29) {
			printf("Obesidade leve\n");
		} else if (imc < 39) {
			printf("Obesidade moderada\n");
		} else {
			printf("Obesidade mórbida\n");
		}
	}
				
	return 0;
}
