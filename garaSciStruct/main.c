#include <stdio.h>
#include <stdlib.h>
#define LN 20
#define N 4

typedef struct{
	char nome[LN];
	int pett;
	float t1,t2;
} sciatore;

void caricaNomi(sciatore vett[]);
void caricaT1(sciatore vett[]);
void ordinaSecondoT1(sciatore vett[]);
void visualizza(sciatore vett[]);
void caricaT2(sciatore vett[]);
void ordinaTot(sciatore vett[]);
void scambia(sciatore *a, sciatore *b);
void inverti(sciatore vett[]);

int main(int argc, char *argv[]) {
    int i;
	sciatore vett[N];
	srand(time(NULL));
	caricaNomi(vett);
	caricaT1(vett);
	ordinaSecondoT1(vett);//ordina dal tempo pi๙ basso al pi๙ alto
	//inverti(vett); //inverti i tempi
	printf("RISULTATI PRIMA MANCHE\nPETT\tNOME\tT1\tT2\tTempo Finale\n");
    visualizza(vett);
	caricaT2(vett);
	printf("RISULTATI PRIMA MANCHE\nPETT\tNOME\tT1\tT2\tTempo Finale\n");
	visualizza(vett);
	system("PAUSE");
	ordinaTot(vett); //per il podio
	system("cls");
	printf("CLASSIFICA FINALE:\nPETT\tNOME\tT1\tT2\tTempo Finale\n");
	visualizza(vett);
	printf("PODIO\nPOS\tPETT\tNOME\tT1\tT2\tTempo Finale\n");
	for(i=0;i<3;i++)
	   printf("%d\t%d\t%s\t%.2f\t%.2f\t%.2f\n",i+1,vett[i].pett,vett[i].nome,vett[i].t1,vett[i].t2,vett[i].t1+vett[i].t2);
	system("PAUSE");
	return 0;
}

void caricaNomi(sciatore vett[])
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("inserire nome sciatore %d:\t",i);
		scanf("%s",vett[i].nome);
		fflush(stdin);
		vett[i].pett = i+1;
		vett[i].t1=0;
		vett[i].t2=0;
	}
}

void caricaT1(sciatore vett[])
{
	
	int i;
	for(i=0;i<N;i++)
		vett[i].t1 = (rand()%10000)/100;	
}

void ordinaSecondoT1(sciatore vett[])
{
	int i,j;
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if(vett[i].t1>vett[j].t1)
				scambia(&vett[i],&vett[j]);
}

void scambia(sciatore *a, sciatore *b)
{
	sciatore temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
void visualizza(sciatore vett[])
{
	int i;
	printf("อออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
	for(i=0;i<N;i++)
	{
		printf("%d\t%s\t%.2f\t%.2f\t%.2f\n",vett[i].pett,vett[i].nome,vett[i].t1,vett[i].t2,vett[i].t1+vett[i].t2);
	}
	printf("อออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออออ\n");
}
void inverti(sciatore vett[])
{
	int i,j;
	for(i=0,j=N-1;i<N/2;i++,j--)
		scambia(&vett[i],&vett[j]);
}
void caricaT2(sciatore vett[])
{
	
	int i;
	for(i=N-1;i>=0;i--)
	{
		vett[i].t2 = (rand()%10000)/100;
		printf("sciatore %d %s, posizionam 1a manche: %d tempo 2a manche: %.2f\n",vett[i].pett,vett[i].nome,i+1,vett[i].t2);
	}
}
void ordinaTot(sciatore vett[])
{
	int i,j;
	for(i=0;i<N-1;i++)
		for(j=i+1;j<N;j++)
			if((vett[i].t1+vett[i].t2)>(vett[j].t1+vett[j].t2))
				scambia(&vett[i],&vett[j]);
}

