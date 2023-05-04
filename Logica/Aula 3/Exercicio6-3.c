#include <stdio.h>
#include <math.h>

int main() {
	float num;
	
	printf("Digite o salario\n");
	scanf("%f", &num);
	if (num > 0 && num <= 990) {
		printf("Aumento: 20%%");
	} else if (num <= 1480) {
		printf("Aumento: 10%%");
	} else if (num <= 2000) {
		printf("Aumento: 5%%");
	} else
		printf("---");
			
	return 0;
}
