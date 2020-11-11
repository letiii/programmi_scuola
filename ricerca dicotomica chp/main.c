#include <stdio.h>
#include <stdlib.h>
//ricerca completa CHP,vettore ORDINATO
//ricerca binaria o dicotomica:divide il vettore in due parti,la ricerca è più facile.
#define N 7
int main(int argc, char *argv[])
{
  int vett[N],sx,dx,centro,chp,trovato,pos,i;
  
  for(i=0;i<N;i++){
                   printf("inserire il valore per la posizone %d:   ",i);
                   scanf("%d",&vett[i]);
                   }

  printf("inserire il valore che si vuole cercare:  ");
  scanf("%d",&chp);
  sx=0;
  dx=N;
  trovato=0;  // =0 il valore non è ancora stato trovato
  while((sx<=dx)&&(trovato==0)){
      centro=(sx+dx)/2;
      if(chp>vett[centro])
           sx=centro+1;
      else
         if(chp==vett[centro])
            trovato=1;
         else
            dx=centro-1;
  }
  if(chp==vett[centro])  //  if(trovato==1)
      printf("il valore e' presente in posizione %d\n",centro);
  else         
      printf("il valore non e' presente\n");
      
  system("PAUSE");	
  return 0;
}
