#include <stdio.h>

int main(){
	
	int i,j,n;
	
	printf("Enter n \n");
	scanf("%d",&n);
	
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=5; j++)
		printf("%d",j);
		printf(" ");
	}
	
	return 0;
}
