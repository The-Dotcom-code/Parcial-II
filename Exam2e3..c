#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,x,m,n;
	printf("lado de la mitad de tu piramide: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++){
		for(j=1; j<i+1; j++){
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
