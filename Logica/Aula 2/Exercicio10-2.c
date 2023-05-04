#include <stdio.h>
#include <math.h>
int main(){
	int v1, v2;
	printf("Insira 2 numeros inteiros (2 restantes): ");
	scanf("%d", &v1);
	printf("Insira 2 numeros inteiros (1 restante): ");
	scanf("%d", &v2);
	v2 = v1 + v2;
	v1 = v2 - v1;
	v2 = v2 - v1;
	printf("v1 = ""%d"" v2 = ""%d", v1, v2);
	return 0;
}
