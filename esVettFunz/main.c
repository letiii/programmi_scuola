#include <stdio.h>
#include <stdlib.h>
#define N 5
void carica(int vett[]);
float calcolaMedia(int vett[]);
void ordina(int vett[]);
void scambia(int *a,int *b);
void visualizza(int vett[]); 
int main(int argc, char *argv[])
{
  int vett[N],scelta;
  float media;
  carica(vett);
  do{
     printf("0. Esci\n1. media\n2. ordina\n");
     scanf("%d",&scelta); 
     switch(scelta){
        case 0:break;
        case 1:media=calcolaMedia(vett);
               printf("la media e': %.2f\n",media);
               break; 
        case 2:ordina(vett);
               visualizza(vett);
               break;
        default:
               printf("scelta scorretta\n");                  
     }         
  }while(scelta!=0);
  
  system("PAUSE");	
  return 0;
}
void carica(int vett[]){
int i;
for(i=0;i<N;i++)  {
  printf("inserire il valore in posizione %d: ",i);
  scanf("%d",&vett[i]);   
}
}
float calcolaMedia(int vett[]){
int i, somma=0;
float media;
for(i=0;i<N;i++) 
  somma+=vett[i];   
media=(float)(somma)/i;
return media;    
}
void ordina(int vett[]){
int i, j;
for(i=0;i<N-1;i++)
   for(j=i+1;j<N;j++)
      if(vett[i]>vett[j])
          scambia(&vett[i],&vett[j]);     
}
void scambia(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;     
}
void visualizza(int vett[]){
int i;
for(i=0;i<N;i++)
   printf("%d\t",vett[i]);
printf("\n");                  
}
