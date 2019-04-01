#include <stdio.h>

int main(){
	int a;

	printf("Da che numero vuoi partire\t");
	scanf("%d",&a);
	printf("\n");

	while(a>0){
		printf("%d\n",a);
		a--;
	}

	printf("Lanciato!");

	return 0;

}