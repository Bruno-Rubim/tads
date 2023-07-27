#include <stdio.h>
#include <math.h>
int main(){
	float num, flr, cl;
	printf("Insira um numero real: ");
	scanf("%f", &num);
	flr = floor(num);
	cl = ceil(num);
	printf("%.2f ""%.0f "" %.0f", num, flr, cl);
	return 0;
}
