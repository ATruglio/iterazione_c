#include <stdio.h>


int main()
{
	int nf,n=1;
	for(nf=1;nf<=5;nf++){ 
		n*=nf;
		printf("%d! = %d\n", nf, n);
	
	}

	putchar('\n');
	return 0;
}