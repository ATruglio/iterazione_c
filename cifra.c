#include <stdio.h>


int main()
{
	int i=0,c=10,num;

	do{
		printf("Inserire  un valore positivo\n");
		scanf("%d", &num);
	}while(num<=0);

	do{
		if(num%c==7)	i++;
		num/=c;
		
	}while(num>=7);

	printf("\n Il numero 7 viene ritrovato: %d", i);

	putchar('\n');
	return 0;
}