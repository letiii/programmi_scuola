#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(int argc, char *argv[])
{
int vett[N],i,t;
for(i=0;i<N;i++){
                 printf("inserire il valore in posizione %d\n",i);
                 scanf("%d",&vett[i]);
                 }
t=vett[0];
for(i=0;i<N-1;i++){
                   vett[i]=vett[i+1];
                   }
vett[N-1]=t;
for(i=0;i<N;i++){
                 printf("%d\t",vett[i]);
                 }
  system("PAUSE");	
  return 0;
}
