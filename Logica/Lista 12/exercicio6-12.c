/*
    6) Escreva um programa que oferece ao usuário a possibilidade de calcular as áreas de
    circunferências, retângulos e triângulos. Conforme a opção selecionada, solicite os
    parâmetros necessários, acione uma das funções criadas nos exercícios anteriores,
    exibindo o resultado.
*/

#include <stdio.h>
#include <math.h>
#define pi 3.141592653589793846

void areaCirculo (float raio) {
    float area;
    printf("\nArea do circulo: %g", (pi*raio*raio));
}

void areaRetangulo(float lado1, float lado2) {
    printf("\nArea do Retangulo: %g", lado1 * lado2);
}

void areaTriangulo(float base, float altura){
    printf("\nArea do Triangulo: %g", base * altura/2);
}

void menu(){
    int respMenu;
    float resp1, resp2;
    printf("1.Area de um circulo\n");
    printf("2.Area de um retangulo\n");
    printf("3.Area de um triangulo\n");
    printf("Selecione o calculo desejado: ");
    scanf("%d", &respMenu);
    switch (respMenu)
    {
    case 1:
        printf("Insira o raio do circulo: ");
        scanf("%f", &resp1);
        areaCirculo(resp1);
        break;
    case 2:
        printf("Insira o lado do Retangulo: ");
        scanf("%f", &resp1);
        printf("Insira a base do Retangulo: ");
        scanf("%f", &resp2);
        areaRetangulo(resp1, resp2);
        break;
    case 3:
        printf("Insira a altura do Triangulo: ");
        scanf("%f", &resp1);
        printf("Insira a base do Triangulo: ");
        scanf("%f", &resp2);
        areaTriangulo(resp1, resp2);
        break;
    
    default:
        break;
    }
}


int main()
{
    menu();
    return 0;
}
