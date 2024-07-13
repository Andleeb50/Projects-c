//Input an integer array from the user and display the same.
#include <stdio.h>

int main() {
    char arr[5] = "abid";
    int i = 0;

    while(arr[i] != '\0') 
    {
        printf("%c", arr[i]);
        i++;
    }

    }