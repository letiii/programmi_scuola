#include <stdio.h>
#include <stdlib.h>
#define N 6

int main(int argc, char *argv[])
{
  int vett[N],i,j,temp;
  
  for(i=0;i<N;i++){
                   printf("inserire il valore per la posizone %d:   ",i);
                   scanf("%d",&vett[i]);
                   }
  for(i=0;i<N-1;i++)
     for(j=N-1;j>i;j--)
         if(vett[j-1]>vett[j])
         {
             temp=vett[j-1];
             vett[j-1]=vett[j];
             vett[j]=temp;               
         }
  
  for(i=0;i<N;i++)
                  printf("%d\t",vett[i]);
  
  printf("\n");
  system("PAUSE");	
  return 0;
}
