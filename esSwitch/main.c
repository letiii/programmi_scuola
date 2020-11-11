#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int classe, tassa;
  
  printf("inserire la classe: ");
  scanf("%d",&classe);
  switch(classe){
     case 1: tassa=120;
        break;
     case 2: 
     case 3: tassa=100;
        break; 
     case 4: tassa=80;
        break;
     case 5: tassa=130;
        break; 
     default: printf("classe sbagliata\n");
        tassa=0;          
  }
  printf("tassa da pagare: %d\n",tassa);
  system("PAUSE");	
  return 0;
}
