#include <stdio.h>

int main(){

    int tam = 3, state = 0, m[tam][tam], maior = -999999999, imaior, imenor, menor = 999999999, jmaior, jmenor;

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("Insira [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
            if (m[i][j] > maior)
            {
                imaior = i;
                jmaior = i;
                maior = m[i][j]; 
            }            
            if (m[i][j] < menor)
            {
                imenor = i;
                jmenor = i;
                menor = m[i][j]; 
            }
        }
    }
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("%d\t", m[i][j]);
        }
        printf("\n");
    }

    printf("Maior numero: %d [%d][%d]\n", m[imaior][jmaior], imaior, jmaior);
    printf("Menor numero: %d [%d][%d]\n", m[imenor][jmenor], imenor, jmenor);
    
    return 0;
}