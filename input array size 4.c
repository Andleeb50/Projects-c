#include <stdio.h>

int main() {
    int arr[4];
    int i;

    // Input values into the array
    printf("Enter 4 integers:\n");
    for(i = 0; i <= 3; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the values
    printf("The values in the array are:\n");
    for(i = 0; i <= 3; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
