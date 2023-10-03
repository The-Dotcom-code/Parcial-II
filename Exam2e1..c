
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,j,x, m,n, r;
	srand(time(NULL));
	x=rand() % (5) +1;
	
	while(x!=5){
		switch(x){
			case 1:
				m=rand() % (9) +1;
				n=rand() % (9) +1;
				r= m + n;
				printf("%d + %d = %d\n", m,n,r);	
				break;
			case 2:
				m=rand() % (9) +1;
				n=rand() % (9) +1;
				r= m - n;
				printf("%d - %d = %d\n", m,n,r);	
				break;	
			case 3:
				m=rand() % (9) +1;
				n=rand() % (9) +1;
				r= m * n;
				printf("%d * %d = %d\n", m,n,r);	
				break;
			case 4:
				m=rand() % (9) +1;
				n=rand() % (9) +1;
				r= m / n;
				printf("%d / %d = %d\n", m,n,r);	
				break;
		}
		x=rand() % (5) +1;
			
	}
	
	printf("Terminacion de operaciones");
	
	
	return 0;
}
