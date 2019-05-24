#include <stdio.h>


int main()
{
	int numb,c,temp,numd=0,peso=1;
	do{
		printf("Inserisci  un numero binario\n ");
		scanf("%d", &numb);	
		temp=numb;
		do{
			c=temp%10;
			temp/=10;
		}while(c<1 || temp>0);
	}while(c>1 );

	temp=numb;
	while(temp>0){
			c=temp%10;
			temp/=10;
			numd=numd+c*peso;
			peso*=2;
	}

	printf("%d(2) = %d(10)", numb, numd);

	putchar('\n');
	return 0;
}