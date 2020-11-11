#include <stdio.h>
#include <stdlib.h>
#define N 5
int main(int argc, char *argv[])
{
  int vett[N],i,cerca;
  
  for(i=0;i<N;i++){
    printf("inserire valore in posizione %d",i);  
    scanf("%d",&vett[i]);             
  }
  printf("inserire valore da cercare");  
  scanf("%d",&cerca);
  
  /*
  trovato=0;
  for(i=0;i<N;i++)
    if(vett[i]==cerca)
        trovato=i;
  if(trovato==0)
     printf("elemento non presente nel vettore\n");
  else
     printf("elemento presente in posizione %d",trovato);
  */
  i=0;
  while((i<N)&&(vett[i]!=cerca))
     i++;
  if((i<N)&&(vett[i]==cerca))
     printf("elemento presente in posizione %d",trovato);  
  else
     printf("elemento non presente nel vettore\n");
        
  system("PAUSE");	
  return 0;
}
