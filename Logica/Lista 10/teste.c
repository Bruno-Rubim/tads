#include <stdio.h>
#include <string.h>

int main () {

    /*
    '' = 0 = '\0'
    */

    char str[10] = "amongus";

    for (int i = 0; i < 30; i++)
    {
        printf("%c", str[i]);
    }

    return 0;
    
}