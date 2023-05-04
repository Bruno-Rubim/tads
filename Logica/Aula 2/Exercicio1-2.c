#include <stdio.h>

int main(){
	int nota1, nota2, nota3;
	float med;
	printf("Insira a primeira nota: ");
	scanf("%d", &nota1);
	printf("Insira a segunda nota: ");
	scanf("%d", &nota2);
	printf("Insira a terceira nota: ");
	scanf("%d", &nota3);
	med = (float)(nota1 + nota2 + nota3)/3;
	printf("Media aritimetica: ""%.1f", med);
	return 0;
}
