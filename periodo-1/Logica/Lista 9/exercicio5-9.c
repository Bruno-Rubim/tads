#include <stdio.h>
#include<ctype.h>

int main(){

    int tam = 5, state = 0, m[tam][tam], leave = 0, x;
    char resp;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            printf("Insira [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }
    while (leave == 0)
    {
        printf("[A] Mostrar todos os elementos da matriz\n");
        printf("[B] Mostrar todos os elementos da quarta linha da matriz e da primeira coluna da matriz\n");
        printf("[C] Mostrar a soma dos elementos da diagonal principal\n");
        printf("[D] Atribuir o valor 0 para os valores negativos encontrados fora da diagonal principal\n");
        printf("[E] Buscar um elemento na matriz\n");
        printf("[F] Sair\n");
        scanf(" %c", &resp);
        resp = toupper(resp);
        if (resp == 'E')
        {
            printf("Insira o valor: ");
            scanf("%d", &x);
        }
        
        
        for (int i = 0; i < tam; i++)
        {
            switch (resp)
            {
            case 'D':
                for (int j = 0; j < tam; j++)
                {
                    if (m[i][j] < 0 && i != j)
                    {
                        m[i][j] = 0;
                    }               
                }
            case 'A':
                for (int j = 0; j < tam; j++)
                {
                    printf("%d\t", m[i][j]);
                }
                break;
            case 'B':
                for (int j = 0; j < tam; j++)
                {
                    printf("%d\t", m[i][j]);
                    if (i != 3)
                    {
                        j = tam;
                    }                    
                }
                break;
            case 'C':             
                for (int t = 0; t < i; t++)
                {
                    printf("\t");
                }
                printf("%d", m[i][i]);
                break;
            case 'E':
                for (int j = 0; j < tam; j++)
                {
                    if (m[i][j] == x)
                    {
                        printf("[%d][%d]: %d  ", i, j, m[i][j]);
                    }                    
                }
                break;
            case 'F':
                leave = 1;
            break;
            default:
                break;
            }
            printf("\n");
        }
    }
    

    return 0;
}