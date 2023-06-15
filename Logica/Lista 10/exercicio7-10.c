#include <stdio.h>
#include <string.h>

int main () {

    char str1[11], str2[11];

    for (int i = 0; i < sizeof(str1); i++)
    {
        str1[i] = 0;
    }
    
    puts("Insira o primeiro texto: ");

    gets(str1);

    puts("Insira o segundo texto: ");

    gets(str2);

    if (strcmp(str1, str2) != 0)
    {
        printf("diferentes\n");
    } else {
        printf("identicas\n");
    }
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    return 0;
}