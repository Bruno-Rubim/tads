/*
    5) Escreva uma função que calcule a área de triângulos.
*/

#include <stdio.h>
#include <math.h>

float areaTriangulo(float base, float altura){
    return (base * altura)/2;
}

int main()
{
    float resp1, resp2;
    printf("Insira a altura do Triangulo: ");
    scanf("%f", &resp1);
    printf("Insira a base do Triangulo: ");
    scanf("%f", &resp2);
    printf("\nArea do Triangulo: %g", areaTriangulo(resp1, resp2));
    return 0;
}
