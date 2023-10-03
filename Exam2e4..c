#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int a,b,c, i,j,k;
	printf("Dame 3 valores a, b, c (De preferencia diferentes): ");
	scanf("%d %d %d",&a,&b,&c);
	
	i=a; j=b; k=c;
	b=i; c=j; a=k;
	
	printf("\na=%d b=%d c=%d",a,b,c);
	
	return 0;
}
