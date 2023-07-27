/*
    2) Escreva uma função que determine o número de raízes reais de um polinômio de 2°
    grau, ou seja, deve retornar o valor 2 se o polinômio possui duas raízes reais distintas, 1
    se o polinômio possui raízes reais iguais e 0 se o polinômio não possui raízes
*/

#include <stdio.h>
#include <math.h>

int raizesReaisPolinomio (int a, int b, int c) {
    int raizes = 0;
    int delta = b*b - 4*a*c;
    if (delta < 0) {
        raizes = 0;
    } else if (delta > 0) {
        raizes = 2;
    } else {
        raizes = 1;
    }
    return raizes;
}

int main()
{
    int num1, num2, num3;
    printf("Ax² + Bx² + C = 0\n");
    printf("Insira o valor de A: ");
    scanf("%d", &num1);
    printf("Insira o valor de B: ");
    scanf("%d", &num2);
    printf("Insira o valor de C: ");
    scanf("%d", &num3);
    printf("\nNumero de raizes: %d", raizesReaisPolinomio(num1, num2, num3));
    return 0;
}
