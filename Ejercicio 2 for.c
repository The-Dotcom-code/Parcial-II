#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	float sum;
	float p;
	
	for(i=1;  i<=100  ;i++){
		p=pow(i,2);
		sum+=p;
	}
	printf("La suma de todos los cuadrados es %f",sum);
	return 0;
}
