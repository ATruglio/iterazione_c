#include <stdio.h>


int main()
{
	int colonne,righe;
	
	printf("a.\n");
	for(colonne=1;colonne<=10;colonne++){
		for(righe=0;righe<colonne;righe++)     {      putchar('*'); }
		putchar('\n');
	
	}
	printf("\n b.\n");
	for(colonne=10;colonne>=1;colonne--){
		for(righe=0;righe<colonne;righe++)     {      putchar('*'); }
		putchar('\n');
	
	}
	printf("\n c.\n");
	for(colonne=10;colonne>=1;colonne--){
		for(righe=0;righe<colonne;righe++)     {      putchar('*'); }
		putchar('\n');
	
	}
	putchar('\n');
	return 0;
}