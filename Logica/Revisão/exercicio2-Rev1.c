#include <stdio.h>

int main (){
	int a, ant, sucs;
	printf("Insira um numero inteiro: ");
	scanf("%d", &a);
	ant = a - 1;
	sucs = a + 1;
	printf("Antecessor: " "%d\n", ant);
	printf("Sucessor: " "%d\n", sucs);
	return 0;
}

