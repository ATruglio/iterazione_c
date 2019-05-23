#include <stdio.h>

int main() {
	int lun,colonne=0,righe=0;
	do{				
		printf("Inserisci la lunghezza del quadrato compresa da 1 a 20 \n");
		scanf("%d", &lun);	
		if(lun<1||lun>20)  printf("Valore fuori dai limiti!");			
	}while(lun<1||lun>20);


	do{
			while(righe<lun){
				righe++;
				if(righe<lun) printf("*");
			}
			colonne++;
			righe=0;
			printf("*\n");
	}while(colonne<lun);

	return 0;
}
