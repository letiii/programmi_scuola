#include <stdio.h>
#include <stdlib.h>
#define N 10
//Data una matrice 10x10 --> 1°cornice di 1, 2°cornice 2 e cosi via
void main(){
  int mat[N][N],i,j,y;
  for(y=0;y<=N/2;y++) // per i numeri da INSERIRE nella mat
    for(i=y;i<(N-y);i++)
      for(j=y;j<(N-y);j++)
        mat[i][j]=y+1;
  
  for(i=0;i<N;i++){
    for(j=0;j<N;j++)
      printf("%d\t",mat[i][j]);
    printf("\n");
  }
  system("PAUSE");
 	
}
