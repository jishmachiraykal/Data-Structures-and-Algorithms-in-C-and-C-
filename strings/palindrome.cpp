//checking palindrome:
#include <stdio.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    char A[] = "gadag";
    int i, j;

    // Find the length of the string
    for (j = 0; A[j] != '\0'; j++) {
    }

    j = j - 1;  // Set j to the index of the last character of the string (excluding \0)
    // Check if the string is a palindrome
    for (i = 0; i < j; i++, j--) {
        if (A[i] != A[j]) {  // Compare characters from both ends
            printf("String is not palindrome\n");
            return 0;  // Exit immediately if characters don't match
        }
    }

    // If no mismatch is found, it's a palindrome
    printf("String is palindrome\n");
    
    return 0;
}