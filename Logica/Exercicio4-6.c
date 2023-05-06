#include <stdio.h>
#include <ctype.h>

int main(){
	int i, idade = 90, like, dis, rec;
	char resp;
	
    while (idade > 0){
        printf("\nIdade do espectador: ");
        scanf(" %d", &idade);
        if (idade > 0){
			printf("\nGostou do filme?: ");
			scanf(" %c", &resp);
			resp = tolower(resp);
			if (resp == 's'){
				like++;
			} else {
				dis ++;
			}
			printf("\nRecomendaria??: ");
			scanf(" %c", &resp);
			resp = tolower(resp);
			if (resp == 's'){
				rec++;
			}
			i++;
		}
    }
    printf("\n Total de espectadores: %d\n Votos de gostei: %d\n Votos de não gostei: %d\n Total de recomendações: %d", i, like, dis, rec);

	return 0;
}
	
