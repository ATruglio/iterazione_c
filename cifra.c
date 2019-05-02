#include <stdio.h>


int main()
{
	int i=0,c=10,r;

	do{
		printf("Inserire  un valore positivo\n");
		scanf("%d", &r);
	}while(r<=0);

	do{
		if(r%c==7)	i++;
		r/=c;
		
	}while(r>=7);

	printf("\n Il numero 7 viene ritrovato: %d", i);

	putchar('\n');
	return 0;
}