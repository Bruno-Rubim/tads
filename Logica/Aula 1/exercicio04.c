#include <stdio.h>

int main () {
	float dis, comb, cons;
	printf("Insira a distancia precorrida: ");
	scanf("%f", &dis);
	printf("Insira o combustivel gasto: ");
	scanf("%f", &comb);
	cons = dis/comb;
	printf("Consumo: ""%f""km/l", cons);
	return 0;
}

