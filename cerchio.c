#include <stdio.h>


int main()
{
	double pi=3.14,a,c,r;

	do{
		printf("Inserire il raggio del cerchio con un valore positivo\n");
		scanf("%lf",&r);
	}while(r<=0);

	a=r*r*pi;
	c=2.0*r*pi;

	printf("La circonferenza del cerchio e %f \n",c);
	printf("La superfice  del cerchio e %f \n",a);

	putchar('\n');
	return 0;
}