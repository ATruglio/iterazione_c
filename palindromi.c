#include <stdio.h>


int main()
{
	int r,c5,c4,c2,c1;

	do{
		printf("Inserire  un valore positivo compreso tra 10000 a  99999\n ");
		scanf("%d", &r);
	}while(r<10000 && r>99999);

	c5=r%10;
	r/=10;
	c4=r%10;
	r/=100;
	/*la cifra intermedia non va considerata non va considerata*/	
	c2=r%10;
	r/=10;
	c1=r%10;

	if(c1==c5 && c2==c4) printf("Il numero e palindromo ");
	else printf("Il numero non e palindromo");

	putchar('\n');
	return 0;
}