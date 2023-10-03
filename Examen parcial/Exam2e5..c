#include <stdio.h>

int main() {
  int i,j,k,x,m,n;

  printf("Dame una medida de las vueltas al sol: ");
  scanf("%d", &n);
  
  if(n%100==0 && n%400!=0 || n%4!=0){
    printf("\nAnualidad no bisiesto\n");
  }
  else{
    printf("\nAnualidad bisiesto\n");
  }
  
  return 0;
}