#include <stdio.h>
#include <stdlib.h>//ricerca completa CHP,vettore non ordinato
#define N 6
int main(int argc, char *argv[])
{
  int vett[N],i,chp,trovato, scelta, chs, pos,cont;//chp=chiave primaria,identifica in modo univoco un'unità;chs=chiave secondaria
  trovato=0;
  for(i=0;i<N;i++){
                   printf("inserire il valore per la posizone %d:   ",i);
                   scanf("%d",&vett[i]);
                   }
  do {
      printf("0. Esci\n");
      printf("1. ricerca chp, vettore non ordinato usando il for\n");
      printf("2. ricerca chp, vettore non ordinato, miglioramento\n");
      printf("3. ricerca chp, vettore non ordinato, miglioramento2\n");
      printf("4. ricerca chs, vettore non ordinato\n");
      scanf("%d",&scelta);
      switch(scelta){
         case 1: printf("inserire il valore che si vuole cercare:  ");
           scanf("%d",&chp);
           trovato=0;
           for(i=0;i<N;i++)
              if(chp==vett[i]){
                 printf("il valore e' presente in posizione:  %d\n",i);
                 trovato=1;
              }
          if(trovato==0)
             printf("il valore non e' presente\n");
          break;
        case 2:printf("inserire il valore che si vuole cercare:  ");
           scanf("%d",&chp);
           trovato=0;
           i=0;
           while((i<N)&&(!trovato)){    //while((i<N)&&(trovato==0))
              //ripeto quando il vett non è finito e non ho ancora trovato il valore
              if(chp==vett[i]){
                 printf("il valore e' presente in posizione:  %d\n",i);
                 trovato=1;
              }
              i++;
           }
          if(trovato==0)
              printf("il valore non e' presente\n");
          break;
        case 3:
        //versione  MIGLIORE ricerca chpno
           printf("inserire il valore che si vuole controllare:  ");
           scanf("%d",&chp);
           i=0;
           while((i<N)&&(chp!=vett[i])) 
              i++;
           if((i<N)&&(chp==vett[i]))
              printf("il valore e' presente in posizione  :  %d\n",i);
          else
              printf("il valore non e' presente\n");
          break;
        case 4:
           // ricerca chs vettore non ordinato
           printf("inserire il valore che si vuole controllare:  ");
           scanf("%d",&chs);
           cont=0;
           for(i=0;i<N;i++)
               if(chs==vett[i]){
                   printf(" presente in posizione: %d\n",i);
                   cont++;
               } //if
           if(cont==0)
                printf("%d non e' presente nel vettore\n",chs);
           else
                printf("%d e' presente nel vettore %d volte\n",chs,cont);
        }//switch
  }while(scelta!=0);
  system("PAUSE");	
  return 0;
}
