#include <stdio.h>

int main(){
	int n;

	printf("Insira um número: ");
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++){
		printf("\n%d x %d = %d", n, i, i*n);
	}
	return 0;
}
