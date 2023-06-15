#include <stdio.h>
#include <string.h>

int main () {

    //esse era meu exercício 3, aí eu li o 4 e tive que mudar o nome desse e criar uma cópia que só serve pra letra o

    char str[21], compare;
    int count = 0;

    puts("Insira o texto: ");
    gets(str);

    puts("Insira o caractere para contagem: ");
    scanf("%c", &compare);

    for (int i = 0; i < sizeof(str); i++)
    {
        if (str[i] == 0)
        {
            i = sizeof(str);
        } 
        
        if (str[i] == compare)
        {
            count ++;
        }
        
    }
    printf("contagem: %d\n", count);
    return 0;
}