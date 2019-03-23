#include <stdio.h>
int main(){
int d=1,c=1,a=1;
printf("\n");
while(c<=10){
	while(a<=10){
		printf("%d\t",d*c);
		a++;
		d++;
		}
c++;
d=1;
a=1;
printf("\n");
}
return 0;
}