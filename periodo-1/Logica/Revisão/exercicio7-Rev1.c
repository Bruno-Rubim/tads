#include <stdio.h>

int main (){
	float cels, kelv, stupid;
	printf("Insira a temperatura em Celsius: ");
	scanf("%f", &cels);
	kelv = cels + 273;
	stupid = 1.8 * (kelv - 273) + 32;
	printf("%.1f" "C = ", cels);
	printf("%.1f" "K = ", kelv);
	printf("%.1f" "F", stupid);
	return 0;
}
