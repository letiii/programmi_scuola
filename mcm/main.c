#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n1,n2, ris1,ris2;
  do{
      printf("inserire due numeri positivi: ");
      scanf("%d %d",&n1,&n2);
  }while((n1<=0)||(n2<=0));
  ris1=n1;
  ris2=n2;
  while(ris1!=ris2){
      if(ris1<ris2)
           ris1=ris1+n1;
      else
           ris2=ris2+n2;    
  }
  printf("il mcm tra %d e %d e' %d\n",n1,n2,ris1);
  system("PAUSE");	
  return 0;
}
