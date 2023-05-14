#include <stdio.h>
#include <math.h>
int main(){
	int num, qdr, cub;
	printf("Insira um numero inteiro: ");
	scanf("%d", &num);
	qdr = pow(num, 2);
	cub = pow(num, 3);
	printf("numero\tquadrado cubo\n""%d\t""%d\t"" %d", num, qdr, cub);
	return 0;
}
