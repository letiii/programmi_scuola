#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int nSuK(int n,int k);
long int fattoriale(int x);
int main(int argc, char *argv[])
{
  int n,k,nr,ris;
  do{
    printf("inserire il numero di righe: ");
    scanf("%d",&nr);
  }while(nr<1);
  printf("1\n");
  for(n=1;n<=nr;n++){
     for(k=0;k<=n;k++)
        printf("%d\t",nSuK(n,k));
     printf("\n");
  }
  system("PAUSE");	
  return 0;
}
int nSuK(int n,int k){
   long int fn,fk,fnk;
   int ris;
   fn=fattoriale(n);
   fk=fattoriale(k); 
   fnk=fattoriale(n-k);
   ris=fn/(fk*fnk);
   return ris;
}
long int fattoriale(int x){
     long int fatt=1;
     int i;
     for(i=1;i<=x;i++) //for(i=x;i>0;i--)
        fatt=fatt*i;
     return fatt;
}
