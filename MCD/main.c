#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int n1,n2,resto,num1,num2;
  do{
    printf("inserire due valori diversi da 0: ");
    scanf("%d %d",&n1,&n2);
  }while((n1==0)||(n2==0));
  num1=n1;
  num2=n2;
  resto=num1%num2;
  while(resto!=0){  
        num1=num2;
        num2=resto;
        resto=num1%num2;
  }
  printf("il MCD tra %d e %d e': %d\n",n1,n2,num2);
  
  resto=n1%n2;
  while(resto!=0){  
        n1=n2;
        n2=resto;
        resto=n1%n2;
  }
  printf("il MCD e': %d\n",n2);
  system("PAUSE");	
  return 0;
}
