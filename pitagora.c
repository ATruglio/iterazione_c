#include <stdio.h>

int main(){
	int c=1,a=1;
	printf("\n");
	while(c<=10){
		while(a<=10){
			printf("%d\t",a*c);
			a++;
			
	         }
		c++;
		a=1;
		printf("\n");
	}
	return 0;
}