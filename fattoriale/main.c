#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  long int fatt;
  int i,n;
  do{
    printf("inserire un numero >=0: ");
    scanf("%d",&n);
  }while(n<0);
  /*
  if(n!=0){
    fatt=n;
    for(i=1;i<n;i++) //for(i=n-1;i>0;i--)
       fatt=fatt*i;
  }
  else
    fatt=1;
  */
  fatt=1;
  for(i=1;i<=n;i++) //for(i=n;i>0;i--)
     fatt=fatt*i;
  printf("il fattoriale di %d e' %ld\n",n,fatt);
  system("PAUSE");	
  return 0;
}
