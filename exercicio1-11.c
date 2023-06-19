#include <stdio.h>
#include <ctype.h>
#define TAM 100
#define TAM_NOME 12

#if 0
	#define lerStr(s) fgets(s, sizeof(s), stdin)
#else
	#define lerStr(s) gets(s)
#endif

struct TPessoa {
	int codigo;
	char nome[TAM_NOME];
	int idade;
	char genero;
	float altura;
	float peso;
};

int main () {
	
	struct TPessoa cadastro[TAM];
	int n, respInt;
	char respChar;

	printf("insira o valor de n: ");
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		printf("insira o codigo: ");
		scanf("%d%*c", &cadastro[i].codigo);
		printf("insira o nome: ");
		lerStr(cadastro[i].nome);
		printf("insira o genero: ");
		scanf("%c", &cadastro[i].genero);
		printf("insira a idade: ");
		scanf("%d", &cadastro[i].idade);
		printf("insira a altura: ");
		scanf("%f", &cadastro[i].altura);
		printf("insira o peso: ");
		scanf("%f", &cadastro[i].peso);
	}
	printf("\nCadastro concluido\n");
	
	for (;;) {
		printf("Menu: \n");
		printf("[B] Alterar os dados de uma pessoa\n");
		printf("[C] Excluir uma pessoa\n");
		printf("[D] Mostrar os dados de apenas uma pessoa\n");
		printf("[E] Mostrar os dados de todos os cadastros\n");
		printf("Insira seu comando: \n");
		scanf(" %c", &respChar);
		respChar = toupper(respChar);
		int i;
		switch (respChar){
		case 'B': 
			printf("Insira o codigo da pessoa a ser alterada: ");
			scanf(" %d", &respInt);
			i = 0;
			while (i < n && cadastro[i].codigo != respInt) {
				i++;
			}
			if (i >= n) {
				puts("Codigo nao encontrado");
			} else {
				int done = 0;
				while (!done) {
					printf("1. Codigo: %d\n", cadastro[i].codigo);
					printf("2. Nome: %s\n", cadastro[i].nome);
					printf("3. Idade: %d\n", cadastro[i].idade);
					printf("4. Genero: %c\n", cadastro[i].genero);
					printf("5. Altura: %g\n", cadastro[i].altura);
					printf("6. Peso: %g\n", cadastro[i].peso);
					printf("Insira a informacao a ser alterada ou 0 para sair: ");
					scanf("%d%*c", &respInt);
					switch (respInt) {
					case 1:
						printf("Insira o novo codigo: ");
						scanf("%d", &cadastro[i].codigo);
						break;
					case 2:
						printf("Insira o novo nome: ");
						lerStr(cadastro[i].nome);
						break;
					case 3:
						printf("Insira a nova idade: ");
						scanf("%d", &cadastro[i].idade);
						break;
					case 4:
						printf("Insira o novo genero: ");
						scanf(" %c", &cadastro[i].genero);
						break;
					case 5:
						printf("Insira a nova altura: ");
						scanf("%f", &cadastro[i].altura);
						break;
					case 6:
						printf("Insira o novo peso: ");
						scanf("%f", &cadastro[i].peso);
						break;
					default:
						done = 1;
						break;
					}
				}
			}
			break;
		case 'C':
			printf("Insira o codigo da pessoa a ser excluida: ");
			scanf(" %d", &respInt);
			int i = 0;
			while (i < n && cadastro[i].codigo != respInt) {
				i++;
			}
			if (i >= n) {
				puts("Codigo nao encontrado");
			} else {
				struct TPessoa p = {};
				cadastro[i] = p;
			}
			
			break;
		case 'D':
			printf("Insira o codigo da pessoa a ser consultada: ");
			scanf(" %d", &respInt);
			int i = 0;
			while (i < n && cadastro[i].codigo != respInt) {
				i++;
			}
			if (i >= n) {
				puts("Codigo nao encontrado");
			} else {
				printf("Codigo: %d\n", cadastro[i].codigo);
				printf("Nome: %s\n", cadastro[i].nome);
				printf("Idade: %d\n", cadastro[i].idade);
				printf("Genero: %c\n", cadastro[i].genero);
				printf("Altura: %g\n", cadastro[i].altura);
				printf("Peso: %g\n", cadastro[i].peso);		
			}
			break;
		case 'E':
			break;
		default:
			break;
		}
		printf("Ctrl+C");
	}
	return 0;
}
