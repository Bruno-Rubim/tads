#include <stdio.h>
#include <math.h>

int main(){
	int i, q, c;
	
	i = 1;
	
	while (i <= 10) {
		q = pow(i, 2);
		c = pow(i, 3);
		printf("\n%d %d %d", i, q, c);
		i ++;
	}
	return 0;
}
