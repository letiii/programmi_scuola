#include <stdio.h>
#include <stdlib.h>
#define N 31
int main(int argc, char *argv[])
{
int vett[N];
int i,somma,media,diff;
somma=0;
for(i=0;i<N;i++){
                 printf("inserire temperature registrate durante i giorni %d:\n ",i+1);
                 scanf("%d",&vett[i]);
                 somma=somma+vett[i];
                 }
media=somma/N;
printf("la media delle temperature del mese e' di %d gradi\n",media);

for(i=0;i<N;i++){
                 diff=media-vett[i];
                 printf("la differenza del giorno %d rispetto alla media e':%d\n",vett[i],diff);
                 } 
  system("PAUSE");	
  return 0;
}
