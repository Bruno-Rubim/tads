#include <stdio.h>
#include <ctype.h>

int main (){
	int resp, ano;
	printf("Insira o numero do mes: ");
	scanf("%d", &resp);
	
	switch(resp){
		case 2:
		printf("\nQual o ano? ");
		scanf("%d", &ano);
		if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
			printf("\nEsse mês dura 29 dias");
		} else {
			printf("\nEsse mês dura 28 dias");
		}
		break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("\nEsse mês dura 31 dias");
		break;
		case 4:
		case 6:
		case 9:
		case 11:
		printf("\nEsse mês dura 30 dias");
		break;
		default:
		printf("\nErro.");
		break;
	}
	
	return 0;
}
