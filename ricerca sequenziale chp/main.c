#include <stdio.h>
#include <stdlib.h>//ricerca completa CHP,vettore ordinato
#define N 7
int main(int argc, char *argv[])
{
  int vett[N],i,chp;
  
  for(i=0;i<N;i++){
                   printf("inserire il valore per la posizone %d:   ",i);
                   scanf("%d",&vett[i]);
                   }

  printf("inserire il valore che si vuole controllare:  ");
  scanf("%d",&chp);
  i=0;
  while((i<N)&&(vett[i]<chp))
      i++;
  if((i<N)&&(chp==vett[i]))
      printf("il valore e' presente in posizione %d\n",i);
  else         
      printf("il valore non e' presente\n");
      
  system("PAUSE");	
  return 0;
}
