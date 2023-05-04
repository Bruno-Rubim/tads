#include <stdio.h>
#include <ctype.h>
#include <stdio_ext.h>

int main(){
	
	char resp;
	
	printf ("É mamífero? [S][N] ");
	__fpurge(stdin);
	scanf ("%c", &resp);
	resp = tolower(resp);
	if (resp == 's') {
		printf ("É quadrupede? [S][N] ");
		__fpurge(stdin);
		scanf ("%c", &resp);
		resp = tolower(resp);
		if (resp == 's') {
			printf ("É carnívoro? [S][N] ");
			__fpurge(stdin);
			scanf ("%c", &resp);
			resp = tolower(resp);
			if (resp == 's') {
				printf ("Seu animal é o leão!");
			} else {
				printf ("É de herbívoro? [S][N] ");
				__fpurge(stdin);
				scanf ("%c", &resp);
				resp = tolower(resp);
				if (resp == 's') {
					printf ("Seu animal é o cavalo!");
				}
			}
		} else {
			printf ("É bípede? [S][N] ");
			__fpurge(stdin);
			scanf ("%c", &resp);
			resp = tolower(resp);
			if (resp == 's') {
				printf ("É onívoro? [S][N] ");
				__fpurge(stdin);
				scanf ("%c", &resp);
				resp = tolower(resp);
				if (resp == 's') {
					printf ("Seu animal é o homem!");
				} else {
					printf ("É frutífero? [S][N] ");
					__fpurge(stdin);
					scanf ("%c", &resp);
					resp = tolower(resp);
					if (resp == 's') {
						printf ("Seu animal é o macaco!");
					}
				}
			} else {
				printf ("É voador? [S][N] ");
				__fpurge(stdin);
				scanf ("%c", &resp);
				resp = tolower(resp);
				if (resp == 's') {
					printf ("Seu animal é o morcego!");
				} else {
					printf ("É aquático? [S][N] ");
					__fpurge(stdin);
					scanf ("%c", &resp);
					resp = tolower(resp);
					if (resp == 's') {
						printf ("Seu animal é a baleia!");
					}
				}
			}
		}
	} else if (resp == 'n') {
		printf ("É ave? [S][N] ");
		__fpurge(stdin);
		scanf ("%c", &resp);
		resp = tolower(resp);
		if (resp == 's') {
			printf ("É voador? [S][N] ");
			__fpurge(stdin);
			scanf ("%c", &resp);
			resp = tolower(resp);
			if (resp == 'n') {
				printf ("É tropical? [S][N] ");
				__fpurge(stdin);
				scanf ("%c", &resp);
				resp = tolower(resp);
				if (resp == 's') {
					printf ("Seu animal é o avestruz!");
				} else {
					printf ("É polar? [S][N] ");
					__fpurge(stdin);
					scanf ("%c", &resp);
					resp = tolower(resp);
					if (resp == 's') {
						printf ("Seu animal é o pinguim!");
					}
				}
			} else {
				printf ("É nadador? [S][N] ");
				__fpurge(stdin);
				scanf ("%c", &resp);
				resp = tolower(resp);
				if (resp == 's') {
					printf ("Seu animal é o pato!");
				} else {
					printf ("É de rapina? [S][N] ");
					__fpurge(stdin);
					scanf ("%c", &resp);
					resp = tolower(resp);
					if (resp == 's') {
						printf ("Seu animal é a águia!");
					}
				}
			}
		} else {
			printf ("É réptil? [S][N] ");
			__fpurge(stdin);
			scanf ("%c", &resp);
			resp = tolower(resp);
			if (resp == 's') {
				printf ("Tem casco? [S][N] ");
				__fpurge(stdin);
				scanf ("%c", &resp);
				resp = tolower(resp);
				if (resp == 's') {
					printf ("Seu animal é a tartaruga!");
				} else {
					printf ("É carnívoro? [S][N] ");
					__fpurge(stdin);
					scanf ("%c", &resp);
					resp = tolower(resp);
					if (resp == 's') {
						printf ("Seu animal é o crocodilo!");
					} else {
						printf ("É sem patas? [S][N] ");
						__fpurge(stdin);
						scanf ("%c", &resp);
						resp = tolower(resp);
						if (resp == 's') {
							printf ("Seu animal é a cobra!");
						}
					}
				}
			} 
		}
	}
	return 0;
}
