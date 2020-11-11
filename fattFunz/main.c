#include <stdio.h>
#include <stdlib.h>
long int fattoriale(int n);
int main(int argc, char *argv[])
{
  int n;
  long int fatt;
  do{
     printf("inserire un numero positivo: ");
     scanf("%d",&n);
  }while(n<0);
  fatt=fattoriale(n);//chiamata di funzione
  printf("il fattoriale di %d e' %ld\n",n,fatt);
  system("PAUSE");	
  return 0;
}
long int fattoriale(int n){
  long int fatt=1;
  int i;
  for(i=1;i<=n;i++) 
    fatt=fatt*i;
  return fatt; 
}
