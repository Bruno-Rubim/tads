#include <stdio.h>

int main (){
	int resp;
	printf("Insira o numero do mes: ");
	scanf("%d", &resp);
	
	switch(resp){
		case 1:
		case 2:
		case 3:
		printf("\nCorresponde ao primeiro trimestre");
		break;
		case 4:
		case 5:
		case 6:
		printf("\nCorresponde ao segundo trimestre");
		break;
		case 7:
		case 8:
		case 9:
		printf("\nCorresponde ao terceiro trimestre");
		break;
		case 10:
		case 11:
		case 12:
		printf("\nCorresponde ao quarto trimestre");
		break;
		default:
		printf("\nErro.");
		break;
	}
	
	return 0;
}
