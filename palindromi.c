#include <stdio.h>


int main()
{
	int num,c5,c4,c2,c1;

	do{
		printf("Inserire  un valore positivo compreso tra 10000 a  99999\n ");
		scanf("%d", &num);
	}while(num<10000 && num>99999);

	c5=num%10;
	num/=10;
	c4=num%10;
	r/=100;
	/*la cifra intermedia non va considerata non va considerata*/	
	c2=num%10;
	num/=10;
	c1=num%10;

	if(c1==c5 && c2==c4) printf("Il numero e palindromo ");
	else printf("Il numero non e palindromo");

	putchar('\n');
	return 0;
}