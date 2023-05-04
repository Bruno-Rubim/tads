#include <stdio.h>
#include <ctype.h>

int main (){
	int resp;
	printf("Insira o dia da semana: ");
	scanf("%d", &resp);

	switch(resp){
		case 1:
		printf("\nCorresponde à Doming");
		break;
		case 2:
		printf("\nCorresponde à Segunda-feira");
		break;
		case 3:
		printf("\nCorresponde à Terça-feira");
		break;
		case 4:
		printf("\nCorresponde à Quarta-feira");
		break;
		case 5:
		printf("\nCorresponde à Quinta-feira");
		break;
		case 6:
		printf("\nCorresponde à Sexta-feira");
		break;
		case 7:
		printf("\nCorresponde à Sábado");
		break;
		default:
		printf("\nErro.");
		break;
	}
	
	return 0;
}
