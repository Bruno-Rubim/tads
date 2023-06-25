/*
    4) Escreva uma função que calcule a área de uma figura retangular.
*/

#include <stdio.h>
#include <math.h>

int areaRetangulo(int lado1, int lado2) {
    return lado1 * lado2;
}

int main()
{
    int resp1, resp2;
    printf("Insira o lado do Retangulo: ");
    scanf("%d", &resp1);
    printf("Insira a base do Retangulo: ");
    scanf("%d", &resp2);
    printf("\nArea do Retangulo: %d", areaRetangulo(resp1, resp2));
    return 0;
}
