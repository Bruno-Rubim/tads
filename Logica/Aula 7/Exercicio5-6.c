#include <stdio.h>

int main(){
	int i;
	do {
		printf("\nEntre um número entre 0 e 10: ");
		scanf("%d", &i);
		printf("%d", i);
	} while (i < 10 && i > 0);
	printf("\nNúmero fora do intervalo!");
	return 0;
}
