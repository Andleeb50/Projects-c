// Fibonacci series
#include <stdio.h>
#include<math.h>
int main() {
    int a, b, c, n, x, i;
    printf("Enter the number of terms you want in Fibonacci: ");
    scanf("%d", &x);

    n = x;  // Initialize n with the value of x
    a = 0;
    b = 1;  // Initial values of the Fibonacci series

    printf("%d %d", a, b);  // Print the first two terms

    for (i = 1; i <= n - 2; i++) {
        c = a + b;
        printf(" %d", c); 
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
