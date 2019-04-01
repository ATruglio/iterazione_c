#include <stdio.h>

int main() {
	int l,i=0,c,j=0;
	char d=' ';
	do{				
		printf("Inserisci la lunghezza del quadrato compresa da 1 a 20 \n");
		scanf("%d", &l);	
		if(l<1||l>20)  printf("Valore fuori dai limiti!");			
	}while(l<1||l>20);

	c=l;

	do{
			do{
				j++;
				if(j==1||i==0||i==c-1) printf("*");
				else printf("%c", d);
				if(j==c) printf("*");
			}while(j<c-1);
		i++;
		j=0;
		printf("*\n");
	}while(i<c);

	return 0;
}