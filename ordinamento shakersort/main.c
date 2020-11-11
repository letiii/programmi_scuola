#include <stdio.h>
#include <stdlib.h>
#define N 6

int main(int argc, char *argv[])
{
  int vett[N],i,temp,scambio;
  
  for(i=0;i<N;i++){
                   printf("inserire il valore per la posizone %d:   ",i);
                   scanf("%d",&vett[i]);
                   }
  do {
    scambio=0;
    for(i=N-1;i>0;i--)
       if(vett[i-1]>vett[i])
         {
             temp=vett[i-1];
             vett[i-1]=vett[i];
             vett[i]=temp;
             scambio=1;               
         }
    for(i=1;i<N;i++)
         if(vett[i-1]>vett[i])
         {
             temp=vett[i-1];
             vett[i-1]=vett[i];
             vett[i]=temp;
             scambio=1;               
         }
  }while(scambio==1);
  for(i=0;i<N;i++)
                  printf("%d\t",vett[i]);
  
  printf("\n");
  system("PAUSE");	
  return 0;
}
