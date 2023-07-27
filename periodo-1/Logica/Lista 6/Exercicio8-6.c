#include <stdio.h>
#include <ctype.h>

int main(){
	int idade, peso, homemNovo = 200, mulherVelha, pesado, leve = 900, acabar;
	char resp;
	do {
        printf("Sexo: ");
        scanf(" %c", &resp);
        resp = tolower(resp);
        printf("Idade: ");
        scanf(" %d", &idade);
        printf("Peso: ");
        scanf(" %d", &peso);
        if (resp == 'f') {
			if (idade > mulherVelha){
				mulherVelha += idade;
			}
		} else {
			if (idade < homemNovo){
				homemNovo = idade;
			}
		}
		if (peso < leve){
			leve = peso;
		}
		if (peso > pesado){
			pesado = peso;
		}
		do{
			printf("Continuar? ");
			scanf(" %c", &resp);
			resp = tolower(resp);
			if (resp == 'n') {
				acabar = 1;
			} else if (resp != 's') {
				printf("ERRO: Resposta invalida!");
			}
		} while (acabar != 1 && resp != 's');
    } while (acabar != 1);
		
    printf("\n A mulher mais velha: %d\n O homem mais novo: %d\n A pessoa com maior peso: %d\n A pessoa com menor peso %d", mulherVelha, homemNovo, pesado, leve);

	return 0;
}
