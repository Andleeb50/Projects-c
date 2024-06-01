#include<stdio.h>
#include<math.h>

int main() {

double a, b, c, D, r1, r2;

printf("Enter coefficients a, b, c, ");

scanf("%lf%lf%lf",&a, &b, &c);

D=b*b-4*a*c;

if (D>0) {

r1=(-b)+sqrt (D)/(2*a);

r2=(-b)-sqrt (D)/(2*a);

printf("The roots are %lf and %lf", r1, r2);
}
else if (D==0) {

r1=-b/(2*a);

r2=-b/(2*a);

printf ("The roots are %lf and %lf", r1, r2);
}
else{

printf("roots are complex");
}
return 0; 

}