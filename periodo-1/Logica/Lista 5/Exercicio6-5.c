#include <stdio.h>
#include <math.h>

int main(){
	int i, j, sum, n;
	
	i = 0;
	j = 0;
	sum = 0;
	
	while (i < 15) {
		printf("\nDigite o próximo número");
		scanf ("%d", &n);
		if (n > 10) {
			sum += n;
			j++;
		} 
		i++;
	}
	
	sum = sum/j;
	
	printf("\nMédia dos números maiores que 10: %d", sum);

	return 0;
}
