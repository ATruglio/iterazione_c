#include <stdio.h>

int main()  {
	int max,a,i=0;
	
	printf("Inserisi dieci numeri \t");
	scanf("%d", &a);
	max=a;

	while(i<9){
			printf("\n");
			scanf("%d", &a);
			if(a>=max) max=a;
			i++;	
	}

	printf("Il massimo dei dieci numeri e %d", max);

	putchar('\n');
	return 0;
}