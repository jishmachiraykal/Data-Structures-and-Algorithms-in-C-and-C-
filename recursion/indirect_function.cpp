#include <stdio.h>
#include <iostream>

void funB(int n);

void funA(int n) {
    if (n > 0) {
        printf("%d\n", n);
        funB(n - 1);  // Calling funB with n-1
    }
}

void funB(int n) {
    if (n > 1) {
        printf("%d\n", n);
        funA(n / 2);  // Calling funA with n/2
    }
}

int main() {
    funA(20);  // Start the recursive calls from funA
    
    return 0;
}