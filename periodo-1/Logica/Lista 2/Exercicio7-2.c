#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, d, mh;
	printf("Insira 4 numeros reais (4 restantes): ");
	scanf("%f", &a);
	printf("Insira 4 numeros reais (3 restantes): ");
	scanf("%f", &b);
	printf("Insira 4 numeros reais (2 restantes): ");
	scanf("%f", &c);
	printf("Insira 4 numeros reais (1 restantes): ");
	scanf("%f", &d);
	mh = 4/((1/a)+(1/b)+(1/c)+(1/d));
	printf("%.2f", mh);
	return 0;
}
