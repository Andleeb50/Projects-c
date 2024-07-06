//Program in c to input a string from the user name ask and length of the string input

#include<stdio.h>

int main() {
    char arr[100];
    int i = 0;

    printf("Enter your name: ");
    scanf("%s", &arr);  // Read the input string

    // Calculate the length of the string manually
    while (arr[i] != '\0') {
        i++;
    }

    printf("The length of the entered name is: %d\n", i);

    return 0;
}
