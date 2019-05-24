#include <stdio.h>
#include <math.h>

int main()
{
	int num,c1,c2,c3,c4,temp,crip;
	do{
		printf("Inserire  un numero a quattro cifre\n ");
		scanf("%d", &num);
	}while(num<1000 || num>9999);
	temp=num;
	c1=(temp%10+7)%10;
	temp/=10;
	c2=(temp%10+7)%10;
	temp/=10;
	c3=(temp%10+7)%10;
	temp/=10;
	c4=(temp%10+7)%10;
	crip=c2*1000+c1*100+c4*10+c3;

	printf("Numero da crittografare: %d \n Numero crittografato: %d", num,  crip);

	putchar('\n');
	return 0;
}