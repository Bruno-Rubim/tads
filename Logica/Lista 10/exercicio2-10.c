#include <stdio.h>
#include <string.h>

int main () {

    char str1[4], str2[5], str3[9];

    puts("Insira o primeiro texto: ");

    gets(str1);

    puts("Insira o segundo texto: ");

    gets(str2);

    strcpy(str3, str1);

    strcat(str3, str2);

    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    printf("str3: %s\n", str3);

    return 0;
}