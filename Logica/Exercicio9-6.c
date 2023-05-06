#include <stdio.h>
#include <ctype.h>

int main(){
	int i, idade, menorIdade = 200, homemX, mulherX;
	char sexo, olhos, cabelo;
	do {
        printf("Sexo: ");
        scanf(" %c", &sexo);
        printf("Idade: ");
        scanf(" %d", &idade);
		printf("Olhos: ");
		scanf(" %c", &olhos);
		printf("cabelo: ");
		scanf(" %c", &cabelo);

        if (sexo == 'f') {
			if (olhos == 'p') {
				if (cabelo == 'p') {
					mulherX++;
				}
			}
		} else {
			if (idade > 16 && idade < 24){
				if (olhos == 'a') {
					if (cabelo == 'c') {
					homemX++;
					}
				}	
				}
			}
		if (menorIdade > idade) {
			menorIdade = idade;
		}
		i++;
    } while (i < 5);
		
    printf("\nMenor idade: %d\nNúmero de mulheres com caracteristicas extremamente específicas: %d\nNumeros de mulheres com caracteristicas extremamente específicas: %d", menorIdade, mulherX, homemX);

	return 0;
}
