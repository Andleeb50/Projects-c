//sizeofarray
#include <stdio.h>

#define MAX_SIZE 100  // Predefined size for the array

int main() {
    int array[MAX_SIZE];
    int n, i;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements (up to %d): ", MAX_SIZE);
    scanf("%d", &n);

    // Enter elements into the array
    printf("Enter %d elements: \n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Output the elements
    printf("The elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
