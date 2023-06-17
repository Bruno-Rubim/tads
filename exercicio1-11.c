#include <stdio.h>
#include <stdio_ext.h>
#include <ctype.h>
#define TAM 100

int main () {

    struct TPessoa
    {
        int codigo, idade;
        char nome[12], genero;
        float altura, peso;
    };

    struct TPessoa cadastro[TAM];
    int n, respInt;
    char respChar;

    printf("insira o valor de n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("insira o codigo: ");
        scanf ("%d", &cadastro[i].codigo);
        printf("insira o nome: ");
        __fpurge(stdin);
        fgets(cadastro[i].nome, 12, stdin);
        printf("insira o genero: ");
        __fpurge(stdin);
        scanf("%c", &cadastro[i].genero);
        printf("insira a idade: ");
        scanf ("%d", &cadastro[i].idade);
        printf("insira a altura: ");
        scanf ("%f", &cadastro[i].altura);
        printf("insira o peso: ");
        scanf ("%f", &cadastro[i].peso);
    }
	printf("\nCadastro concluido\n");
    
    while (TAM) {
		printf("Menu: \n");
		printf("[A] Cadastrar uma pessoa\n");
		printf("[B] Alterar os dados de uma pessoa\n");
		printf("[C] Excluir uma pessoa\n");
		printf("[D] Mostrar os dados de apenas uma pessoa\n");
		printf("[E] Mostrar os dados de todos os cadastros\n");
		printf("Insira seu comando: \n");
		scanf(" %c", &respChar);
		respChar = toupper(respChar);
		
		switch (respChar){
			case 'A':
				break;
			case 'B':
				printf("Insira o codigo da pessoa a ser alterada: ");
				scanf(" %d", &respInt);
				
				break;
			case 'C':
				break;
			case 'D':
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
