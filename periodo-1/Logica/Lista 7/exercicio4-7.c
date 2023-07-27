#include <stdio.h>

int main(){
    float a, num = 1;
	for (float i = 1; i <= 25; i++){
    	printf("\n%f += %d / %d", a, num, i);
        a += num/i;
        num += 2;
	}
	printf("\n%f", a);
	return 0;
}
