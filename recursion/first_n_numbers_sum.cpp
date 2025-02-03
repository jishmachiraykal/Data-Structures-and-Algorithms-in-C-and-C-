//sum of first n natural numbers using recursion:
//time taken = o(n)
#include <stdio.h>
#include <iostream>

int sum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return sum(n-1)+n ;
    }
}

int main() {
    int result = sum(100);  // Start the recursive calls from fun
    std::cout << "Result: " << result << std::endl;  // Print the result

    return 0;
}