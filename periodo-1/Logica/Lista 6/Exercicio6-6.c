#include <stdio.h>
#include <ctype.h>

int main(){
	int i, acabar;
	float notaA, notaB;
	char resp;
	do {
		i++;
		printf("Aluno %d\nEntre a nota A: ", i);
		scanf("%f", &notaA);
		printf("Entre a nota B: ");
		scanf("%f", &notaB);
		printf("Média do aluno %d: %.1f", i, (notaA*2 + notaB)/2);
		do{
			printf("\nContinuar? ");
			scanf(" %c", &resp);
			resp = tolower(resp);
			if (resp == 'n') {
				acabar = 1;
			} else if (resp != 's') {
				printf("ERRO: Resposta invalida!");
			}
		} while (acabar != 1 && resp != 's');
	} while (acabar != 1);
	return 0;
}
