#include <stdio.h>

int main(){
	int hrs, min, seg, tot;
	printf("Insira a duração do evento em segundos: ");
	scanf("%d", &tot);
	seg = tot;
	hrs = seg/3600;
	seg -= (hrs*3600);
	min = seg/60;
	seg -= (min*60);
	printf("%d""s = ""%d"":""%d"":""%d", tot, hrs, min, seg);
	return 0;
}
