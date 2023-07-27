#include <stdio.h>
#include <math.h>
int main(){
	float a, b, c, d, mq;
	printf("Insira 4 numeros reais (4 restantes): ");
	scanf("%f", &a);
	printf("Insira 4 numeros reais (3 restantes): ");
	scanf("%f", &b);
	printf("Insira 4 numeros reais (2 restantes): ");
	scanf("%f", &c);
	printf("Insira 4 numeros reais (1 restantes): ");
	scanf("%f", &d);
	mq = sqrt(((a*a)+(b*b)+(c*c)+(d*d))/4);
	printf("%.2f", mq);
	return 0;
}
