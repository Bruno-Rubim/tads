#include <stdio.h>

int main(){
	int a[] = {0, 1, 2, 3, 4}, b[5];

    for (int i = 0; i < 5; i++){
        b[i] = a[i]*2;
        printf("\na[%d] =  %d  b[%d] =  %d", i, a[i], i, b[i]);
    }
    

	return 0;
}