#include <stdio.h>

int main() {
	int lun,colonne=0,righe=0;
	do{				
		printf("Inserisci la lunghezza del quadrato compresa da 1 a 20 \n");
		scanf("%d", &lun);	
		if(lun<1||lun>20)  printf("Valore fuori dai limiti!");			
	}while(lun<1||lun>20);
	while(righe<lun){
			colonne=0;
			while(colonne<lun-1){
				colonne++;
				if(colonne==1||righe==0||righe==lun-1) printf("*");
				else putchar(' ');
				if(colonne==lun) printf("*");
			}
		printf("*\n");
		righe++;
	}
	
	putchar('\n');
	return 0;
}