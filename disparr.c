#include <stdio.h>

int main() {
    char arr[5] = "abid"; // Changed 'c' to 'arr' and added double quotes for string literal
    int i = 0;
    
    while(arr[i] != '\0') { // Corrected the loop condition and added curly braces
        printf("%c", arr[i]);
        i++;
    }
    
    return 0; // Added return statement
}
