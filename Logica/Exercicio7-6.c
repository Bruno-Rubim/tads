#include <stdio.h>
#include <ctype.h>

int main(){
	float total, atl, cor, foz, tor;
	char resp;
	do {
		printf("Escolha o time pela inicial ou S para sair: ");
		scanf(" %c", &resp);
		resp = tolower(resp);
		if (resp != 's') {
			printf("Entre a quantidade de torcedores: ");
			scanf("%f", &tor);
			if (resp == 'a'){
				atl += tor;
			} else if (resp == 'c'){
				cor += tor;
			} else if (resp == 'f'){
				foz += tor;
			}
			total += tor;
		}
	} while (resp != 's');
	printf("\nAtletico %.1f%%\nCoritiba %.1f%%\nFoz %.1f%%\nTotal %.0f", (atl*100)/total, (cor*100)/total, (foz*100)/total, total );
	return 0;
}
