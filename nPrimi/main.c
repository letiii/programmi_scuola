#include <stdio.h>
#include <stdlib.h>
int primo(int n);
int main(int argc, char *argv[])
{
  int n,ris;
  do{
      printf("inserire un numero positivo: ");
      scanf("%d",&n);
  }while(n<=0);
  ris=primo(n);
  if(ris==0)
     printf("il numero %d e' primo\n",n);
  else
     printf("il numero %d e' NON primo\n",n);
  system("PAUSE");	
  return 0;
}
//FINIRE di CORREGGERE da qui
int primo(int n){
int i;
if(n==2)
     printf("il numero %d e' primo\n",n);  
else
  if(n==1)
     printf("il numero %d NON e' primo\n",n);  
  else {
    i=2;
    while((i<=n/2)&&(n%i!=0))
      i++;     
  if(n%i==0)
      printf("il numero %d NON e' primo\n",n);
  else
      printf("il numero %d e' primo\n",n); 
  } //if
}
