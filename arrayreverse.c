#include <stdio.h>

int main() {
    int n, i;
    
    // Ask the user for the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Input elements in the array
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Display the array in reverse order
    printf("Array in reverse order: \n");
    for(i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
