#include <stdio.h>

int main() {
    int n;

    // user has to enter
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Displaying the series for loop
    printf("Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", i);
    }

    return 0;
}
