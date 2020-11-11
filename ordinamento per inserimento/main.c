#include <stdio.h>
#include <stdlib.h>
#define N 4

int main(int argc, char *argv[])
{
  int vett[N],i,j,temp;
  
  for(i=0;i<N;i++){
                   printf("inserire il valore per la posizione %d:   ",i);
                   scanf("%d",&vett[i]);
                   }
  for(i=1;i<N;i++){
       temp=vett[i];
       j=i-1;
       while((j>=0)&&(temp<vett[j])){
            vett[j+1]=vett[j];
            j--;                      
       } 
       vett[j+1]=temp;               
  }
     
  
  for(i=0;i<N;i++)
                  printf("%d\t",vett[i]);
  
  printf("\n");
  system("PAUSE");	
  return 0;
}
