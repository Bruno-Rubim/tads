/*
    3) Escreva uma função que calcule a área de uma "circunferência".
    (circunferência é o contorno do círculo)
*/

#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793846

float areaCirculo (float raio) {
    float area;
        area = (pi*raio*raio);
    return area;
}

int main()
{
    float resp;
    printf("Insira o raio do circulo: ");
    scanf("%f", &resp);
    printf("\nArea do circulo: %g", areaCirculo(resp));
    return 0;
}
