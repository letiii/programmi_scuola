#include <stdio.h>
#include <stdlib.h>
int primo(int n);


int main(int argc, char *argv[])
{
    int n,i,ris1,ris2;
    
    do{
       printf("inserire un numero pari maggiore di 2: ");
       scanf("%d",&n);
    }while((n%2!=0)||(n<=2));
       
    for(i=2;i<=n/2;i++){
       ris1=primo(i);
       ris2=primo(n-i);
       if((ris1==0)&&(ris2==0))
         printf("%d\t%d\n",i,n-i);
         
    }
  
  system("PAUSE");	
  return 0;
}
int primo(int n){
   int i,ris=0;
   i=2;
   while((i<=n/2)&&(n%i!=0))
      i++;
   if(n%i==0)
     ris=1;
   return ris;
}
