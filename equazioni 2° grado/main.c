#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define N 13

float primogrado(float b, float c);
float pura1(float a, float c);
float pura2(float a, float c);
float spuria(float a, float b); 
float completa1(float a, float b, float c, float disc);
float completa2(float a, float b, float c, float disc);
float discriminante(float a, float b, float c);

int main(int argc, char *argv[])
{
 float a,b,c,x1,x2,x,disc;
 char risultato [N];
 printf("inserire a, b e c\t");
 scanf("%f %f %f",&a,&b,&c);
 if((a==0)&&(b==0)){
                    if(c==0)
                            strcpy(risultato,"indeterminata");
                    else
                            strcpy(risultato,"impossibile");
                    printf("%s\n",risultato);
                    }
 if((a==0)&&(b!=0)){
                    x=primogrado(b,c);
                    printf("%f\n",x);
                    }
 if((a!=0)&&(b==0)){
                    if(c==0){
                             x=0;
                             printf("e' un'equazione monomia, x1=x2=%f\n",x);
                             }
                    else{
                         if(((a>0)&&(c>0))||((a<0)&&(c<0))){
                                                            printf("impossibile\n");
                                                            }
                         else{
                              x1=pura1(a,c);
                              x2=pura2(a,c);
                              printf("le soluzioni sn %f %f \n",x1,x2);
                              }
                         }
                    }
 if((a!=0)&&(b!=0)){
                    if(c==0){
                             x1=0;
                             x2=spuria(a,b);
                             printf("e' un'equazione spuria e soluzioni sn %f %f",x1,x2);
                             }
                    else{
                         disc=discriminante(a,b,c);
                         if(disc<0){
                                    printf("impossibile");
                                    }
                         else{
                              x1=completa1(a,b,c,disc);
                              x2=completa2(a,b,c,disc);
                              printf("le soluzioni sn %f %f\n",x1,x2);
                              }
                         }
                    }
                             
  system("PAUSE");	
  return 0;
}
float primogrado(float b, float c){
      float ris;
      if(c==0)
              ris=0;
      else
              ris=-c/b;
return ris;
}
float pura1(float a, float c){
      float ris;
      ris=-1*pow(-c/a,0.5);
      return ris;
      }
float pura2(float a, float c){
      float ris;
      ris=pow(-c/a,0.5);
      return ris;
      }
float spuria(float a, float b){
      float ris;
      ris=-b/a;
      return ris;
      }
float discriminante(float a, float b, float c){
      float ris;
      ris=b*b-4*a*c;
      return ris;
      }
float completa1(float a, float b, float c, float disc){
      float ris;
      ris=(-b-pow(disc,0.5))/(2*a);
      return ris;
      }
float completa2(float a, float b, float c, float disc){
       float ris;
      ris=(-b+pow(disc,0.5))/(2*a);
      return ris;
      }
