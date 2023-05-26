#include <stdio.h>
#include <math.h>

int main(){
	int i = 0, prd = -2;
	
    while (i < 10){
        printf("\n%d", prd);
        prd *= -2;
        i++;
    }
    

	return 0;
}