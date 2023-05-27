#include <stdio.h>

int main(){
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, b[5];

    for (int i = 0; i < 10; i++){
        if (a[i]%2 == 0){
            b[i] = a[i]*5;
        } else {
            b[i] = a[i]+5;
        }
        
        printf("\na[%d] =  %d  b[%d] =  %d", i, a[i], i, b[i]);
    }
    

	return 0;
}