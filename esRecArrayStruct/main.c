#include <stdio.h>
#include <stdlib.h>
#define NL 20
#define N 4
typedef struct {
    char marca[NL]; 
    int cod;
    float prezzo, num;   
}scarpa;
void carica(scarpa vett[N]);
int maxP(scarpa vett[]);
int main(int argc, char *argv[])
{
  int i;
  scarpa vett[N];
  
  carica(vett);
  i=maxP(vett);
  printf("la scarpa piu' costosa e' %s e costa %.2f\n",vett[i].marca,vett[i].prezzo);
  system("PAUSE");	
  return 0;
}
void carica(scarpa vett[N]){
  int i;
  for(i=0;i<N;i++){
    printf("inserire la marca, il codice, il prezzo e il num: \n");
    scanf("%s",vett[i].marca);
    fflush(stdin);
    //gets(marca);
    scanf("%d %f %f",&vett[i].cod,&vett[i].prezzo,&vett[i].num);
  }                  
}
int maxP(scarpa vett[]){
  float max;
  int pos,i;
  max=vett[0].prezzo;
  for(i=0;i<N;i++)
    if(vett[i].prezzo>max){
        max=vett[i].prezzo;
        pos=i;
    }
  return pos; 
}
