#include <stdio.h>
#include <ctype.h>

int main() {
	char est;
	
	printf("Digite a letra inicial do estado civil\n");
	scanf("%c", &est);
	est = tolower(est);
	if (est == 's') {
		printf("Solteiro");
	} else if (est == 'c') {
		printf("Casado");
	} else if (est == 'd') {
		printf("Divorciado");
	} else if (est == 'v') {
		printf("Viuvo");
	} else {
		printf("Estado civil invalido");
	}
	
	return 0;
}
