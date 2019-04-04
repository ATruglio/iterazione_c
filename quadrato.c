#include <stdio.h>

int main() {
	int l,i=0,j=0;
	do{				
		printf("Inserisci la lunghezza del quadrato compresa da 1 a 20 \n");
		scanf("%d", &l);	
		if(l<1||l>20)  printf("Valore fuori dai limiti!");			
	}while(l<1||l>20);


	do{
			while(j<l){
				j++;
				if(j<l) printf("*");
			}
			i++;
			j=0;
			printf("*\n");
	}while(i<l);

	return 0;
}
