#include <stdio.h>

int main() {
    int num, i, prime = 1; //prime by default

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        prime = 0; // Numbers less than or equal to 1 are not prime
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                prime = 0; // Found a divisor other than 1 and itself
                break;
            }
        }
    }

    if (prime == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
 