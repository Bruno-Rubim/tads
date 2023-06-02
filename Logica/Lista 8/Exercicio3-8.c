#include <stdio.h>

int main(){
	int n, alt = 1, prod = 0;

    printf("Defina o valor de n: ");
    scanf("%d", &n);

    int x[n], y[n];

    for (int i = 0; i < n; i++){
        switch (alt){
        case 1:
            printf("Insira o %d° valor do vetor x: ", i+1);
            scanf("%d", &x[i]);
            if (i == n-1){
                alt ++;
                i = -1;
            }            
            break;
        case 2:
            printf("Insira o %d° valor do vetor y: ", i+1);
            scanf("%d", &y[i]);
            if (i == n-1){
                alt ++;
                i = -1;
            }            
            break;
        case 3:
            prod += x[i]*y[i];
            break;
        default:
            break;
        }
    }
        printf("%d\n", prod);    

	return 0;
}