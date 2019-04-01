#include <stdio.h>

int main() {
	int l,i=0,r,c,j=0;
	do{				
		printf("Inserisci la lunghezza del quadrato compresa da 1 a 20 \n");
		scanf("%d", &l);	
		if(l<1||l>20)  printf("Valore fuori dai limiti!");			
	}while(l<1||l>20);

	r=l;
	c=l;

	do{
			do{
				j++;
				if(j<c) printf("*");
			}while(j<c-1);
		i++;
		j=0;
		printf("* \n");
	}while(i<c);

	return 0;
}
