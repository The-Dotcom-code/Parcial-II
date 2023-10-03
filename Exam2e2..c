#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,x,m,n;
	for(i=0; i<=100; i++){
		if(i%3==0){
			printf("%d es multiplo de 3\n",i);
		}
		else{
			printf("%d no es multiplo de 3\n",i);
		}
	}
	return 0;
}
