#include <stdio.h>

int main() {
	int lun,colonne=0,righe=0;
	char d=' ';
	do{				
		printf("Inserisci la lunghezza del quadrato compresa da 1 a 20 \n");
		scanf("%d", &lun);	
		if(lun<1||lun>20)  printf("Valore fuori dai limiti!");			
	}while(lun<1||lun>20);

	do{
			while(righe<lun-1){
				righe++;
				if(righe==1||colonne==0||colonne==lun-1) printf("*");
				else printf("%c", d);
				if(righe==lun) printf("*");
			}
		colonne++;
		righe=0;
		printf("*\n");
	}while(colonne<lun);

	return 0;
}