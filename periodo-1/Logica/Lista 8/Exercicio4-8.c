#include <stdio.h>

int main(){
	float notas[20], soma = 0;
    int alunosTop = 0;

    for (int i = 0; i < 20; ++i){
        printf("Nota do %d° aluno\n", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    for (int i = 0; i < 20; ++i)
    {
        if (notas[i] > soma/20)
        {
            alunosTop++;
        }
    }

    printf("Média: %.1f Alunos acima da média: %d\n", soma/20, alunosTop);
	return 0;
}