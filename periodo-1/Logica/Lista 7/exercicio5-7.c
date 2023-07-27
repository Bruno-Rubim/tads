#include <stdio.h>

int main(){
    int start, end, a = 0, b = 0, c = 0, am = 0, bm = 0, cm = 0;

    printf("Digite o valor inicial e o final:\n");
    scanf(" %d", &start);
    scanf(" %d", &end);

	for (int i = start; i <= end; i++){
        if (i > 0){
            a++;
            am += i;
        }
        if (i % 2 == 0){
            b++;
            bm += i;
        } else {
            c++;
            cm += i;
        }
	}
	printf("\nQuantidade de números positivos: %d Média: %d", a, am/a);
	printf("\nQuantidade de números pares: %d Média: %d", b, bm/b);
	printf("\nQuantidade de números ímpares: %d Média: %d", c, cm/c);
	printf("\nQuantidade de números ímpares divisíveis por 3 e 4 ao mesmo tempo: 0 Média: 0 (não existem números ímpares divisíveis por 4)");
	return 0;
}
