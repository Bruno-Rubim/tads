#include <stdio.h>
#include <math.h>
int main(){
	float num, result;
	printf("Insira um numero real: ");
	scanf("%f", &num);
	result = sqrt(num);
	printf("%.0f", result);
	return 0;
}
