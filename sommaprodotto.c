#include <stdio.h>


int main()
{
	int cont,somma=0,prodotto=1;

	for(cont=1;cont<=30;cont++){ 
		if(cont%2==0) {somma+=cont;}
		else if(cont<15){prodotto*=cont;}
	}
	printf("Somma dei numeri pari: %d\nProdotto dei numeri dispari: %d", somma, prodotto);

	putchar('\n');
	return 0;
}