#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 5
#define M 3
#define S 10

typedef struct{
        char nome[S];
        char cognome[S];
        float voti[N];
        }alunno;
        
void carica(alunno persona[]);
void ordina(alunno persona[]);
void visualizza(alunno persona[]);
void ricerca(alunno persona[]);
        
int main(int argc, char *argv[])
{
  alunno pers[M];
  int scelta;
  carica(pers);
  ordina(pers);
   do{
     printf("0. Esci\n1. visualizza classe\n2. ricerca per nome\n");
     scanf("%d",&scelta); 
     switch(scelta){
        case 0:break;
        case 1:
               visualizza(pers);
               break; 
        case 2:
        ricerca(pers);
               break;
        default:
               printf("scelta scorretta\n");                  
     }         
  }while(scelta!=0);
  system("PAUSE");	
  return 0;
}
void carica(alunno persona[]){
     int i,j;
     for(i=0;i<M;i++){
                      printf("inserire cognome e nome\n");
                      scanf("%s",persona[i].cognome);
                      scanf("%s",persona[i].nome);
                      for(j=0;j<N;j++){
                                       printf("inserire il %d voto\n",j+1);
                                       scanf("%f",&persona[i].voti[j]);
                                       }
                      }
     }
void ordina(alunno persona[]){
      int i,j;
     alunno temp;
     for(i=0;i<M-1;i++)
      for(j=i+1;j<M;j++)
         if(strcmp(persona[i].cognome,persona[j].cognome)>0){
             temp=persona[i];
             persona[i]=persona[j];
             persona[j]=temp;
             }
             }
void visualizza(alunno persona[]){
     int i,j;
for(i=0;i<M;i++){
                      printf("%s %s \n",persona[i].cognome,persona[i].nome);
                      for(j=0;j<N;j++){
                                       printf("%f\n",persona[i].voti[j]);
                                       }
                      printf("\n");
                      }
                      }
void ricerca(alunno persona[]){
     int i,j;
     char ricerca[S];
     printf("inserire la persona da cercare\n");
     scanf("%s",ricerca);
     for(i=0;i<M;i++)
                  if(strcmp(persona[i].cognome,ricerca)==0){
                                                         printf("%s\t",persona[i].cognome);
                                                         printf("%s\n",persona[i].nome);
                                                         for(j=0;j<N;j++)
                                                                            printf("%f\t",persona[i].voti[j]);
                                                         }
                                                         }
