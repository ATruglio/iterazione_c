#include <stdio.h>

int main() {
	int lun,colonne=0,righe=0;
	do{				
		printf("Inserisci la lunghezza del quadrato compresa da 1 a 20 \n");
		scanf("%d", &lun);	
		if(lun<1||lun>20)  printf("Valore fuori dai limiti!");			
	}while(lun<1||lun>20);

	while(colonne<lun){
			righe=0;
			while(righe<lun-1){
				righe++;
				if(righe==1||colonne==0||colonne==lun-1) printf("*");
				else putchar(' ');
				if(righe==lun) printf("*");
			}
	
		printf("*\n");
		colonne++;
	}

	return 0;
}