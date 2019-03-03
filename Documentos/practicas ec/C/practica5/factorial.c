#include <stdio.h>
int main () {
 int Num, i, factorial;
 printf("Escribe un numero: ");
 scanf("%d", &Num);
 factorial=1;
	for(i=1;i<=Num;i++) {
		factorial=factorial*i;	
	}
	printf("El factorial es: %d\n", factorial);
return 0;
}
