#include <stdio.h>
int main(){
int a,d=0;
printf("Numero di partenza\t");
scanf("%d",&a);
printf("\n");
while(d<5){
printf("%d\n",a);
a+=3;
d++;
}
return 0;

}