#include <stdio.h>

int main () {
	float comp, larg, preco, custo;
	printf("Insira o comprimento da sala: ");
	scanf("%f", &comp);
	printf("Insira a largura da sala: ");
	scanf("%f", &larg);
	printf("Insira o preco por metro do carpete: ");
	scanf("%f", &preco);
	custo = comp*larg*preco;
	printf("Custo para forrar a sala: ""%f", custo);
	return 0;
}
