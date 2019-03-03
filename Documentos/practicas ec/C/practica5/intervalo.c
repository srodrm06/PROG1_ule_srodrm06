#include <stdio.h>
int main() {
 int m,n,suma,i;
 do{
 	printf("Escribe un numero: ");
 	scanf("%d", &m);
 	printf("Escribe otro numero: ");
 	scanf("%d", &n);
	suma=0;
		if(m>n){
			for(i=n; i<=m; i++){
				suma=suma+i;
			}
			printf("La suma es:%d\n", suma);
		}
		else {
			printf("Error, el primero tiene que ser mayor\n");
		}			
	} while(m<n);
return 0;
}
