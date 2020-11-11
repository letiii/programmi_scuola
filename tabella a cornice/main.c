#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(int argc, char *argv[])
{
 int mat[N][N],i,j,x=0,y=N-1,cont=N,val=1; 
 do{
     i=x;
     for(j=x;j<cont;j++){
                         mat[i][j]=val;
                         mat[j][i]=val;
                         }
     i=y;
     for(j=x;j<cont;j++){
                         mat[i][j]=val;
                         mat[j][i]=val;
                         }
     x++;
     y--;
     cont--;
     val++;
}while(i!=N/2);
for(i=0;i<N;i++){
                 for(j=0;j<N;j++){
                                  printf("%d\t",mat[i][j]);
                                  }
                 printf("\n");
                 }
  system("PAUSE");	
  return 0;
}
