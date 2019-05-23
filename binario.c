#include <stdio.h>
#include <math.h>

int main()
{
	int numb,c,temp,numd=0,cont=0;
	printf("Inserisci  un numero binario\n ");
	scanf("%d", &numb);
	temp=numb;
	do{
			c=temp%10;
			temp/=10;
			if(c>1) {
				printf("Inserisci  un numero binario\n ");
				scanf("%d", &numb);
				temp=numb;
				cont=0;
			}
			numd=numd+pow(2,cont);
			cont++;
	}
	while(temp>0);

	printf("%d(2) = %d(10)", numb, numd);

	putchar('\n');
	return 0;
}