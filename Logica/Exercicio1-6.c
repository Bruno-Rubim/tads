#include <stdio.h>

int main(){
	int i, f;
	printf("\nEntre com o numero inicial da contagem: ");
	scanf("%d", &i);
	printf("\nEntre com o numero final da contagem: ");
	scanf("%d", &f);
    while (i <= f){
        printf("\n%d", i);
        i++;
    }
    

	return 0;
}
