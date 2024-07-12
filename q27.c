#include <stdio.h>

int main(){
	
	int n,r;
	
	printf("Enter the natural number");
	scanf("%d",&n);
	
	while (n>=1){
		r=n%10;
		printf("%d",r);
		n=n/10;
	}
	
	return 0;
}
