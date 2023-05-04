#include <stdio.h>

int main () {
	float tam, vel, tempo;
	printf("Insira o tamanho do arquivo: ");
	scanf("%f", &tam);
	printf("Insira a velocidade da internet: ");
	scanf("%f", &vel);
	tempo = tam/vel;
	printf("Tempo de download: ""%f"" segundos", tempo);
	return 0;
}
