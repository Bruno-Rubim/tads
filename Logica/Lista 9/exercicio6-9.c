#include <stdio.h>

int main(){
	
	int n;
	
	printf("Insira o numero de alunos: ");
	scanf("%d", &n);
	
	float notas[4][n], media, soma = 0;
	
	for(int i = 0; i<n; i++){
		printf("Aluno %d:\n", i+1);
		for(int j = 0; j<4; j++){
			printf("nota %d: ", j+1);
			scanf("%f", &notas[i][j]);
		}
	}

	printf("Aluno\tNota1\tNota2\tNota3\tNota4\tMedia\n");
	
	for(int i = 0; i<n; i++){
		media = (notas[i][0]+notas[i][1]+notas[i][2]+notas[i][3])/4;
		soma += media;
		printf("%d\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\n", i, notas[i][0], notas[i][1], notas[i][2], notas[i][3], media);
	}
	printf("Media Gearal...........................:%.1f", soma / n);

	return 0;
}
