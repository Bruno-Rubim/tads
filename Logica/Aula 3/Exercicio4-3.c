#include <stdio.h>
#include <math.h>

int main() {
	float num, result;
	
	printf("Digite um numero real\n");
	scanf("%f", &num);
	if (num > 0) {
		result = sqrt(num);
		printf("%0.f", result);
	} else {
		result = pow(num, 3);
		printf("%0.f", result);
	}
	
	return 0;
}
