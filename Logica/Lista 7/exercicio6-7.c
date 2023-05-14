#include <stdio.h>

int main(){
    int a = 0, b = 0, c = 0, d = 0, e = 0;
    float nota, am = 0, bm = 0, cm = 0, dm = 0, em = 0;


	for (int i = 1; i <= 40; i++){
        printf("Digite a nota final do %d° aluno:\n", i);
        scanf(" %f", &nota);
        if (nota < 3){
            e++;
            em += nota;
        } else if (nota < 5) {
            d++;
            dm += nota;
        } else if (nota < 7){
            c++;
            cm += nota;
        } else if (nota < 9){
            b++;
            bm += nota;
        } else {
            a++;
            am += nota;
        }
	}
    if (a > 0){
        printf("%d Alunos com A. Média geral: %.1f\n", a, am/a);
    } else {
        printf("0 Alunos com A");
    }
    if (b > 0){
        printf("%d Alunos com B. Média geral: %.1f\n", b, bm/b);
    } else {
        printf("0 Alunos com B\n");
    }
    if (c > 0){
        printf("%d Alunos com C. Média geral: %.1f\n", c, cm/c);
    } else {
        printf("0 Alunos com C\n");
    }
    if (d > 0){
        printf("%d Alunos com D. Média geral: %.1f\n", d, dm/d);
    } else {
        printf("0 Alunos com D\n");
    }
    if (e > 0){
        printf("%d Alunos com E. Média geral: %.1f\n", e, em/b);
    } else {
        printf("0 Alunos com E\n");
    }
	return 0;
}
