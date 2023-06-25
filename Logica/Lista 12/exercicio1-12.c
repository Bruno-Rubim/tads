/*
    1) Escreva uma função que retorne a soma dos n primeiros números naturais
    (inteiros positivos), dado o valor de n como parâmetro.
*/

#include <stdio.h>

int somaNaturaisPositivos (int n) {
    int soma = 0;

    for(int i = 0; i <= n; i++){
        soma += i;
    }
    return soma;
}
int main()
{
    int num;
    printf("Insira o valor de N: ");
    scanf("%d", &num);
    printf("%d", somaNaturaisPositivos(num));
    return 0;
}
