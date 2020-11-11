//dati due vettori ordinati, il primo di N, il secondo di M. Creare un terzio vettiore di MJ+N elementi dato dalla funzione di due.
//"merge" di due vettori

#include <stdio.h>
#include <stdlib.h>
#define N 6
#define M 4
#define C 10

int main(int argc, char *argv[])
{
  int vetta[N],vettb[M],vettc[C],i,j,k;

  for(i=0;i<N;i++){
	               printf("VETTA: inserire il valore in posizione %d (valori ordinati): ",i+1);
               	   scanf("%d",&vetta[i]);
    }

  for(i=0;i<M;i++){
 	               printf("VETTB: inserire il valore in posizione %d (valori ordinati): ",i+1);
 	               scanf("%d",&vettb[i]);
    }
    
  i=0;
  j=0;
  k=0;
  while((i<N)&&(j<M)){
     if(vetta[i]<=vettb[j]){
        vettc[k]=vetta[i];
        i++;
     }
     else{
        vettc[k]=vettb[j];
        j++;
     }
     k++;
  }
  while(i<N){ 
     vettc[k]=vetta[i];
     k++;
     i++;                            
  }
  while(j<M){
     vettc[k]=vettb[j];
     k++;
     j++;
  }
 for(k=0;k<C;k++){
	             printf("%d\t ",vettc[k]);
                 }
  
  system("PAUSE");	
  return 0;
}
