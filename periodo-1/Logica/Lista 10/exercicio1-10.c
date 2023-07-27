#include <stdio.h>
#include <string.h>

int main () {

    char str1[11], str2[11];

    puts("Insira o primeiro texto: ");

    gets(str1);

    puts("Insira o segundo texto: ");

    gets(str2);

    strcat(str1, str2);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    return 0;
}