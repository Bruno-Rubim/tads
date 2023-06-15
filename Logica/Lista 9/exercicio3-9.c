#include <stdio.h>

int main(){
	
	int m, n;
	
	printf("valor de m: ");
	scanf("%d", &m);
	printf("valor de n: ");
	scanf("%d", &n);
	
	int a[m][n], b[m][n], c[m][n];
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			printf("valor de a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			printf("valor de b[%d][%d]: ", i, j);
			scanf("%d", &b[i][j]);
		}
	}

	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
