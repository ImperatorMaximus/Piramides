#include <stdio.h>
int main(){
	int i,t,e,j,v;
	t=10;

	for(i=1;i<=t;i++){
	e=t-i;
	for(j=1;j<=e;j++)
		printf("%i\n");

	for(j=1;j<=i;j++){
		v=(i+j-1)%10;
		
		printf("%d",v);
	}
	for(j=1;j<=(i-1);j++)
		printf("%d",((i*2)-1-j)%10);
	printf("\n");
	
	}
	return 0;
}