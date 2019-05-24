#include <stdio.h>


int main()
{
	int cont;

	printf("a. ");
	for(cont=1;cont<=8;cont++){ 
		printf("%d", cont);
		if(cont!=8) {putchar(',');}
	}
	putchar('\n');

	printf("b. ");
	for(cont=3;cont<=23;cont+=5){ 
		printf("%d", cont);
		if(cont!=23) {putchar(',');}
	}
	putchar('\n');

	printf("c. ");
	for(cont=20;cont>=-10;cont-=6){ 
		printf("%d", cont);
		if(cont!=-10) {putchar(',');}
	}
	putchar('\n');

	printf("d. ");
	for(cont=19;cont<=51;cont+=8){ 
		printf("%d", cont);
		if(cont!=51) {putchar(',');}
	}

	putchar('\n');
	return 0;
}