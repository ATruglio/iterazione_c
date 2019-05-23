#include <stdio.h>
#include <math.h>

int main()
{
	int num,c1,c2,c3,c4,temp,crip;
	do{
		printf("Inserire  un numero a quattro cifre\n ");
		scanf("%d", &num);
	}while(num<1000 && num>9999);
	temp=num;
	c1=temp%10;
	if(c1>3)	{ c1-=3;}
	else  		{ c1+=7;}
	temp/=10;
	c2=temp%10;
	if(c2>3)	{ c2-=3;}
	else  		{ c2+=7;}
	temp/=10;
	c3=temp%10;
	if(c3>3)	{ c3-=3;}
	else  		{ c3+=7;}
	temp/=10;
	c4=temp%10;
	if(c4>3)	{ c4-=3;}
	else  		{ c4+=7;}
	crip=c2*1000+c1*100+c4*10+c3;

	printf("Numero da crittografare: %d \n Numero crittografato: %d", num,  crip);

	putchar('\n');
	return 0;
}