#include <stdio.h>
#include <math.h>
int main(){
	int num, dig1, dig2, dig3, dig4, sum;
	printf("Insira um valor inteiro positivo de quatro algarismos: ");
	scanf("%d", &num);
	dig1 = num%10;
	num = (num-dig1)/10;
	dig2 = num%10;
	num = (num-dig2)/10;
	dig3 = num%10;
	num = (num-dig3)/10;
	dig4 = num%10;
	num = (num-dig4)/10;
	sum = dig1 + dig2 + dig3 + dig4;
	printf("%d", sum);
	return 0;
}
