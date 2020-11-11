#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 10
int main(int argc, char *argv[])
{
int mat[N][M],i,j,val=1;
for(i=0;i<N;i++){
                 if(i%2==0)
                 {
                           for(j=0;j<M;j++){
                                            mat[i][j]=val;
                                            val++;
                                            }
                 }
                 else
                 {
                            for(j=M-1;j>=0;j--){
                                                mat[i][j]=val;
                                                val++;
                                                }
                 }
                 }
for(i=0;i<N;i++){
                 for(j=0;j<M;j++){
                                  printf("%d\t",mat[i][j]);
                                  }
                                  printf("\n");
                 }
        
  system("PAUSE");	
  return 0;
}
