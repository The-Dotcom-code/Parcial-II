#include <stdio.h>
#include <time.h>


int main(void) {
  int i,j,k,x,n,p=0;
  srand(time(NULL));
  printf("De que tamaño quieres las matrices?\n");
  scanf("%d", &x);
  
  int m1[x][x],m2[x][x],r[x][x];
  printf("Que operacion desea hacer? \n");
  printf("(1) Suma  (2) Resta \n(3)Multiplicacion (4)Diagonal \n(5) Suma triangular\n");
  scanf("%d", &n);
  
  switch(n){
    case 1:
      //Random 1
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          m1[i][j]=rand()%(9)+1;
       }
    }
      //Imprimir 1
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",m1[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      //Random 2
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          m2[i][j]=rand()%(9)+1;
       }
    }
      //Imprimir 2
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",m2[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      //Operacion
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          r[i][j]=m1[i][j]+m2[i][j];
       }
      }
      //Imprimir 3
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",r[i][j]);
        }
        printf("\n");
      }
      break;
    
    case 2:
      //Random 1
      for(i=0; i<x; i++){
       for(j=0; j<x; j++){
         m1[i][j]=rand()%(9)+1;
       }
    }
      //Imprimir 1
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",m1[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      //Random 2
      for(i=0; i<x; i++){
       for(j=0; j<x; j++){
         m2[i][j]=rand()%(9)+1;
       }
    }
      //Imprimir 2
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",m2[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      //Operacion
      for(i=0; i<x; i++){
       for(j=0; j<x; j++){
         r[i][j]=m1[i][j]-m2[i][j];
       }
      }
      //Imprimir 3
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",r[i][j]);
        }
        printf("\n");
      }
      break;
    
    case 3:
      //Random 1
      for(i=0; i<x; i++){
       for(j=0; j<x; j++){
         m1[i][j]=rand()%(9)+1;
       }
    }
      //Imprimir 1
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",m1[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      //Random 2
      for(i=0; i<x; i++){
       for(j=0; j<x; j++){
         m2[i][j]=rand()%(9)+1;
       }
    }
      //Imprimir 2
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",m2[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      //Operación
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          for(k=0; k<x; k++){
            p+=m1[i][k]*m2[k][j];
          }
          r[i][j]=p;
          printf("%d ",r[i][j]);
        }
        printf("\n");
      }
      break;
    
    case 4:
      //Random 1
      for(i=0; i<x; i++){
       for(j=0; j<x; j++){
         m1[i][j]=rand()%(9)+1;
       }
    }
      //Imprimir 1
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",m1[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      //Random 2
      for(i=0; i<x; i++){
       for(j=0; j<x; j++){
         m2[i][j]=rand()%(9)+1;
       }
    }
      //Imprimir 2
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",m2[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      //Operacion
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          if(i==j){
            p+=m1[i][j]+m2[i][j];
          }
        }
      }
      printf("La suma es: %d",p);

      break;
    
    case 5:
      //Random 1
      for(i=0; i<x; i++){
       for(j=0; j<x; j++){
         m1[i][j]=rand()%(9)+1;
       }
    }
      //Imprimir 1
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",m1[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      //Random 2
      for(i=0; i<x; i++){
       for(j=0; j<x; j++){
         m2[i][j]=rand()%(9)+1;
       }
    }
      //Imprimir 2
      for(i=0; i<x; i++){
        for(j=0; j<x; j++){
          printf("%d ",m2[i][j]);
        }
        printf("\n");
      }
      printf("\n");
      //Operacion
      for(i=0; i<x; i++){
        for(j=0; j<x-i-1; j++){
          p+=m1[i][j]+m2[i][j];
        }
      }
      printf("La suma es: %d\n",p);
      break;
    
    default:
      printf("No es una opcion valida");
      break;
  }
  return 0;
}