#include <stdio.h>

float soma(float x, float y) {
    return x + y;
}

float multiplica(float x, float y) {
    return x * y;
}

float diferenca(float x, float y) {
    return x - y;
}

float divisao(float x, float y) {
    if (y != 0){
        return x / y;
    } else {
        printf("erro\n");
        return 0;
    }
}

float selecao(char resp, float x, float y){
    switch(resp){
        case '+':
            return soma(x, y);
            break;
        case '*':
            return multiplica(x, y);
            break;
        case '-':
            return diferenca(x, y);
            break;
        case '/':
            return divisao(x, y);
            break;
        default:
            printf("erro de selecao");
            return 0;
            break;
    }
}

void escolherNum(float *pointerX, float *pointerY){
    printf("\nInsira um primeiro valor\n");
    scanf("%f", pointerX);
    printf("\nInsira um segundo valor\n");
    scanf("%f", pointerY);
}

void menu(int *quitPointer, float x, float y, int *numSelectPointer){
    char resp;

    printf("\nSelecione uma operação/comando:\n");
    printf("+ Somar 2 numeros\n");
    printf("* Multiplicar 2 numeros\n");
    printf("- Diferença entre 2 numeros\n");
    printf("/ Divisão de 1 numero por outro\n");
    printf("0 Sair\n");
    printf("1 Mudar valores\n");
    scanf("%*c%c", &resp);
    if (resp == '0'){
        *quitPointer = 1;
    } else if (resp == '1'){
        *numSelectPointer = 1;
    } else {
        printf ("Resultado: %g \n", selecao(resp, x, y));
    }
}

int main(){
    int quit = 0, numSelect = 1;
    float x, y;
    while (!quit){
        if (numSelect){
            escolherNum(&x, &y);
            numSelect = 0;
        }
        menu(&quit, x, y, &numSelect);
    }
    return 0;
}