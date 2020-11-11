#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float quadrato(float misura);
float cerchio(float misura);
float romboTriangolo(float m1, float m2);
float rettangolo(float m1, float m2);
float trapezio(float m1,float m2,float m3);
int main(int argc, char *argv[])
{
  int scelta;
  float lato,area,d1,d2,b1,b2,h,raggio;
  do{
   printf("inserire: \n1 quadrato\n2 cerchio \n3 rombo\n4 rettangolo\n5 trapezio\n6 triangolo\n0 per uscire\n");
   scanf("%d",&scelta);
 
   switch(scelta){
    case 0:break;
 	case 1:
        printf("inserire il lato\n");
        scanf("%f",&lato);
        area=quadrato(lato);
        printf("l'area e' %f\n",area);
 		break;
 	case 2:
	 	printf("inserire il raggio\n");
	 	scanf("%f",&raggio);
	 	area=cerchio(raggio);
	 	printf("l'area e' %f\n",area);
	    break;
    case 3:
	 	printf("inserire le diagonali\n");
	 	scanf("%f %f",&d1,&d2);
	 	area=romboTriangolo(d1,d2);
	 	printf("l'area e' %f\n",area);
	    break;
   case 4:
        printf("inserire i lati\n");
        scanf("%f %f",&b1,&b2);
        area=rettangolo(b1,b2);
        printf("l'area e' %f\n",area);
        break;
   case 5:
        printf("inserire le due basi e l'altezza\n");
        scanf("%f %f %f",&b1,&b2,&h);
        area=trapezio(b1,b2,h);
        printf("l'area e' %f\n",area);
        break;
   case 6:
        printf("inserire la base e l'altezza\n");
        scanf("%f %f",&b1,&h);
        area=romboTriangolo(b1,h);
        printf("l'area e' %f\n",area);
        break;
	default:
        printf("scelta scorretta\n");
  }		
 }while(scelta!=0);
  system("PAUSE");	
  return 0;
}
float romboTriangolo(float m1, float m2){
      float ris;
      ris=m1*m2*0.5;
return ris;
}
float quadrato(float misura){
      float ris;
      ris=pow(misura,2);
      return ris;
      }
float cerchio(float misura){
      float ris;
      ris=pow(misura,2)*3.14;
      return ris;
      }
float rettangolo(float m1, float m2){
      float ris;
      ris=m1*m2;
      return ris;
      }
float trapezio(float m1,float m2, float m3){
      float ris;
      ris=(m1+m2)*m3*0.5;
      return ris;
      }
