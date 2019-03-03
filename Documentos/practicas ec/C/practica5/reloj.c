#include <stdio.h>
int main () {
 int seg, min, horas, dias;
 printf("Escribe un numero mayor que cero: ");
 scanf("%d", &seg);
  if(seg>0) {
	min=seg/60;
	seg=seg%60;
	horas=min/60;
	min=min%60;
	dias=horas/24;
	horas=horas%24;
		
	printf("En segundos son: %d\n", seg);
	printf("En minutos son: %d\n", min);
	printf("En horas son: %d\n", horas);
	printf("En dias son: %d\n", dias);
	}
	else{
		printf("Error\n");	
	}
return 0;
}
