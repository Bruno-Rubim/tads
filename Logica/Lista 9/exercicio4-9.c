#include <stdio.h>

int main(){
	
	int m, n;
	
	printf("valor de m: ");
	scanf("%d", &m);
	printf("valor de n: ");
	scanf("%d", &n);
	
	int a[m][n], t[n][m];
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			printf("valor de a[%d][%d]: ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	for(int i = 0; i<m; i++){
		printf("\n");
		for(int j = 0; j<n; j++){
            t[i][j] = a[j][i];
			printf("%d\t", t[i][j]);
		}
	}
	
	return 0;
}
