#include <stdio.h>

int main()  {
	int max,a,i=0,max2;
	
	printf("Inserisi dieci numeri \t");
	scanf("%d", &a);
	max=a;
	max2=a;
	while(i<9){
			printf("\n");
			scanf("%d", &a);
			if(a>=max){
				max2=max;
				max=a;
			}
			i++;
			/*No 'else' for this 'if'*/
				
	}

	printf("Il massimo dei dieci numeri e %d", max);
	putchar('\n');
	
	printf("Il secondo massimo dei dieci e %d", max2);
	putchar('\n');

	return 0;
}