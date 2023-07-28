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
    if (b != 0){
        return x / y;
    } else {
        printf("erro /0");
        return 0;
    }
}

float selecao(char resp, int x, int y){
    switch(resp){
        case '+':
            soma(x, y);
            break;
        case '*':
            multiplica(x, y);
            break;
        case '-':
            diferenca(x, y);
            break;
        case '/':
            divisao(x, y);
            break;
        default:
            printf("erro de selecao");
            break;
    }
}

int main(){


    return 0;
}