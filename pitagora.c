#include <stdio.h>

int main(){
	int riga=1,colonna;
	printf("\n");
	while(riga<=10){
		colonna=1;
		while(colonna<=10){
			printf("%d\t",colonna*riga);
			colonna++;
			
	         }
		printf("\n");
	riga++;
	}
	return 0;
}