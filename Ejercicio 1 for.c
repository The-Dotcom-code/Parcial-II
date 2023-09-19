#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	int suc;
	int neg;
	printf("De cuantos numeros quieres tu sucesion?");
	scanf("%d",&suc);
	for(i=1; i<=suc ; i++){
		neg=-i;
		printf("%d, %d\n",i,neg);
	}
	return 0;
}
