#include <stdio.h>


int main()
{
	int cont,somma=0,prodotto=1;

	for(cont=2;cont<=30;cont+=2){ somma+=cont;}
	for(cont=3;cont<=15;cont+=2){ prodotto*=cont;}
	printf("Somma dei numeri pari: %d\nProdotto dei numeri dispari: %d", somma, prodotto);

	putchar('\n');
	return 0;
}