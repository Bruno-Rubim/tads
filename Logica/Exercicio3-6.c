#include <stdio.h>
#include <ctype.h>

int main(){
	int i = 1, idade, nova = 200, velha = 0, mediaMulheres, mulheres, homens;
	char resp;
	
    while (i < 11){
        printf("\n Sexo da %d° pessoa: ", i);
        scanf(" %c", &resp);
        resp = tolower(resp);
        printf("\n Idade da %d° pessoa: ", i);
        scanf(" %d", &idade);
        if (resp == 'f') {
			mediaMulheres += idade;
			mulheres ++;
		} else {
			homens ++;
		}
		if (idade < nova){
			nova = idade;
		}
		if (idade > velha){
			velha = idade;
		}
        i++;
    }
    printf("\n Maior idade: %d\n Menor idade: %d\n Média de idade das mulheres: %d\n Número de homens %d", velha, nova, mediaMulheres/mulheres, homens);

	return 0;
}
