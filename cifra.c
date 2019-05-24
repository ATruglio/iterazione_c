#include <stdio.h>


int main()
{
	int i=0,num;

	do{
		printf("Inserire  un valore positivo\n");
		scanf("%d", &num);
	}while(num<=0);

	while(num>0){
		if(num%10==7)	i++;
		num/=10;
		
	}

	printf("\n Il numero 7 viene ritrovato: %d", i);

	putchar('\n');
	return 0;
}