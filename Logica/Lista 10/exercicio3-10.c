#include <stdio.h>
#include <string.h>

int main () {

    char str[21];
    int count = 0;

    puts("Insira o texto: ");
    gets(str);

    for (int i = 0; i < sizeof(str); i++)
    {
        if (str[i] == 0)
        {
            i = sizeof(str);
        } 
        
        if (str[i] == 'o')
        {
            count ++;
        }
    }
    printf("contagem: %d\n", count);
    return 0;
}