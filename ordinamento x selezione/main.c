#include <stdio.h>
#include <stdlib.h>
#define N 6
int main(int argc, char *argv[])
{
  int vett[N],i,j,temp;
  for(i=0;i<N;i++){
     printf("inserire il valore in posizione %d: ",i);
     scanf("%d",&vett[i]);              
  }
  for(i=0;i<N-1;i++)//chi confronta
    for(j=i+1;j<N;j++) //con chi avviene il confronto
       if(vett[i]>vett[j]){
          temp=vett[i];
          vett[i]=vett[j];
          vett[j]=temp;                 
       }
  for(i=0;i<N;i++)
     printf("%d\t",vett[i]);
  printf("\n");        
  system("PAUSE");	
  return 0;
}
