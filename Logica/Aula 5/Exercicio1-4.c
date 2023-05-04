#include <stdio.h>
#include <ctype.h>

int main (){
	char resp;
	
	printf("Insira a categoria da carteira de motorista: ");
	scanf("%c", &resp);
	resp = tolower(resp);
	switch(resp){
		case 'a':
		printf("\nVeiculo permitido: Moto");
		break;
		case 'b':
		printf("\nVeiculo permitido: Carro");
		break;
		case 'c':
		printf("\nVeiculo permitido: Caminhão");
		break;
		case 'd':
		printf("\nVeiculo permitido: Ônibus");
		break;
		case 'e':
		printf("\nVeiculo permitido: Carreta");
		break;
		default:
		printf("\nCategoria não permitida.");
		break;
	}
	
	return 0;
}
