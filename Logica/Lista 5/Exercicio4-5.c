#include <stdio.h>

int main(){
	int i, sum, n;
	
	printf("\nDiga o valor de n ");
	scanf("%d", &n);
	
	i = 1;
	sum = 0;
	
	while (i <= n) {
		sum = sum + i;
		i += 2;
	}

	printf("\nSoma dos ímpares: %d", sum);

	i = 0;
	sum = 0;

	while (i <= n) {
		sum = sum + i;
		i += 2;
	}

	printf("\nSoma dos pares: %d", sum);

	return 0;
}
