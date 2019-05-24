#include <stdio.h>
#include <math.h>

int main()
{
	int num,c1,c2,c3,c4,temp,ori;
	do{
		printf("Inserire  un numero a quattro cifre\n ");
		scanf("%d", &num);
	}while(num<1000 || num>9999);
	temp=num;
	c1=(temp%10+3)%10;
	temp/=10;
	c2=(temp%10+3)%10;
	temp/=10;
	c3=(temp%10+3)%10;
	temp/=10;
	c4=(temp%10+3)%10;
	ori=c2*1000+c1*100+c4*10+c3;

	printf("Numero da decrittografare: %d \n Numero originale: %d", num, ori);

	putchar('\n');
	return 0;
}