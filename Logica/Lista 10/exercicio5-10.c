#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

    char str1[11], str2[11];

    for (int i = 0; i < sizeof(str1); i++)
    {
        str1[i] = 0;
    }
    
    puts("Insira o texto: ");

    gets(str1);

    for (int i = 0; i < sizeof(str1); i++)
    {
        if (str1[i] !=0)
        {
            str2[i] = toupper(str1[i]);
        }
    }
    
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);
    return 0;
}