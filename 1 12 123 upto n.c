//program to display series 1 12 123 1234 n times 
#include<stdio.h>
#include<math.h>
int main() 
{ int i,n,j;
printf("enter the value of n ");
scanf("%d", &n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)

{
printf("%d", j);
 }
 printf(" ");

}
return 0;
}